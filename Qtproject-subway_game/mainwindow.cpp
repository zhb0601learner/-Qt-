#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include<QImage>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionUnderline->setCheckable(true);
    ui->actionItalic->setCheckable(true);
    ui->actionBold->setCheckable(true);

    filename=QString("无标题.txt");
    this->setWindowTitle(filename+QString("-记事本"));
    this->resize(800,600);



    QPalette pal(this->palette());
    pal.setColor(QPalette::Background,Qt::white);
    this->setPalette(pal);i=0;

    //QString str=QDateTime::currentDateTime().toString("hh:mm:ss yyyy/MM/dd");
    // ui->textEdit->insertPlainText(str);

   //添加动作按钮
    ui->actionNew->setStatusTip(QString("新建文件"));
    ui->actionOpen->setStatusTip(QString("打开文件"));
    ui->actionSave->setStatusTip(QString("保存文件"));
    ui->actionSaveAs->setStatusTip(QString("另存为"));
    ui->actionExit->setStatusTip(QString("退出"));
    ui->actionColour->setStatusTip(QString("颜色设置"));
    ui->actionWordtype->setStatusTip(QString("字体设置"));
    ui->actionUndo->setStatusTip(QString("撤销"));
    ui->actionRedo->setStatusTip(QString("前进"));
    ui->actionPaste->setStatusTip(QString("粘贴"));
    ui->actionCopy->setStatusTip(QString("复制"));
    ui->actionCut->setStatusTip(QString("剪切"));
    ui->actionSearch->setStatusTip(QString("查找"));



    ui->mainToolBar->addAction(ui->actionNew);
    ui->mainToolBar->addAction(ui->actionOpen);
    ui->mainToolBar->addAction(ui->actionSave);
    ui->mainToolBar->addAction(ui->actionColour);
    ui->mainToolBar->addAction(ui->actionPaste);
    ui->mainToolBar->addAction(ui->actionCopy);
    ui->mainToolBar->addAction(ui->actionCut);

    connect (ui->actionNew,SIGNAL(triggered(bool)),this,SLOT(newfile()));
    connect (ui->actionOpen,SIGNAL(triggered(bool)),this,SLOT(openfile()));
    connect(ui->actionExit,SIGNAL(triggered(bool)),this,SLOT(close()));
    connect(ui->actionSave,SIGNAL(triggered(bool)),this,SLOT(savefile()));
    connect(ui->actionSaveAs,SIGNAL(triggered(bool)),this,SLOT(saveAsfile()));
    connect(ui->actionColour,SIGNAL(triggered(bool)),this,SLOT(setColor()));
    connect(ui->actionWordtype,SIGNAL(triggered(bool)),this,SLOT(setWord()));
    connect(ui->actionUnderline,SIGNAL(triggered(bool)),this,SLOT(setUnderline()));
    connect(ui->actionUndo,SIGNAL(triggered(bool)),this,SLOT(setUndo()));
    connect(ui->actionRedo,SIGNAL(triggered(bool)),this,SLOT(setRedo()));
    connect(ui->actionCopy,SIGNAL(triggered(bool)),this,SLOT(copy()));
    connect(ui->actionPaste,SIGNAL(triggered(bool)),this,SLOT(paste()));
    connect(ui->actionCut,SIGNAL(triggered(bool)),this,SLOT(cut()));
    connect(ui->actionLift,SIGNAL(triggered(bool)),this,SLOT(setLift()));
    connect(ui->actionRight,SIGNAL(triggered(bool)),this,SLOT(setRight()));
    connect(ui->actionMiddle,SIGNAL(triggered(bool)),this,SLOT(setMiddle()));
    connect(ui->actionItalic,SIGNAL(triggered(bool)),this,SLOT(setItalic()));
    connect(ui->actionBold,SIGNAL(triggered(bool)),this,SLOT(setBold()));
    connect(ui->actionSearch,SIGNAL(triggered(bool)),this,SLOT(search()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::newfile()
{
    this->setWindowTitle(QString("新建文件"));
    ui->textEdit->clear();
}
void MainWindow::openfile()
{
    filename=QFileDialog::getOpenFileName(this,"open file","./","text file(*.txt)");
    if(false==filename.isEmpty())
    {
        QFile file(filename);
        bool ok = file.open(QIODevice::ReadOnly);
        if(ok==true)
        {
           QByteArray arr =file.readAll();
           ui->textEdit->setText(QString(arr));
           file.close();
           QFileInfo info(filename);
           QString str=info.fileName();
           this->setWindowTitle(str);
        }
    }

}
void MainWindow::savefile()
{
    if(filename.isEmpty()==true)//判断打开的文件是否为空，如果是空就是保存新建文件。
    {
        QString filter="ext file(*.txt)";
        QString selefilter="Text file(*.txt)";
        filename=QFileDialog::getSaveFileName(this,"save file",QDir::currentPath(),filter,&selefilter);
    }

        QFile file(filename);//非空则打开的是已存在的文件，直接保存就可以。
        /*if(!file.open(QIODevice::WriteOnly|QFile::Text))
        {
          QMessageBox::warning(this,"警告","无法打开文件:"+file.errorString());
          return;
        }
            setWindowTitle(filename);
            QTextStream out(&file);
            QString text =ui->textEdit->toPlainText();
            out<<text;
            file.close();*/
        if(true==file.open(QIODevice::WriteOnly))
        {
            QString text=ui->textEdit->toPlainText();
            QByteArray arr;
            arr.append(text);
            file.write(arr);
            file.close();
        }

}
void MainWindow::saveAsfile()
{
    QString filter="ext file(*.txt)";
    QString selefilter="Text file(*.txt)";
    filename = QFileDialog::getSaveFileName(this,"saveAs file",QDir::currentPath(),filter,&selefilter);
    QFile file(filename);
/*
    if(!file.open(QIODevice::WriteOnly|QFile::Text))
    {
      QMessageBox::warning(this,"警告","无法打开文件:"+file.errorString());
      return;
    }
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.close();
*/
    if(true==file.open(QIODevice::WriteOnly))
    {
        QString text=ui->textEdit->toPlainText();
        QByteArray arr;
        arr.append(text);
        file.write(arr);
        file.close();
    }
    //为更新filename和标题。
    QFileInfo info(filename);
    QString str=info.fileName();
    this->setWindowTitle(str);

}
void MainWindow::setColor()
{
    QColor color=QColorDialog::getColor
    (Qt::red,Q_NULLPTR,"set textcolor",QColorDialog::DontUseNativeDialog);
    ui->textEdit->setTextColor(color);
}

void MainWindow::setWord()
{
    bool ok;
    QFont f=ui->textEdit->font();

    QFont font=QFontDialog::getFont(&ok,f,Q_NULLPTR,"set worldtype");
    if(ok)
    {
        ui->textEdit->setFont(font);
    }
    else
    {
        qDebug()<<"no choose any font----"<<endl;
    }
}

void MainWindow::setUnderline()
{
        QTextCharFormat tcf;
        tcf.setFontUnderline(ui->actionUnderline->isChecked());
        ui->textEdit->mergeCurrentCharFormat(tcf);
}
void MainWindow::setItalic()
{
    QTextCharFormat tcf;
    tcf.setFontItalic(ui->actionItalic->isChecked());
    ui->textEdit->mergeCurrentCharFormat(tcf);
}
void MainWindow::setBold()
{
    QTextCharFormat tcf;
    tcf.setFontWeight(ui->actionBold->isChecked() ? QFont::Bold:QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(tcf);
}

void MainWindow::setUndo()
{
    ui->textEdit->undo();
}
void MainWindow::setRedo()
{
    ui->textEdit->redo();
}
void MainWindow::copy()
{
    ui->textEdit->copy();
}
void MainWindow::paste()
{
    ui->textEdit->paste();
}
void MainWindow::cut()
{
    ui->textEdit->cut();
}
void MainWindow::setLift()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}
void MainWindow::setRight()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}
void MainWindow::setMiddle()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}
