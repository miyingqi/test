#include "widget.h"
#include "./ui_widget.h"
extern class Socket  opp;
extern class server  op;
extern class clinet  oop;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    this->setLayout(ui->glob);
     
    ssetport();
    QObject::connect(ui->setip,&QPushButton::clicked,this,[=](){

        setaddr();
    });
    QObject::connect(ui->setport,&QPushButton::clicked,this,[=](){
        setport();    
    });
    QObject::connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        accept();
    });
    
    if(op.port!=0)
    {
        op.creatsocket();
        op.bindsocket();
        op.listensocket();       
    }
    Listernthread* li=new Listernthread;
    QObject::connect(ui->jieshou,&QPushButton::clicked,this,[=](){
        li->start();
    });
    QObject::connect(li,&Listernthread::sendint,this,[=](){
        setzt();
    });
    QObject::connect(li,&Listernthread::sendflag,this,[=](){
        QString o(op.data0);
        ui->textEdit->append(o);
        memset(op.data0,0,sizeof(op.data0));
    });
}

Widget::~Widget()
{
    delete ui;
}
void Widget::setport()
{
    QString port=ui->port1->text();
    int portnum=port.toInt();
    oop.port=portnum;
}
void Widget::setaddr()
{
    QString addr=ui->ip->text();
    for(int i=0;i<addr.length();i++)
    {
        oop.addr[i]=addr[i].toLatin1();
    }
}
void Widget::ssetport(){
    if(op.port!=0)
    return ;
    int port=FindAvailableTcpPort();
    op.port=port;
    char porrt[10];
    sprintf(porrt,"%d",port);
    ui->port->setPlaceholderText(tr(porrt));

}
void Widget::setzt()
{
    ui->zhuangtai->setText("已连接");
}
void Widget::accept()
{
    if(oop.addr!=0&&oop.port!=0&&oop.flag==0)
    {
    oop.creatclientsocket();
    oop.connectclinetsocket();
    oop.flag=1;
    }
    else if (oop.flag==1)
    {    
    QTextDocument *doc = ui->textEdit_2->document();
    QTextBlock last=doc->lastBlock();
    QString lastt=last.text();
    std::string ooo=lastt.toStdString();
    const char* ch=ooo.c_str();
    oop.sendmessage(ch);
    }
}
