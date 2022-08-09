#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>
#include <sstream>
#define PORT 9909

using namespace std;

struct sockaddr_in srv;
fd_set fr,fw,fe; // for read , write and exception scoket descriptors or file descriptors, maximum 64 elements in fd_array

int main(){
    //step 1 - initialize the socket
    int nSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP) ; //AFNET IS FOR udp/tcp
    int nRet = 0;
    if(nSocket < 0)
    {
        /* code */
        cout<<"The socket not opened"<<endl;
    }
    else
    {
        cout<<"The socket has opened successfully with Socket id "<<nSocket<<endl;
    }

    // Step 2 - Initialize the environment for sockaddr struct
    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT); //htons is network byte order, look at Big Endian and Little Endian
    //srv.sin_addr.s_addr = INADDR_ANY; //ASSIGNING the address of local machine since socket communicates with same machine
    srv.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(& srv.sin_zero,0,8); //value is zero and size is 8

    //Step 3 Bind the socket to the local port
    nRet = bind(nSocket, (sockaddr*)&srv, sizeof(sockaddr)); //name of socket, address of socket, namelength
    
    if (nRet<0)
    {
        /* code */
        cout<<"Fail to bind to the local port"<<endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cout<<"Successfully bind to local port"<<endl;
    }

    //step 4 Listen to the request from client
    nRet = listen(nSocket,5); //backlog is 5, how many requests at a time a server can pull, other than 5 clients will wait in queue

    if (nRet<0)
    {
        /* code */
        cout<<"Fail to listen to the local port"<<endl;
        exit(EXIT_FAILURE);

    }
    else
    {
        cout<<"Started listening to local port"<<endl;
    }  
    
    int n = 100;
    for (int i = 0; i < 64; i++)
    {
        /* code */
        FD_SET(n, &fr);
        n++;

    }

    cout<<fr.fd_count<<endl;
    for (int i = 0; i < 64; i++)
    {
        /* code */
        cout<<fr.fd_array[i];
    }
    
    
    
    
    
    return 0;
}