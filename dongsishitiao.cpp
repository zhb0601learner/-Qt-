#include "dongsishitiao.h"
#include "ui_dongsishitiao.h"
#include "config.h"

dongsishitiao::dongsishitiao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dongsishitiao)
{
    ui->setupUi(this);
    if(index==0)
    {
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->pushButton_3->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->label_5->hide();
    }
    else
    {
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_3->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->label_5->hide();
    }
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

dongsishitiao::~dongsishitiao()
{
    delete ui;
}

void dongsishitiao::on_pushButton_2_clicked()
{
    if(index==1)
    {
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->pushButton_3->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->label_5->hide();
        index--;
    }
    else if(index==0)
    {
        index=3;
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_3->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->label_5->hide();
    }
    else
    {
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_3->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->label_5->hide();
        index--;
    }
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void dongsishitiao::on_pushButton_clicked()
{
    if(index==3)
    {
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->pushButton_3->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->label_5->hide();
        index=0;
    }
    else
    {
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_3->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->label_5->hide();
        index++;
    }
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void dongsishitiao::on_pushButton_3_clicked()
{
    if(ui->lineEdit->text()=="3"&&ui->lineEdit_2->text()=="1957"&&ui->lineEdit_3->text()=="2023")
    {
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_3->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->pushButton->hide();
        ui->pushButton_2->hide();
        ui->label_5->show();
        index=4;
        QPixmap pixmap(photo[index]);
        ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
        ui->label->show();
    }
    else
    {
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
    }
}
