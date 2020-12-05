#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStatusBar>
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QLabel *label;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QLabel *labelStatus;
    QLabel *labelMousePos;
protected:
    void mousePressEvent(QMouseEvent *e);  //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *e);   //移动
    void mouseReleaseEvent(QMouseEvent *e);//单击
    void mouseDoubleClickEvent(QMouseEvent *e);//双击
};

#endif // MAINWINDOW_H
