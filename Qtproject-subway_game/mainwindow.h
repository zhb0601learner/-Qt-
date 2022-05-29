#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFile>
#include<QFileDialog>
#include<QFileInfo>
#include <QMessageBox>
#include<QDir>
#include<QColorDialog>
#include<QFontDialog>
#include<QDebug>
#include<QFont>
#include<QString>
#include <QTextEdit>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void newfile();
    void openfile();
    void savefile();
    void saveAsfile();
    void setColor();
    void setWord();
    void setUnderline();
    void setUndo();
    void setRedo();
    void copy();
    void paste();
    void cut();
    void setLift();
    void setRight();
    void setMiddle();
    void setItalic();
    void setBold();
    void setbackground();


private:
    Ui::MainWindow *ui;
    QTextEdit* textEdit;
    QString filename;
    int i;

};

#endif // MAINWINDOW_H

