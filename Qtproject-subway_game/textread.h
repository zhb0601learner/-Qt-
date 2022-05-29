#ifndef TEXTREAD_H
#define TEXTREAD_H

#include <QWidget>

namespace Ui {
class TextRead;
}

class TextRead : public QWidget
{
    Q_OBJECT

public:
    explicit TextRead(QWidget *parent = nullptr);
    ~TextRead();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TextRead *ui;
    char* filename[5]={"../Qtproject-subway_game/text/text1.txt","../Qtproject-subway_game/text/text2.txt",
                      "../Qtproject-subway_game/text/text3.txt","../Qtproject-subway_game/text/text4.txt"
                      ,"../Qtproject-subway_game/text/text5.txt"};
    int index=0;
};

#endif // TEXTREAD_H
