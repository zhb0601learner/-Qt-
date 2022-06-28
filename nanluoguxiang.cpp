#include "nanluoguxiang.h"
#include "ui_nanluoguxiang.h"
#include "config.h"

nanluoguxiang::nanluoguxiang(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nanluoguxiang)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

nanluoguxiang::~nanluoguxiang()
{
    delete ui;
}

void nanluoguxiang::on_pushButton_clicked()
{
    if(index==0)
    {
        index=1;
        ui->pushButton->setText("隐藏提示");
        QPixmap pixmap(photo[index]);
        ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
        ui->label->show();
    }
    else
    {
        index=0;
        ui->pushButton->setText("提示");
        QPixmap pixmap(photo[index]);
        ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
        ui->label->show();
    }
}
