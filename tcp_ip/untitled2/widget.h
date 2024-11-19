#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include<QTextBlock>
#include<thread>
#include"Socket.h"
#include"qthead.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
friend class Socket;
friend class server;
friend class clinet;
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
   
private:
    Ui::Widget *ui;
signals:

private slots:
    void setport();
    void setaddr();
    void ssetport();
    void setzt();
    void accept();
};


#endif // WIDGET_H
