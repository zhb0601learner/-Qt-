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
#include "huilongguan.h"
#include "introdution.h"
#include "haidianhuangzhuang.h"
#include "zhichunlu.h"
#include "wudaokou.h"
#include "xizhimen.h"
#include "dongsishitiao.h"
#include "forestparksouthgate.h"
#include "dongzhimen.h"
#include "jishuitan.h"
#include "nanluoguxiang.h"
#include "dongsi.h"
MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("地铁线路图");
    QPixmap pixmap("://image/underground/linegraph/linegraph.png");
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
    haidianhuangzhuang* window=new haidianhuangzhuang();
    window->setWindowTitle("海淀黄庄站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(3);
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
    zhichunlu* window=new zhichunlu();
    window->setWindowTitle("知春路站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(7);
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
    wudaokou* window=new wudaokou();
    window->setWindowTitle("五道口站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(5);
}

void MyMainWindow::on_huilongguan_clicked()
{
    huilongguan* window=new huilongguan();
    window->setWindowTitle("回龙观站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(6);
}

void MyMainWindow::on_forestpark_clicked()
{
    forestparksouthgate* window=new forestparksouthgate();
    window->setWindowTitle("森林公园站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(18);
    if(state==3)
    {
        text[3]=1;
        QDialog* dialog=new QDialog();
        dialog->setModal(true);
        dialog->setWindowTitle(QObject::tr("提示"));
        dialog->resize(250,40);
        QLabel *label=new QLabel(dialog);
        label->setText(QObject::tr("您已解锁第4篇文本线索"));
        dialog->show();
    }
}

void MyMainWindow::on_xizhimen_clicked()
{
    xizhimen* window=new xizhimen();
    window->setWindowTitle("西直门站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(4);
    if(state==3)
    {
        text[0]=1;
        QDialog* dialog=new QDialog();
        dialog->setModal(true);
        dialog->setWindowTitle(QObject::tr("提示"));
        dialog->resize(250,40);
        QLabel *label=new QLabel(dialog);
        label->setText(QObject::tr("您已解锁第1篇文本线索"));
        dialog->show();
    }
}

void MyMainWindow::on_dongzhimen_clicked()
{
    dongzhimen* window=new dongzhimen();
    window->setWindowTitle("东直门站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(9);
}

void MyMainWindow::on_nanluoguxiang_clicked()
{
    nanluoguxiang* window=new nanluoguxiang();
    window->setWindowTitle("南锣鼓巷站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(16);
}

void MyMainWindow::on_dongsi_clicked()
{
    dongsi* window=new dongsi();
    window->setWindowTitle("东四站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(17);
}

void MyMainWindow::on_dongsishitiao_clicked()
{
    dongsishitiao* window=new dongsishitiao();
    window->setWindowTitle("东四十条站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(10);
    if(state==3)
    {
        text[2]=1;
        QDialog* dialog=new QDialog();
        dialog->setModal(true);
        dialog->setWindowTitle(QObject::tr("提示"));
        dialog->resize(250,40);
        QLabel *label=new QLabel(dialog);
        label->setText(QObject::tr("您已解锁第3篇文本线索"));
        dialog->show();
    }
}

void MyMainWindow::on_jishuitan_clicked()
{
    jishuitan* window=new jishuitan();
    window->setWindowTitle("积水潭站");
    window->show();
    if(state==2&&is_record==1)
        seq.push_back(8);
    if(state==3)
    {
        text[1]=1;
        QDialog* dialog=new QDialog();
        dialog->setModal(true);
        dialog->setWindowTitle(QObject::tr("提示"));
        dialog->resize(250,40);
        QLabel *label=new QLabel(dialog);
        label->setText(QObject::tr("您已解锁第2篇文本线索"));
        dialog->show();
    }
}

void MyMainWindow::closeEvent(QCloseEvent *event)
{
    QFile file("../Qtproject-subway_game/config.txt");
    file.open(QIODevice::WriteOnly);
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
        qDebug()<<seq.size();
        if(seq.size()<7)
            int i=QMessageBox::information(this,tr("抱歉！"),tr("您走过的车站数不够！"),QMessageBox::Ok);
        else if(seq.size()>7)
            int i=QMessageBox::information(this,tr("抱歉！"),tr("您走过的车站数过多！"),QMessageBox::Ok);
        else
        {
            int standard_seq[7]={13,14,10,9,11,12,13};
            bool is_right=1;
            for(int i=6;i>=0;i--)
            {
                int num=seq.back();
                if(num!=standard_seq[i])
                {
                   is_right=0;
                    break;
                }
                seq.pop_back();
            }

            if(is_right)
            {
                int i=QMessageBox::information(this,tr("恭喜！"),tr("您完成了第二阶段解谜！"),QMessageBox::Ok);
                state=3;
            }
            else {
                int i=QMessageBox::information(this,tr("抱歉！"),tr("您走过的车站顺序不正确！"),QMessageBox::Ok);
            }

        }
        seq.clear();
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
        dialog->setModal(true);
        dialog->setWindowTitle(tr("解谜进度"));
        dialog->show();
        if(num==8)
        {
            int i=QMessageBox::information(this,tr("恭喜！"),tr("您已完成第一阶段解谜！"),QMessageBox::Ok);
            state=2;
        }
    }
    else if(state==2)
    {
        label->setText(tr("当前为解谜第二阶段"));
        label->resize(200,20);
        dialog->setModal(true);
        dialog->setWindowTitle(tr("解谜进度"));
        dialog->show();
    }
    else if(state==3)
    {
        int num=0;
        for(int i=0;i<5;i++)
            if(text[i]==1)num++;
        QString str=QString("当前为解谜第三阶段 文档收集进度：%1/5").arg(num);
        label->setText(str);
        label->resize(300,20);
        dialog->setModal(true);
        dialog->setWindowTitle(tr("解谜进度"));
        dialog->show();

    }
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

void MyMainWindow::on_actionintroduction_triggered()
{
    introdution* intro=new introdution();
    intro->setWindowTitle(tr("游戏介绍"));
    intro->show();
}

void MyMainWindow::on_beijingrailwaystation_clicked()
{

}

void MyMainWindow::on_jianguomen_clicked()
{

}

void MyMainWindow::on_tiananmenxi_clicked()
{

}

void MyMainWindow::on_xidan_clicked()
{

}

void MyMainWindow::on_fuxingmen_clicked()
{

}

void MyMainWindow::on_pushButton_clicked()
{

}

void MyMainWindow::on_actionintroduction_toggled(bool arg1)
{

}

void MyMainWindow::on_pekinguniveastgate_27_clicked()
{

}

void MyMainWindow::on_pekinguniveastgate_3_clicked()
{

}

void MyMainWindow::on_pekinguniveastgate_14_clicked()
{

}

void MyMainWindow::on_joojoi_clicked()
{

}
