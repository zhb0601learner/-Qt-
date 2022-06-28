#ifndef DONGSI_H
#define DONGSI_H

#include <QWidget>

namespace Ui {
class dongsi;
}

class dongsi : public QWidget
{
    Q_OBJECT

public:
    explicit dongsi(QWidget *parent = 0);
    ~dongsi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dongsi *ui;
    char* photo=":/image/underground/dongsi/Dongsi_Station_Platform_(Line_5)_20170902.jpg";
};

#endif // DONGSI_H
