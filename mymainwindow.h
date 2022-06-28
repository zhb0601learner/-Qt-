#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:
    void on_pushButton_8_clicked();

    void on_pekinguniveastgate_27_clicked();

    void on_pekinguniveastgate_3_clicked();

    void on_pekinguniveastgate_14_clicked();

    void on_pekinguniveastgate_clicked();

    void on_zhichunlu_clicked();

    void on_zhongguancun_clicked();

    void on_haidianhuangzhuang_clicked();

    void on_wudaokou_clicked();

    void on_huilongguan_clicked();

    void on_forestpark_clicked();

    void on_xizhimen_clicked();

    void on_dongzhimen_clicked();

    void on_nanluoguxiang_clicked();

    void on_dongsi_clicked();

    void on_dongsishitiao_clicked();

    void on_jianguomen_clicked();

    void on_beijingrailwaystation_clicked();

    void on_tiananmenxi_clicked();

    void on_xidan_clicked();

    void on_fuxingmen_clicked();

    void on_pushButton_clicked();

    void on_joojoi_clicked();

    void on_actionintroduction_toggled(bool arg1);

    void on_actionsequence_record_triggered(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_actionnew_game_triggered();

    void on_actionintroduction_triggered();

    void on_jishuitan_clicked();
    
private:
    Ui::MyMainWindow *ui;
public:
    void closeEvent(QCloseEvent *event);
};

#endif // MYMAINWINDOW_H
