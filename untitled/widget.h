#ifndef WIDGET_H
#define WIDGET_H
#include<iostream>
#include<qdebug.h>
using namespace std;
#include <QWidget>
#include<qfile.h>
#include<QFileDialog>
#include <QStringConverter>
#include<QTextCodec>
#include <QList>
#include <QTextEdit>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QFile file;
    QString context;
    QByteArray swap; 
    QTextCodec *codec[3] ={\
    QTextCodec::codecForName("UTF-8"),\
    QTextCodec::codecForName("UTF-16"),\
    QTextCodec::codecForName("GBK")} ;
    QTextCodec* ttmp();
    int cho_swap();
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void openfile();
    void savefile();
    void closefile();
    void b_chose(int num);
    void where_seek();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
