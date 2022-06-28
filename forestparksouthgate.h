#ifndef FORESTPARKSOUTHGATE_H
#define FORESTPARKSOUTHGATE_H

#include <QWidget>

namespace Ui {
class forestparksouthgate;
}

class forestparksouthgate : public QWidget
{
    Q_OBJECT

public:
    explicit forestparksouthgate(QWidget *parent = 0);
    ~forestparksouthgate();

private:
    Ui::forestparksouthgate *ui;
    char* photo=":/image/underground/forestparksouthgate/Platform_of_Forest_Park_South_Gate_Station_(20220330142553).jpg";
};

#endif // FORESTPARKSOUTHGATE_H
