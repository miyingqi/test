#include"Socket.h"
std::vector<uint16_t> GetAllTcpConnectionsPort()
{
    std::vector<uint16_t> ret;
    ULONG size = 0;
    GetTcpTable(NULL, &size, TRUE);
    std::unique_ptr<char[]> buffer(new char[size]);

   PMIB_TCPTABLE tcpTable = reinterpret_cast<PMIB_TCPTABLE>(buffer.get());
    if (GetTcpTable(tcpTable, &size, FALSE) == NO_ERROR)
        for (size_t i = 0; i < tcpTable->dwNumEntries; i++)
            ret.push_back(ntohs((uint16_t)tcpTable->table[i].dwLocalPort));
    sort(begin(ret), end(ret));
    return ret;
}
uint16_t FindAvailableTcpPort(uint16_t begin , uint16_t end)
{
    auto vec = GetAllTcpConnectionsPort();
    for (uint16_t port = begin; port != end; ++port)
        if (!binary_search(std::begin(vec), std::end(vec), port))
            return port;
    return 0;
}
int server::creatsocket()
{
    serverSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(serverSocket == INVALID_SOCKET)
    {

        exit(EXIT_FAILURE);
    }
    return 0;
}
int server::bindsocket(int ADDR)
{
    sockaddr_in addr_in;
    addr_in.sin_family = AF_INET;
    addr_in.sin_port = htons(port);
    addr_in.sin_addr.s_addr = ADDR;
    while(bind(serverSocket,(sockaddr*)&addr_in,sizeof(addr_in))== SOCKET_ERROR)
    exit(EXIT_FAILURE);
    return 0;
}
int server::listensocket(int backlog)
{
    if(listen(serverSocket,backlog) == SOCKET_ERROR)
    {
        exit(EXIT_FAILURE);
    }
    return 1;
}
int server::recvsocket()
{
    connrction_socket=accept(serverSocket,(sockaddr*)&connection_addr_in,&len);
    if(connrction_socket != INVALID_SOCKET)
    {
        return 1;
    }
    return 0;
}
int server::message()
{
    int num=recv(connrction_socket,data0,100,0);
    if(num>0)
    {
        data0[num]='\0';
    }
    return 0;
}
int clinet::creatclientsocket()
{
    clientsocket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if (clientsocket == INVALID_SOCKET) {
			return 1;
		}
    sock_in.sin_family = AF_INET;
    sock_in.sin_port = htons(port);
    return 0;
}
int clinet::connectclinetsocket()
{
    inet_pton(AF_INET,addr,&sock_in.sin_addr.S_un.S_addr);
    if (connect(clientsocket, (sockaddr*)&sock_in, sizeof(sock_in)) == SOCKET_ERROR) {
			return 1;
		}
    return 0;
}
int clinet::sendmessage(const char arr[])
{
    std::string data=arr;
    const char *senddata;
    senddata = data.c_str();
    send(clientsocket, senddata, strlen(senddata), 0);//将数据发送给套接字
    return 0;
}