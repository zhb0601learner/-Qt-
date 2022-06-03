#include "huilongguan.h"
#include "ui_huilongguan.h"
#include <QLabel>
#include <QDialog>
#include <QDial>
#include <QImage>
#include "config.h"
#include <QMessageBox>
huilongguan::huilongguan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huilongguan)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

huilongguan::~huilongguan()
{
    delete ui;
}

void huilongguan::on_pushButton_2_clicked()
{
    QDialog* dialog=new QDialog();
    dialog->setModal(true);
    dialog->setWindowTitle(QObject::tr("提示"));
    dialog->resize(250,40);
    QLabel *label=new QLabel(dialog);
    label->setText(QObject::tr("晨与夜之城"));
    dialog->show();
}

void huilongguan::on_dial_sliderMoved(int position)
{
     QImage image(photo);
     int red, green, blue;
         int pixels = image.width() * image.height();
         unsigned int *data = (unsigned int *)image.bits();

         for (int i = 0; i < pixels; ++i)
         {
             red= qRed(data[i])+ position;
             red = (red < 0x00) ? 0x00 : (red > 0xff) ? 0xff : red;
             green= qGreen(data[i]) + position;
             green = (green < 0x00) ? 0x00 : (green > 0xff) ? 0xff : green;
             blue= qBlue(data[i]) + position;
             blue =  (blue  < 0x00) ? 0x00 : (blue  > 0xff) ? 0xff : blue ;
             data[i] = qRgba(red, green, blue, qAlpha(data[i]));
         }
      ui->label->setPixmap(QPixmap::fromImage(image).scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
      if(state==1&&position<-50&&position>=-60&&pintu[6]==0)
      {
      int i=QMessageBox::information(this,tr("恭喜！"),tr("您已获得碎片7和碎片8！"),QMessageBox::Ok);
      pintu[6]=pintu[7]=1;
      }

}
