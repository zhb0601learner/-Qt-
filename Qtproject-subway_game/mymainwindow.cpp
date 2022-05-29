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
#include "textread.h"
#include "zhongguancun.h"
MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("地铁线路图");
    QPixmap pixmap("../Qtproject-subway_game/underground/linegraph/linegraph.png");
    QLabel* label=new QLabel(this);
    label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    label->resize(QSize(geometry().width(),geometry().height()));
    label->lower();
    is_record=0;
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
   zhongguancun* window=new zhongguancun();
   window->setWindowTitle("中关村站");
   window->show();
   if(state==2&&is_record==1)
       seq.push_back(2);
}

void MyMainWindow::on_zhichunlu_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyMainWindow::on_pekinguniveastgate_clicked()
{
    pekinguniveastgate* window=new pekinguniveastgate();
    window->setWindowTitle("北京大学东门站");
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
    stream<<state<<endl;
    for(int i=0;i<5;i++)
        stream<<text[i]<<' ';
    stream<<endl;
}
void MyMainWindow::on_actionsequence_record_triggered(bool checked)
{
    if(checked==1)is_record=1;
    else
    {
        is_record=0;
        
    }
    //qDebug()<<is_record;
}

void MyMainWindow::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog(this);
    QLabel *label=new QLabel(dialog);
    if(state==1)
    {
        int num=0;
        for(int i=0;i<8;i++)
            if(pintu[i]==1)num++;
        QString str=QString("当前为解谜第一阶段 拼图收集进度：%1/8").arg(num);
        label->setText(str);
        label->resize(300,20);
    }
    else if(state==2)
    {
        label->setText(tr("当前为解谜第二阶段"));
        label->resize(200,20);
    }
    else if(state==3)
    {
        int num=0;
        for(int i=0;i<5;i++)
            if(text[i]==1)num++;
        QString str=QString("当前为解谜第三阶段 文档收集进度：%1/5").arg(num);
        label->setText(str);
        label->resize(300,20);

    }
    dialog->setModal(true);
    dialog->setWindowTitle(tr("解谜进度"));
    dialog->show();
}

void MyMainWindow::on_actionnew_game_triggered()
{
    int res=QMessageBox::question(this,tr("提醒"),tr("如果开始新游戏，之前的记录都将消失！是否选择继续？"),QMessageBox::Yes,QMessageBox::No);
    if(res==QMessageBox::Yes)
    {
        for(int i=0;i<8;i++)
            pintu[i]=0;
        state=1;
        for(int i=0;i<5;i++)
            text[i]=0;
    }
}
void MyMainWindow::on_pushButton_7_clicked()
{
    TextRead* textread=new TextRead();
    textread->show();
}
