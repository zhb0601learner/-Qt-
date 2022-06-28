#ifndef HUILONGGUAN_H
#define HUILONGGUAN_H

#include <QWidget>

namespace Ui {
class huilongguan;
}

class huilongguan : public QWidget
{
    Q_OBJECT

public:
    explicit huilongguan(QWidget *parent = nullptr);
    ~huilongguan();

private slots:
    void on_pushButton_2_clicked();

    void on_dial_sliderMoved(int position);

private:
    Ui::huilongguan *ui;
    char* photo=":/image/underground/huilongguan/Eastbound_platform_of_Huilongguan_Station_(20200810122228).jpg";
};

#endif // HUILONGGUAN_H
