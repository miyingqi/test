#ifndef QTHEAD_H
#define QTHEAD_H

#include <QThread>



class Listernthread : public QThread
{
    Q_OBJECT
public:
    int sinal=0;
    int sinal1=0;
    int flag=0;
    char arr[1000];
    explicit Listernthread(QObject *parent = nullptr);
protected:
    void run() override;
signals: 
void sendflag(int m);
void sendint(int m);
};

#endif // QTHEAD_H
