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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *QUAN;
    QWidget *ding;
    QWidget *layoutWidget1;
    QHBoxLayout *A;
    QPushButton *A1;
    QPushButton *A2;
    QPushButton *A3;
    QSpacerItem *A_AA;
    QTextEdit *textEdit;
    QWidget *wei;
    QWidget *layoutWidget2;
    QHBoxLayout *B_B;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *chose_a;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(560, 635);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 551, 591));
        QUAN = new QVBoxLayout(layoutWidget);
        QUAN->setObjectName("QUAN");
        QUAN->setContentsMargins(0, 0, 0, 0);
        ding = new QWidget(layoutWidget);
        ding->setObjectName("ding");
        ding->setMinimumSize(QSize(0, 50));
        ding->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);"));
        layoutWidget1 = new QWidget(ding);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 549, 52));
        A = new QHBoxLayout(layoutWidget1);
        A->setObjectName("A");
        A->setContentsMargins(0, 0, 0, 0);
        A1 = new QPushButton(layoutWidget1);
        A1->setObjectName("A1");
        A1->setMinimumSize(QSize(35, 35));
        A1->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/icon/3.png);}\n"
"\n"
"QPushButton:hover{border-image: url(:/icon/1.png)}\n"
"QPushButton:pressed{border-image: url(:/icon/5.png)}\n"
""));

        A->addWidget(A1);

        A2 = new QPushButton(layoutWidget1);
        A2->setObjectName("A2");
        A2->setMinimumSize(QSize(35, 35));
        A2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/icon/7.png)}\n"
"\n"
"\n"
"QPushButton:hover{border-image: url(:/icon/8.png)}\n"
"QPushButton:pressed{border-image: url(:/icon/6.png)}"));

        A->addWidget(A2);

        A3 = new QPushButton(layoutWidget1);
        A3->setObjectName("A3");
        A3->setMinimumSize(QSize(35, 35));
        A3->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/icon/4.png);}\n"
"QPushButton:hover{border-image: url(:/icon/1.png);}\n"
"QPushButton:pressed{border-image: url(:/icon/5.png);}\n"
"\n"
"\n"
""));

        A->addWidget(A3);

        A_AA = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        A->addItem(A_AA);


        QUAN->addWidget(ding);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        QUAN->addWidget(textEdit);

        wei = new QWidget(layoutWidget);
        wei->setObjectName("wei");
        wei->setMinimumSize(QSize(0, 60));
        wei->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);"));
        layoutWidget2 = new QWidget(wei);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 20, 541, 23));
        B_B = new QHBoxLayout(layoutWidget2);
        B_B->setObjectName("B_B");
        B_B->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        B_B->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 0));

        B_B->addWidget(label);

        chose_a = new QComboBox(layoutWidget2);
        chose_a->addItem(QString());
        chose_a->addItem(QString());
        chose_a->addItem(QString());
        chose_a->setObjectName("chose_a");

        B_B->addWidget(chose_a);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        B_B->addItem(horizontalSpacer_3);


        QUAN->addWidget(wei);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\260\344\272\213\346\234\254", nullptr));
        A1->setText(QString());
        A2->setText(QString());
        A3->setText(QString());
        label->setText(QString());
        chose_a->setItemText(0, QCoreApplication::translate("Widget", "UTF-8", nullptr));
        chose_a->setItemText(1, QCoreApplication::translate("Widget", "UTF-16", nullptr));
        chose_a->setItemText(2, QCoreApplication::translate("Widget", "GBK", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
