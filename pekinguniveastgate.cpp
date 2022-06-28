#include "pekinguniveastgate.h"
#include "ui_pekinguniveastgate.h"
#include <QDialog>
#include <QMessageBox>
#include "config.h"
pekinguniveastgate::pekinguniveastgate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pekinguniveastgate)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

pekinguniveastgate::~pekinguniveastgate()
{
    delete ui;
}

void pekinguniveastgate::on_pushButton_3_clicked()
{
    if(index==0)index=1;
    else index=0;
    if(index==1)ui->pushButton_4->setEnabled(true);
    else ui->pushButton_4->setEnabled(false);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void pekinguniveastgate::on_pushButton_4_clicked()
{
  if(state==1)
  {
  int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片1！"),QMessageBox::Ok);
  pintu[0]=1;
  }
}

void pekinguniveastgate::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("一塔湖图"));
    dialog->show();
}

void pekinguniveastgate::on_pushButton_clicked()
{
    if(index==1)index=0;
    else index=1;
    if(index==1)ui->pushButton_4->setEnabled(true);
    else ui->pushButton_4->setEnabled(false);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}
