#include "textread.h"
#include "ui_textread.h"
#include "config.h"
#include <QString>
#include <QFile>
TextRead::TextRead(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextRead)
{
    ui->setupUi(this);
    int num=0;
    for(int i=0;i<5;i++)
        if(text[i]==1)num++;
    QString str=QString("当前可阅读文档：%1/5").arg(num);
    ui->label->setText(str);
}

TextRead::~TextRead()
{
    delete ui;
}

void TextRead::on_pushButton_clicked()
{
    int num=0;
    for(int i=0;i<5;i++)
        if(text[i]==1)num++;
    if(num!=0)
    {
        for(;;)
        {
           index--; if(index==-1)index=4;
           if(text[index]==1)break;
        }
        QFile file(filename[index]);
        file.open(QIODevice::ReadOnly);
        QByteArray arr=file.readAll();
        ui->textBrowser->setText(QString(arr));
    }
}

void TextRead::on_pushButton_2_clicked()
{
    int num=0;
    for(int i=0;i<5;i++)
        if(text[i]==1)num++;
    if(num!=0)
    {
        for(;;)
        {
           index++; if(index==5)index=0;
           if(text[index]==1)break;
        }
        QFile file(filename[index]);
        file.open(QIODevice::ReadOnly);
        QByteArray arr=file.readAll();
        ui->textBrowser->setText(QString(arr));
        file.close();
    }
}
