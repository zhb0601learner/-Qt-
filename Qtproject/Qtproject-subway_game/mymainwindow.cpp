#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QBitmap>
#include <QPicture>
#include <QGraphicsView>
#include <QSize>
#include <QImage>
#include <QDialog>
MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("../Qtproject-subway_game/underground/linegraph/linegraph.png");
    QLabel* label=new QLabel(this);
    label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    label->resize(QSize(geometry().width(),geometry().height()));
    label->lower();
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}


void MyMainWindow::on_pushButton_8_clicked()
{

}

void MyMainWindow::on_haidianhuangzhuang_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_zhongguancun_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_zhichunlu_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_pekinguniveastgate_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_wudaokou_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_huilongguan_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_forestpark_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_xizhimen_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_dongzhimen_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_nanluoguxiang_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_dongsi_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_dongsishitiao_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_jianguomen_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_beijingrailwaystation_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_tiananmenxi_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_xidan_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_fuxingmen_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}
