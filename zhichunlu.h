#ifndef ZHICHUNLU_H
#define ZHICHUNLU_H

#include <QWidget>

namespace Ui {
class zhichunlu;
}

class zhichunlu : public QWidget
{
    Q_OBJECT

public:
    explicit zhichunlu(QWidget *parent = nullptr);
    ~zhichunlu();

private slots:
    void on_pushButton_2_clicked();
    
private:
    Ui::zhichunlu *ui;
    char* photo=":/image/underground/zhichunlu/Southbound_platform_of_L13_Zhichunlu_Station_(20210130180751).jpg";
};

#endif // ZHICHUNLU_H
