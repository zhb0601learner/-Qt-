#include "fuxingmen.h"
#include "ui_fuxingmen.h"
#include <QDialog>
#include "config.h"
#include <QPainter>

fuxingmen::fuxingmen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fuxingmen)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

fuxingmen::~fuxingmen()
{
    delete ui;
}

void fuxingmen::on_pushButton_2_clicked()
{
    if(index==0)index=1;
    else index=0;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void fuxingmen::on_pushButton_clicked()
{
    if(index==0)index=1;
    else index=0;
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void fuxingmen::on_pushButton_3_clicked()
{
    if(index==0)
    {
        QWidget* widget=new QWidget();
        widget->setWindowTitle(QObject::tr("提示"));
        widget->resize(250,60);
        QPainter painter(widget);
        painter.drawEllipse(QPoint(110,30),15,15);
        painter.drawText(QRect(130,25,10,10),"1");
    }
    else
    {
        QDialog* dialog=new QDialog();
        dialog->setModal(true);
        dialog->setWindowTitle(QObject::tr("提示"));
        dialog->resize(250,40);
        QLabel *label=new QLabel(dialog);
        label->setText(QObject::tr("again"));
        dialog->show();
    }
}
