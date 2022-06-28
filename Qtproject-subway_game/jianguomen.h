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

private:
    Ui::jianguomen *ui;
};

#endif // JIANGUOMEN_H
