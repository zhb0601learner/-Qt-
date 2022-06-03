#include "wudaokou.h"
#include "ui_wudaokou.h"
#include <QDialog>
#include "config.h"
#include <QMessageBox>
wudaokou::wudaokou(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wudaokou)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

wudaokou::~wudaokou()
{
    delete ui;
}

void wudaokou::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("精清还是精北？（注意方向）"));
    dialog->show();
}

void wudaokou::on_pushButton_4_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("精清！"),tr("错误的！这是清华的方向！"),QMessageBox::Ok);
    }
}

void wudaokou::on_pushButton_5_clicked()
{
    if(state==1)
    {
    int i=QMessageBox::information(this,tr("精北！"),tr("您已获得碎片6！"),QMessageBox::Ok);
    pintu[5]=1;
    }
}
