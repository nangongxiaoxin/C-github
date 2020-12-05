#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QLabel>
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QLabel *label;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *e);  //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *e);
};

#endif // MAINWINDOW_H
