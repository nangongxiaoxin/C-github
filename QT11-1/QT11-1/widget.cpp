#include "widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFocusPolicy(Qt::StrongFocus);//使用方向键时添加
    btn=new QPushButton("我是可移动的",this);
    btn->setGeometry(40,40,150,40);
}

Widget::~Widget()
{

}
void Widget::keyPressEvent(QKeyEvent *e)
{
    int x=btn->x();
    int y=btn->y();
    switch(e->key())
    {
    case Qt::Key_W:
        btn->move(x,y-10);
        break;
    case Qt::Key_S:
        btn->move(x,y+10);
        break;
    case Qt::Key_A:
        btn->move(x-10,y);
        break;
    case Qt::Key_D:
        btn->move(x+10,y);
        break;
    }
    if(e->key()==Qt::Key_A&&e->modifiers()==Qt::ControlModifier)
    {
        QMessageBox::about(this,"我是弹窗","我是弹窗内容");
    }
    QWidget::keyPressEvent(e);
}
