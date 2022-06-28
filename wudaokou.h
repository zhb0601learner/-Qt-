#ifndef WUDAOKOU_H
#define WUDAOKOU_H

#include <QWidget>

namespace Ui {
class wudaokou;
}

class wudaokou : public QWidget
{
    Q_OBJECT

public:
    explicit wudaokou(QWidget *parent = nullptr);
    ~wudaokou();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::wudaokou *ui;
    char* photo=":/image/underground/wudaokou/Southbound_platform_of_Wudaokou_Station_(20210130180116).jpg";
};

#endif // WUDAOKOU_H
