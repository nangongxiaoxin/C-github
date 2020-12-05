#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    label=new QLabel("当前鼠标位置：");
}

MainWindow::~MainWindow()
{

}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    QString m=QString::number(e->x())+","+QString::number(e->y());
    label->setText("MOVE:"+m);
    label->show();
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{

}
