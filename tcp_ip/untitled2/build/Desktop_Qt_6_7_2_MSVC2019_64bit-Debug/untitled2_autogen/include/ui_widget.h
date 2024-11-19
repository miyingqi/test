/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *glob;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *port;
    QLineEdit *zhuangtai;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ip;
    QPushButton *setip;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *port1;
    QPushButton *setport;
    QGroupBox *lobb;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;
    QPushButton *jieshou;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(661, 600);
        gridLayout_6 = new QGridLayout(Widget);
        gridLayout_6->setObjectName("gridLayout_6");
        glob = new QVBoxLayout();
        glob->setObjectName("glob");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_2);

        port = new QLineEdit(groupBox);
        port->setObjectName("port");

        horizontalLayout_2->addWidget(port);

        zhuangtai = new QLineEdit(groupBox);
        zhuangtai->setObjectName("zhuangtai");
        zhuangtai->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_2->addWidget(zhuangtai);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_3);

        ip = new QLineEdit(groupBox);
        ip->setObjectName("ip");

        horizontalLayout_3->addWidget(ip);

        setip = new QPushButton(groupBox);
        setip->setObjectName("setip");
        setip->setMinimumSize(QSize(65, 0));
        setip->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_3->addWidget(setip);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_4);

        port1 = new QLineEdit(groupBox);
        port1->setObjectName("port1");

        horizontalLayout_4->addWidget(port1);

        setport = new QPushButton(groupBox);
        setport->setObjectName("setport");
        setport->setMinimumSize(QSize(65, 0));
        setport->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_4->addWidget(setport);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        glob->addWidget(groupBox);

        lobb = new QGroupBox(Widget);
        lobb->setObjectName("lobb");
        gridLayout_3 = new QGridLayout(lobb);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_3 = new QGroupBox(lobb);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName("gridLayout_5");
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName("textEdit");

        gridLayout_5->addWidget(textEdit, 1, 0, 1, 1);

        jieshou = new QPushButton(groupBox_3);
        jieshou->setObjectName("jieshou");

        gridLayout_5->addWidget(jieshou, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(lobb);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        textEdit_2 = new QTextEdit(groupBox_4);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout_4->addWidget(textEdit_2, 2, 0, 1, 1);

        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName("pushButton");

        gridLayout_4->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 2);


        glob->addWidget(lobb);


        gridLayout_6->addLayout(glob, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250PORT", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\233\256\346\240\207IP", nullptr));
        setip->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\347\233\256\346\240\207PORT", nullptr));
        setport->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        lobb->setTitle(QString());
        groupBox_3->setTitle(QString());
        jieshou->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        groupBox_4->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
