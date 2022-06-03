#include "zhichunlu.h"
#include "ui_zhichunlu.h"
#include <QDialog>
#include <QLabel>
zhichunlu::zhichunlu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhichunlu)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

zhichunlu::~zhichunlu()
{
    delete ui;
}

void zhichunlu::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("这里没有故事"));
    dialog->show();
}
