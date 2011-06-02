#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "heder.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow, public CreateWin
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    virtual void createAct(){

    }
    virtual void createUi(){}
    virtual void createApp(){}
    virtual void create(){}

    void paintEvent(QPaintEvent *){

        QPixmap ima(":/image/aadvark.gif");
        QPainter qpainter(this);
        qpainter.drawPixmap(50,50,ima);

    }


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
