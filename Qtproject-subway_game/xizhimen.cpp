#include "xizhimen.h"
#include "ui_xizhimen.h"
#include <QDialog>
#include <QMessageBox>
#include "config.h"
xizhimen::xizhimen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xizhimen)
{
    ui->setupUi(this);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

xizhimen::~xizhimen()
{
    delete ui;
}

void xizhimen::on_pushButton_3_clicked()
{
    if(index==4)index=0;
    else index++;
    if(index==1)ui->pushButton_4->setEnabled(true);
    else ui->pushButton_4->setEnabled(false);
    if(index==2)ui->pushButton_5->setEnabled(true);
    else ui->pushButton_5->setEnabled(false);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void xizhimen::on_pushButton_clicked()
{
    if(index==0)index=4;
    else index--;
    if(index==1)ui->pushButton_4->setEnabled(true);
    else ui->pushButton_4->setEnabled(false);
    if(index==2)ui->pushButton_5->setEnabled(true);
    else ui->pushButton_5->setEnabled(false);
    QPixmap pixmap(photo[index]);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->label->show();
}

void xizhimen::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(300,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("千米之外，时间之前，谜题的起点……"));
    dialog->show();
}

void xizhimen::on_pushButton_4_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片4！"),QMessageBox::Ok);
    pintu[3]=1;
    }
}

void xizhimen::on_pushButton_5_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片5！"),QMessageBox::Ok);
    pintu[4]=1;
    }
}
