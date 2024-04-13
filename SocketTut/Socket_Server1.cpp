#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    // create a socket
    int listening = socket(AF_INET, SOCK_STREAM, 0);
    if (listening == -1)
    {
        /* code */
        cerr << "Can't create a socket!";
        return -1;
    }

    // Bind socket to a IP/port
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(9999);                   // Little to big endian conversion since this is an intel processor
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr); // converts a number to array of integers 127.0.0.1 is home address

    if (bind(listening, (sockaddr *)&hint, sizeof(hint)) == -1)
    {
        /* code */
        cerr << "Can't bind to IP/port";
        return -2;
    }

    // Mark socket for listening in
    if (listen(listening, SOMAXCONN) == -1)
    {
        /* code */
        cerr << "Can't listen";
        return -3;
    }

    // Accept a call
    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    char host[NI_MAXHOST];
    char svc[NI_MAXSERV];

    int clientSocket = accept(listening, (sockaddr *)&client, &clientSize);

    if (clientSocket == -1)
    {
        /* code */
        cerr << "Problem with client connecting";
        return -4;
    }

    // CLose the listening socket

    close(listening);

    memset(host, 0, NI_MAXHOST); // cleaning all the random garbage
    memset(svc, 0, NI_MAXSERV);

    int result = getnameinfo((sockaddr *)&client, sizeof(client), host, NI_MAXHOST, svc, NI_MAXSERV, 0);

    if (result)
    {
        /* code */
        cout << host << " connected on " << svc << endl;
    }
    else
    {
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST); // opposite of inet_pton ntop numeric to string
        cout << host << " connected on " << ntohs(client.sin_port) << endl;
    }

    // While recieving display message, echo message
    char buf[4096];
    while (true)
    {
        // clear the buffer
        memset(buf, 0, 4096);
        // wait for a message
        int bytesRecv = recv(clientSocket, buf, 4096, 0);
        if (bytesRecv == -1)
        {
            /* code */
            cerr << "There was a connection issue" << endl;
            break;
        }

        if (bytesRecv == 0)
        {
            /* code */
            cerr << "The client disconnected" << endl;
            break;
        }

        // Display message
        cout << "Received: " << string(buf, 0, bytesRecv) << endl;

        // resend message

        send(clientSocket, buf, bytesRecv + 1, 0); //+1 since we need to have zero at end???? not understood
    }

    // Close socket
    close(clientSocket);

    return 0;
}