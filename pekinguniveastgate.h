#ifndef PEKINGUNIVEASTGATE_H
#define PEKINGUNIVEASTGATE_H

#include <QWidget>

namespace Ui {
class pekinguniveastgate;
}

class pekinguniveastgate : public QWidget
{
    Q_OBJECT

public:
    explicit pekinguniveastgate(QWidget *parent = nullptr);
    ~pekinguniveastgate();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::pekinguniveastgate *ui;
    char* photo[2]={"../Qtproject-subway_game/underground/pekinguniveastgate/Platform_of_Peking_Univ._East_Gate_Station_(20210202165908).jpg"
                    ,"../Qtproject-subway_game/underground/pekinguniveastgate/moasic_of_pekinguniveastgate.jpg"};
    int index=0;
};

#endif // PEKINGUNIVEASTGATE_H
