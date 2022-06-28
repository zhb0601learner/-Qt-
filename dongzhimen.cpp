#include "dongzhimen.h"
#include "ui_dongzhimen.h"
#include "config.h"

dongzhimen::dongzhimen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dongzhimen)
{
    ui->setupUi(this);
    QPixmap pixmap(photo);
    ui->label->setPixmap(pixmap.scaled(QSize(geometry().width(),geometry().height()),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

dongzhimen::~dongzhimen()
{
    delete ui;
}
