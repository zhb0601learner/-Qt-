#ifndef TIANANMENWEST_H
#define TIANANMENWEST_H

#include <QWidget>

namespace Ui {
class tiananmenwest;
}

class tiananmenwest : public QWidget
{
    Q_OBJECT

public:
    explicit tiananmenwest(QWidget *parent = nullptr);
    ~tiananmenwest();

private:
    Ui::tiananmenwest *ui;
};

#endif // TIANANMENWEST_H
