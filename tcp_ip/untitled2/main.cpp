#include "widget.h"

#include <QApplication>

server op;
clinet oop;
Socket opp;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
