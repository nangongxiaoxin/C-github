#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QListWidget>
class Widget : public QWidget
{
    Q_OBJECT
private:
    QLabel *label;
    QListWidget *list;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
