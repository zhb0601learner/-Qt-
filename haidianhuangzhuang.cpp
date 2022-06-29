#include "haidianhuangzhuang.h"
#include "ui_haidianhuangzhuang.h"
#include "config.h"
#include <QDialog>
#include <QMessageBox>
haidianhuangzhuang::haidianhuangzhuang(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::haidianhuangzhuang)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

haidianhuangzhuang::~haidianhuangzhuang()
{
    delete ui;
}

void haidianhuangzhuang::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("最近的黄色在哪里？"));
    dialog->show();
}

void haidianhuangzhuang::on_pushButton_4_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片3！"),QMessageBox::Ok);
    pintu[2]=1;
    }
}
