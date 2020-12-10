#include "mainwindow.h"
#include "dialog.h"
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setAction=new QAction(QIcon(":/rc/1.ico"),tr("选项..."),this);//定义QAction
    setAction->setStatusTip(tr("环境设定"));
    connect(setAction,&QAction::triggered,this,&MainWindow::setting);
    QMenu *tool=menuBar()->addMenu(tr("工具"));//添加菜单
    tool->addAction(setAction);
    QToolBar *toolBar=addToolBar(tr("工具"));//添加工具栏按钮
    toolBar->addAction(setAction);
    QStatusBar *status=statusBar();//设置状态栏信息
    status->addAction(setAction);
    resize(300,200);
}

MainWindow::~MainWindow()
{

}
void MainWindow::setting()
{
//    Dialog dialog(this);
//    dialog.show();//改为 .show 后一闪而过
    Dialog *dialog=new Dialog(this);
    dialog->show();//将其在栈上改到在堆上
}
