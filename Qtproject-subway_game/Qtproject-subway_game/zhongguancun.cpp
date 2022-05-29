#include "zhongguancun.h"
#include "ui_zhongguancun.h"
#include <QDialog>
#include "config.h"
#include <QMessageBox>
zhongguancun::zhongguancun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhongguancun)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

zhongguancun::~zhongguancun()
{
    delete ui;
}

void zhongguancun::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("中关"));
    dialog->show();
}

void zhongguancun::on_pushButton_4_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片2！"),QMessageBox::Ok);
    pintu[1]=1;
    }
}
