#include "forestparksouthgate.h"
#include "ui_forestparksouthgate.h"
#include "config.h"

forestparksouthgate::forestparksouthgate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forestparksouthgate)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));    
}

forestparksouthgate::~forestparksouthgate()
{
    delete ui;
}
