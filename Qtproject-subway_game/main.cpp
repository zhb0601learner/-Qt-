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
    //原因：资源文件中不支持写入，需要和最终发布版打包发布
    //暂时无法解决的问题：无法在资源文件中打开TXT文件，暂时使用相对路径
    for(int i=0;i<8;i++)
    {
        fscanf(in,"%d",&pintu[i]);
        //qDebug()<<pintu[i];
    }
    fscanf(in,"%d",&state);
    //qDebug()<<state;
    for(int i=0;i<5;i++)
    {
    fscanf(in,"%d",&text[i]);
    //qDebug()<<text[i];
    }
    QApplication a(argc, argv);
    MyMainWindow w;
    w.show();

    return a.exec();
}
