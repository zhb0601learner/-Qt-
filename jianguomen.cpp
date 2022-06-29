#include "jianguomen.h"
#include "ui_jianguomen.h"
#include "config.h"
#include <QDialog>

jianguomen::jianguomen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jianguomen)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

jianguomen::~jianguomen()
{
    delete ui;
}

void jianguomen::on_pushButton_clicked()
{
    if(index==3)
        index=0;
    else
        index++;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void jianguomen::on_pushButton_2_clicked()
{
    if(index==0)
        index=3;
    else
        index--;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}
