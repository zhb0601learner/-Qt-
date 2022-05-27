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
#include <QCloseEvent>
#include <QDebug>
#include "mainwindow.h"
#include "config.h"
#include "pekinguniveastgate.h"
bool is_record=0;
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
        MainWindow* mainwindow=new MainWindow();
        mainwindow->show();
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
    pekinguniveastgate* window=new pekinguniveastgate();
    window->setWindowTitle("pekinguniveastgate");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(1);
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

void MyMainWindow::closeEvent(QCloseEvent *event)
{
    QFile file("../Qtproject-subway_game/config.txt");
    file.open(QIODevice::WriteOnly|QIODevice::WriteOnly);
    QTextStream stream(&file);
    for(int  i=0;i<8;i++)
    {
        stream<<pintu[i]<<' ';
        //qDebug()<<pintu[i];
    }
    stream<<endl;
    stream<<state;
}
void MyMainWindow::on_actionsequence_record_triggered(bool checked)
{
    if(checked==1)is_record=1;
    else
    {
        is_record=0;//此处工作尚未完成
    }
    //qDebug()<<is_record;
}
