#ifndef ZHONGGUANCUN_H
#define ZHONGGUANCUN_H

#include <QWidget>

namespace Ui {
class zhongguancun;
}

class zhongguancun : public QWidget
{
    Q_OBJECT

public:
    explicit zhongguancun(QWidget *parent = nullptr);
    ~zhongguancun();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::zhongguancun *ui;
    char* photo="../Qtproject-subway_game/underground/zhongguancun/Platform_of_Zhongguancun_Station_(20210202170233).jpg";

};

#endif // ZHONGGUANCUN_H
