#include "beijingrailwaystation.h"
#include "ui_beijingrailwaystation.h"
#include "config.h"
#include <QDialog>

beijingrailwaystation::beijingrailwaystation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::beijingrailwaystation)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

beijingrailwaystation::~beijingrailwaystation()
{
    delete ui;
}

void beijingrailwaystation::on_pushButton_3_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("4.火焰"));
    dialog->show();
}
