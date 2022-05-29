#include "mymainwindow.h"
#include "config.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
int main(int argc, char *argv[])
{
    FILE* in;
    in=fopen("../Qtproject-subway_game/config.txt","r");
    for(int i=0;i<8;i++)
    {
        fscanf(in,"%d",&pintu[i]);
        //qDebug()<<pintu[i];
    }
    fscanf(in,"%d",&state);
    //qDebug()<<state;
    for(int i=0;i<5;i++)
    fscanf(in,"%d",&text[i]);
    QApplication a(argc, argv);
    MyMainWindow w;
    w.show();

    return a.exec();
}
