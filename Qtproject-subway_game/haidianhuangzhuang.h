#ifndef HAIDIANHUANGZHUANG_H
#define HAIDIANHUANGZHUANG_H

#include <QWidget>

namespace Ui {
class haidianhuangzhuang;
}

class haidianhuangzhuang : public QWidget
{
    Q_OBJECT

public:
    explicit haidianhuangzhuang(QWidget *parent = nullptr);
    ~haidianhuangzhuang();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::haidianhuangzhuang *ui;
    char* photo=":/image/underground/haidianhuangzhuang/62864428.jpg";
};

#endif // HAIDIANHUANGZHUANG_H
