#include "dongsi.h"
#include "ui_dongsi.h"
#include "QWidget"
#include "config.h"
#include "QPainter"
#include "QPen"
#include "QApplication"

dongsi::dongsi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dongsi)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

dongsi::~dongsi()
{
    delete ui;
}

void dongsi::on_pushButton_clicked()
{
    QWidget* widget=new QWidget();
    widget->setWindowTitle("提示");
    widget->resize(100,100);
    QPainter painter(widget);
    QPainterPath ph;
    QBrush bs(QColor(255, 255, 0));//画刷颜色
    painter.setBrush(bs);//设置画刷
    ph.moveTo(30, 0);//移动当前点
    ph.lineTo(45, 0);//创建从当前点到（120， 20）的线段
    ph.lineTo(60,26);
    ph.lineTo(45,52);
    ph.lineTo(30,52);
    //ph.moveTo(120, 20);//移动当前点
    ph.lineTo(15, 26);//创建从当前点到（100， 100）的线段
    ph.closeSubpath();//关闭绘制路线
    painter.drawPath(ph);
    widget->show();
}
