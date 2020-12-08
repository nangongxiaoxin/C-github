#include "mainwindow.h"

#include <QMouseEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   setWindowTitle(tr("获取鼠标事件"));
   setCursor(Qt::CrossCursor);//设置鼠标为十字形
   labelStatus=new QLabel();
   labelStatus->setMinimumSize(300,30);
   labelStatus->setText(tr("当前鼠标位置:"));
   labelStatus->setFixedWidth(100);

   labelMousePos=new QLabel();
   labelMousePos->setText(tr(""));
   labelMousePos->setFixedWidth(80);

   statusBar()->addPermanentWidget(labelStatus);//给状态栏添加永久的部件
   statusBar()->addPermanentWidget(labelMousePos);//同上
   this->setMouseTracking(true);
}

MainWindow::~MainWindow()
{
}
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    labelMousePos->setText("("+QString::number(e->x())+","+QString::number(e->y())+")");//显示鼠标位置
}
void MainWindow::mousePressEvent(QMouseEvent *e)//鼠标按下事件
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage(tr("鼠标左键在当前位置按下:")+str);//当鼠标左键按下显示临时信息
    }
    else if(e->button()==Qt::RightButton)
    {
        statusBar()->showMessage(tr("鼠标右键在当前位置按下:")+str);//当鼠标右键按下显示临时信息
    }
    else if(e->button()==Qt::MidButton)
    {
        statusBar()->showMessage(tr("鼠标中键在当前位置按下:")+str);//当鼠标中键按下显示临时信息
    }
}
void MainWindow::mouseDoubleClickEvent(QMouseEvent *e)//鼠标双击事件
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage(tr("鼠标左键在当前位置双击:")+str,5000);//当鼠标左键双击显示临时信息
    }
    else if(e->button()==Qt::RightButton)
    {
        statusBar()->showMessage(tr("鼠标右键在当前位置双击:")+str);//当鼠标右键双击显示临时信息
    }
    else if(e->button()==Qt::MidButton)
    {
        statusBar()->showMessage(tr("鼠标中键在当前位置双击:")+str);//当鼠标中键双击显示临时信息
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *e)//当放开鼠标按键事件
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
    statusBar()->showMessage(tr("鼠标在当前位置放开:")+str,5000);//当鼠标放开时显示5秒的临时信息
}
