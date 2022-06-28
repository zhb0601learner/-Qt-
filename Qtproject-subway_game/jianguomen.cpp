#include "jianguomen.h"
#include "ui_jianguomen.h"

jianguomen::jianguomen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jianguomen)
{
    ui->setupUi(this);
}

jianguomen::~jianguomen()
{
    delete ui;
}
