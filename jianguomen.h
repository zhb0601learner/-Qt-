#ifndef JIANGUOMEN_H
#define JIANGUOMEN_H

#include <QWidget>

namespace Ui {
class jianguomen;
}

class jianguomen : public QWidget
{
    Q_OBJECT

public:
    explicit jianguomen(QWidget *parent = nullptr);
    ~jianguomen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::jianguomen *ui;
    char* photo[4]={"://image/underground/jianguomen/450px-Platform_of_L2_Jianguomen_Station_(20200416110419).jpg",
                    "://image/underground/jianguomen/mosaic_of_jianguomen1.jpg",
                   "://image/underground/jianguomen/mosaic_of_jianguomen2.jpg",
                   "://image/underground/jianguomen/Platform_of_L1_Jianguomen_Station_(20220327184245).jpg"};
    int index=0;
};

#endif // JIANGUOMEN_H
