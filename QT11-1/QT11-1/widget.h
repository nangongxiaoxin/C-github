#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QPushButton>
class Widget : public QWidget
{
    Q_OBJECT
    QPushButton *btn;

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *e);//触发键盘事件
};

#endif // WIDGET_H
