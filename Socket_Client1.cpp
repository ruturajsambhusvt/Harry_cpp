#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string>
#include <string.h>

using namespace std;

int main(){

    //create a socket
    int sock = socket(AF_INET, SOCK_STREAM,0);
    if (sock==-1)
    {
        return 1;
    }

    //hint structure for server we are connecting with
    int port = 9999;
    string ipAddress = "127.0.0.1"; //local machine

    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(),&hint.sin_addr);

    //Connect to the server on the socket
    int connectRes = connect(sock,(sockaddr*)&hint, sizeof(hint));
    if (connectRes==-1)
    {
        /* code */
        return 1;
    }
    char buf[4096];
    string userInput;

    while (true)
    {
        //enter the lines of text
        cout<<">";
        getline(cin,userInput); //we want entire line of text

        //send to server
        int sendRes = send(sock,userInput.c_str(),userInput.size()+1,0);
        //TOD: check if that failed
        if (sendRes==-1)
        {
            /* code */
            cout<<"Could not send to server!"<<endl;
            continue;
        }
        

        // wait for response
        memset(buf,0,4096);
        int bytesReceived = recv(sock,buf,4096,0);


        //display response
        cout<<"SERVER> "<< string(buf,bytesReceived)<<"\r\n";


    }

    //close the socket
    close(sock);
    
    
    
    return 0;
}