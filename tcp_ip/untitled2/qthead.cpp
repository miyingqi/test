#include "qthead.h"
#include"widget.h"
extern class Socket  opp;
extern class server  op;
extern class clinet  oop;
Listernthread::Listernthread(QObject *parent)
{}
void Listernthread::run()
{
    if(op.port!=0&&op.flag==0)
    {
        if(sinal==0)
        sinal=op.listensocket();
        if(sinal1==0)
        sinal1=op.recvsocket();
        if(sinal!=0&&sinal1!=0)
        {op.flag=1;
        
        }
    }
    if(sinal==1)
    {
        emit sendint(1);
    }
    if(sinal!=0&&sinal1!=0&&op.flag==1)
    {
        if(op.data0[0]=='\0')
        {   
        op.message();
        sendflag(0);
        }
        

    }
    
}