#include "introdution.h"
#include "ui_introdution.h"

introdution::introdution(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::introdution)
{
    ui->setupUi(this);
}

introdution::~introdution()
{
    delete ui;
}
