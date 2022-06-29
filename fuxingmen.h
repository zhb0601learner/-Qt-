#ifndef FUXINGMEN_H
#define FUXINGMEN_H

#include <QWidget>

namespace Ui {
class fuxingmen;
}

class fuxingmen : public QWidget
{
    Q_OBJECT

public:
    explicit fuxingmen(QWidget *parent = nullptr);
    ~fuxingmen();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::fuxingmen *ui;
    char* photo[2]={"://image/underground/fuxingmen/Fuxingmen_Station_(Line_2)_Platform_20181106.jpg"
                    ,"://image/underground/fuxingmen/Platform_of_L1_Fuxingmen_Station_(20210708190500).jpg"};
    int index=0;

};

#endif // FUXINGMEN_H
