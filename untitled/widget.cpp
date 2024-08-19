#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    
    ui->setupUi(this);
    this->setLayout(ui->QUAN);
    ui->wei->setLayout(ui->B_B);
    QObject::connect(ui->A1,SIGNAL(clicked()),this,SLOT(openfile()));
    QObject::connect(ui->A2,SIGNAL(clicked()),this,SLOT(savefile()));
    QObject::connect(ui->A3,SIGNAL(clicked()),this,SLOT(closefile()));
    QObject::connect(ui->chose_a,SIGNAL(currentIndexChanged(int)),this,SLOT(b_chose(int)));
    QObject::connect(ui->textEdit,SIGNAL(cursorPositionChanged()),this,SLOT(where_seek()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::openfile()
{
    
    QString file_open = QFileDialog::getOpenFileName(this,tr("Open File"),\
    "C:\\",tr("Text (*.txt)"));
    ui->textEdit->clear();
    file.setFileName(file_open);

    if(!file.open(QIODevice::ReadWrite|QIODevice::Text))
    return ;
    //QByteArray bytes = str.toLatin1();
    QTextStream in(&file);
    QTextCodec *tmp=ttmp();
    

    while(!in.atEnd())
    {
        context =in.readLine();
        context=tmp->fromUnicode(context);
        ui->textEdit->append(context);
    }
}

void Widget::savefile()
{
    if(!file.isOpen())
    {
        QString file_save = QFileDialog::getSaveFileName(this,tr("Save File"),\
    "C:\\",tr("Text (*.txt)"));
    file.setFileName(file_save);
    }
    file.open(QIODevice::ReadWrite|QIODevice::Text);
    
    QTextStream out(&file);
    QTextCodec *tmp=ttmp();
    context=tmp->fromUnicode(context);
    context=ui->textEdit->toPlainText();
    out<<context;

}

void Widget::closefile()
{
    QMessageBox msgBox;
    msgBox.setText("是否保存文件");
    int ret = QMessageBox::warning(this,tr("提示"),tr("是否保存？"),\
    QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel,\
    QMessageBox::Save);
    switch (ret) {
    case QMessageBox::Save:
       savefile();
       ui->textEdit->clear();
       break;
    case QMessageBox::Discard:
       // Don't Save was clicked
        if(file.isOpen())
        file.close();
        ui->textEdit->clear();
       break;
    case QMessageBox::Cancel:
       // Cancel was clicked
       break;
    default:
       // should never be reached
       break;
 }

    
}
void Widget::b_chose(int num)
{ 
    ui->textEdit->clear();
    if(file.isOpen()){
        QTextStream in(&file);
        QTextCodec *tmp=ttmp();
        file.seek(0);
        while(!in.atEnd())
    {
        context =in.readLine();
        context=tmp->fromUnicode(context);
        ui->textEdit->append(context);
    }
    }
    
    
}
void Widget::where_seek()
{
    
    QTextCursor cursor=ui->textEdit->textCursor();
    QString bnumber=QString::number(cursor.blockNumber()+1);
    QString lnumber=QString::number(cursor.columnNumber()+1);
    QString laybe1="行"+bnumber;
    QString laybe2="列"+lnumber;
    const QString laybe3=laybe1+laybe2;
    ui->label->setText(laybe3);
    QList<QTextEdit::ExtraSelection> extraSelections;
    QTextEdit::ExtraSelection ext;
    ext.cursor=ui->textEdit->textCursor();
    QBrush qbrush(Qt::yellow);
    ext.format.setBackground(qbrush); 
    ext.format.setProperty(QTextFormat::FullWidthSelection,true);
    extraSelections.append(ext);
    ui->textEdit->setExtraSelections(extraSelections);

}
int Widget::cho_swap()
{
    QString tmp=ui->chose_a->currentText();
    if (tmp=="UTF-8")
    return 0;
    else if(tmp=="UTF-16")
    return 1;
    else if(tmp=="GBK")
    return 2;
    else 
    return 0;
}
QTextCodec* Widget::ttmp()
{
    QTextCodec *tmp=nullptr;
    int tmp_num=cho_swap();
    switch (tmp_num)
    {
    case 0:
        tmp=codec[0];
        break;
    case 1:
        tmp=codec[1];
        break;
    case 2:
        tmp=codec[2];
        break;
    default:
        break;
    }
    return tmp;
}