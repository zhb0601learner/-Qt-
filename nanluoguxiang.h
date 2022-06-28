#ifndef NANLUOGUXIANG_H
#define NANLUOGUXIANG_H

#include <QWidget>

namespace Ui {
class nanluoguxiang;
}

class nanluoguxiang : public QWidget
{
    Q_OBJECT

public:
    explicit nanluoguxiang(QWidget *parent = 0);
    ~nanluoguxiang();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nanluoguxiang *ui;
    char* photo[2]={":/image/underground/nanluoguxiang/Eastbound_platform_of_L6_Nanluogu_Xiang_Station_(20210929100215).jpg",
                    ""};
    int index=0;
};

#endif // NANLUOGUXIANG_H
