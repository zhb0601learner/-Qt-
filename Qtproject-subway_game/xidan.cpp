#include "xidan.h"
#include "ui_xidan.h"
#include "config.h"
#include <QDialog>
#include <QPainter>

xidan::xidan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xidan)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

void xidan::on_pushButton_clicked()
{
    if(index==2)
        index=0;
    else
        index++;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void xidan::on_pushButton_2_clicked()
{
    if(index==0)
        index=2;
    else
        index--;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void xidan::on_pushButton_3_clicked()
{
    QWidget* widget=new QWidget();
    widget->setWindowTitle(QObject::tr("提示"));
    widget->resize(250,60);
    QPainter painter(widget);
    painter.drawEllipse(QPoint(125,30),15,15);
    painter.drawLine(QPoint(100,30),QPoint(105,30));
    painter.drawLine(QPoint(145,30),QPoint(150,30));
    painter.drawLine(QPoint(125,5),QPoint(125,10));
    painter.drawLine(QPoint(125,50),QPoint(125,55));
    painter.drawLine(QPoint(107,12),QPoint(110,16));
    painter.drawLine(QPoint(140,16),QPoint(143,12));
    painter.drawLine(QPoint(107,48),QPoint(110,44));
    painter.drawLine(QPoint(140,44),QPoint(143,18));
    painter.drawText(QRect(90,25,10,10),"2.");
}

xidan::~xidan()
{
    delete ui;
}
