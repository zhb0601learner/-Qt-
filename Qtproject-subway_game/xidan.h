#ifndef XIDAN_H
#define XIDAN_H

#include <QWidget>

namespace Ui {
class xidan;
}

class xidan : public QWidget
{
    Q_OBJECT

public:
    explicit xidan(QWidget *parent = nullptr);
    ~xidan();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::xidan *ui;
    char* photo[3]={"://image/underground/xidan/c361dfd4ffc646a001a688916547154.jpg"
                    ,"://image/underground/xidan/Platform_of_L1_Xidan_Station_(20210909132808).jpg",
                   "://image/underground/xidan/Platform_of_L4_Xidan_Station_(20210305160033).jpg"};

    int index=0;
};

#endif // XIDAN_H
