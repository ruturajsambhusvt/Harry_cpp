#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <cstring>
#include <string.h>
#include <fcntl.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <chrono>
#include <array>
#include <algorithm>
#include <iterator>

int main()
{
    int port = 8080;
    int sock = 0;
    int valread;
    struct sockaddr_in serv_addr;
    char buffer[200] = {0};
    std::array<double, 7> data;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        std::cout << "Socket creation error" << std::endl;
    }
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    if (inet_pton(AF_INET, "192.168.1.42", &serv_addr.sin_addr) <= 0)
    {
        std::cout << "Invalid address/ Address not supported" << std::endl;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        std::cout << "Connection Failed" << std::endl;
    }
    int status = fcntl(sock, F_SETFL, fcntl(sock, F_GETFL, 0) | O_NONBLOCK);
    if (status == -1)
    {
        /* code */
        std::cout << "Error in setting non blocking" << std::endl;
    }
    while (true)
    {
        valread = read(sock, buffer, 200);
        if (valread > 0)
        {
            std::stringstream ss(buffer);

            bool first = false;
            while (not first)
            {
                std::string substr;
                getline(ss, substr, ',');
                if (substr[0] == 's')
                {
                    first = true;
                }
            }
            for (int i = 0; i < 7; i++)
            {
                std::string substr;
                getline(ss, substr, ',');
                double term = std::stod(substr);
                data[i] = term;
                // std::cout<<term<<std::endl;
            }
        } else {
            for (int i = 0; i < 7; i++)
            {
                data[i] = 0.0;
            }
            
        }
        std::copy(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "));
        std::cout << std::endl;

        // std::cout<<data[0]<<std::endl;

        usleep(1000*10);
    }

    return 0;
}