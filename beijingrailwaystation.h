#ifndef BEIJINGRAILWAYSTATION_H
#define BEIJINGRAILWAYSTATION_H

#include <QWidget>

namespace Ui {
class beijingrailwaystation;
}

class beijingrailwaystation : public QWidget
{
    Q_OBJECT

public:
    explicit beijingrailwaystation(QWidget *parent = nullptr);
    ~beijingrailwaystation();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::beijingrailwaystation *ui;
    char* photo=":/image/underground/beijingrailwaystation/Platform_of_L2_Beijing_Railway_Station_(20201224162315).jpg";

};

#endif // BEIJINGRAILWAYSTATION_H
