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
    void mousePressEvent(QMouseEvent *e);  //��갴���¼�
    void mouseMoveEvent(QMouseEvent *e);   //�ƶ�
    void mouseReleaseEvent(QMouseEvent *e);//����
    void mouseDoubleClickEvent(QMouseEvent *e);//˫��
};

#endif // MAINWINDOW_H
