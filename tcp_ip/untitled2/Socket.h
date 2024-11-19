#ifndef SOCKET_H
#define SOCKET_H
#include<winsock2.h>
#include<Ws2tcpip.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include <tcpmib.h>
#include <IPHlpApi.h>
#include <vector>
#include <memory>
#include <algorithm>
#include <cstdint>
#include<iostream>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "ws2_32.lib ")  //linking to the library
#define PORT_DOWN 49152
#define PORT_UP 65535
class Socket
    {
        public:
        WORD socketVersion = MAKEWORD(2,2);
        WSADATA wsaData;
            Socket()
            {
                if(WSAStartup(socketVersion,&wsaData) != 0)
                {

                    exit(EXIT_FAILURE);
                }
            }
            ~Socket()
            {
            closesocket(socketVersion);
            WSACleanup();
            }
    }; 
class server :public Socket 
{
    public:
    SOCKET serverSocket;
    SOCKET connrction_socket;
    sockaddr_in connection_addr_in;
    char data0[1000];
    int flag=0;
    int len=sizeof(connection_addr_in);
    int port=0;
    server()
    {
        creatsocket();
        bindsocket();
    }
    ~server()
    {
    closesocket(connrction_socket);
    closesocket(serverSocket);
    WSACleanup();
    }
    int creatsocket();
    int bindsocket(int ADDR=INADDR_ANY);
    int listensocket(int backlog=5);
    int recvsocket();
    int message();
};
class clinet: public Socket
{
    public:
    int flag=0;
    SOCKET clientsocket;
    sockaddr_in sock_in;
    char addr[20]{0};
    int port=0;
    clinet()
    {
    }
    ~clinet()
    {
        closesocket(clientsocket);//将套接字关闭
        WSACleanup();//关闭
    }
    int creatclientsocket();
    int connectclinetsocket();
    int sendmessage(const char addr[]);
};
uint16_t FindAvailableTcpPort(uint16_t begin = PORT_DOWN, uint16_t end = PORT_UP);
std::vector<uint16_t> GetAllTcpConnectionsPort();
#endif