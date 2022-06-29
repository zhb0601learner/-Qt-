#include "tiananmenwest.h"
#include "ui_tiananmenwest.h"

tiananmenwest::tiananmenwest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tiananmenwest)
{
    ui->setupUi(this);
}

tiananmenwest::~tiananmenwest()
{
    delete ui;
}
