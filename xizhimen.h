#ifndef XIZHIMEN_H
#define XIZHIMEN_H

#include <QWidget>

namespace Ui {
class xizhimen;
}

class xizhimen : public QWidget
{
    Q_OBJECT

public:
    explicit xizhimen(QWidget *parent = nullptr);
    ~xizhimen();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::xizhimen *ui;
    char* photo[5]={":/image/underground/xizhimen/Platform_of_L2_Xizhimen_Station_(20220131180316).jpg"
                    ,":/image/underground/xizhimen/Platform_of_L4_Xizhimen_Station_(20220131200806).jpg"
                    ,":/image/underground/xizhimen/Interchange_hall_of_Xizhimen_Station_(20210305152257).jpg"
                    ,":/image/underground/xizhimen/mosaic_of_xizhimen_whole1.jpg"
                    ,":/image/underground/xizhimen/mosaic_of_xizhimen_whole2.jpg"};
    int index=0;
};

#endif // XIZHIMEN_H
