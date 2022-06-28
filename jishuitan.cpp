#include "jishuitan.h"
#include "ui_jishuitan.h"
#include "config.h"

jishuitan::jishuitan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jishuitan)
{
    ui->setupUi(this);
}

jishuitan::~jishuitan()
{
    delete ui;
}

void jishuitan::on_pushButton_2_clicked()
{
    if(index==2)
        index=0;
    else index++;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void jishuitan::on_pushButton_clicked()
{
    if(index==0)
        index=2;
    else index--;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}
