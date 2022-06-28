#ifndef DONGSISHITIAO_H
#define DONGSISHITIAO_H

#include <QWidget>

namespace Ui {
class dongsishitiao;
}

class dongsishitiao : public QWidget
{
    Q_OBJECT

public:
    explicit dongsishitiao(QWidget *parent = 0);
    ~dongsishitiao();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dongsishitiao *ui;
    char* photo[5]={":/image/underground/dongsishitiao/d362284671eb8e0c60fa2f5e397358d.jpg",
                   ":/image/underground/dongsishitiao/mosaic_of_dongsishitiao1.jpg",
                   ":/image/underground/dongsishitiao/mosaic_of_dongsishitiao2.jpg",
                   ":/image/underground/dongsishitiao/Platform_of_L2_Dongsi_Shitiao_Station_(20210704123716).jpg",
                   ":/image/underground/dongsishitiao/Reserved_platform_of_Dongsi_Shitiao_Station_(20210704123842).jpg"};
    int index=0;
};

#endif // DONGSISHITIAO_H
