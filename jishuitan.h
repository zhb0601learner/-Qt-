#ifndef JISHUITAN_H
#define JISHUITAN_H

#include <QWidget>

namespace Ui {
class jishuitan;
}

class jishuitan : public QWidget
{
    Q_OBJECT

public:
    explicit jishuitan(QWidget *parent = 0);
    ~jishuitan();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::jishuitan *ui;
    char* photo[3]={":/image/underground/jishuitan/Platform_of_L19_Jishuitan_Station_(20211231184642).jpg",
                   ":/image/underground/jishuitan/Platform_of_L2_Jishuitan_Station_(20210618134949).jpg",
                   ":/image/underground/jishuitan/West_concourse_extension_of_L2_Jishuitan_Station_(20210618134752).jpg"};
    int index=0;
};

#endif // JISHUITAN_H
