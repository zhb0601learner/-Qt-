#ifndef DONGZHIMEN_H
#define DONGZHIMEN_H

#include <QWidget>

namespace Ui {
class dongzhimen;
}

class dongzhimen : public QWidget
{
    Q_OBJECT

public:
    explicit dongzhimen(QWidget *parent = 0);
    ~dongzhimen();

private:
    Ui::dongzhimen *ui;
    char* photo=":/image/underground/dongzhimen/Platform_of_L2_Dongzhimen_Station_(20200421163321).jpg";
};

#endif // DONGZHIMEN_H
