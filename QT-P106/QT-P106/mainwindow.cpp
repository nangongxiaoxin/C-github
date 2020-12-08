#include "mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Main Window"));
    openAction=new QAction(QIcon(":/rc/1.ico"),tr("&Open..."),this);//定义QAction
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction,&QAction::triggered,this,&MainWindow::open);

    QMenu *file=menuBar()->addMenu(tr("&File"));//添加菜单
    file->addAction(openAction);

    QToolBar *toolBar=addToolBar(tr("&File"));//添加工具栏按钮
    toolBar->addAction(openAction);

    QStatusBar *status=statusBar();//设置状态栏信息
    status->addAction(openAction);
}

MainWindow::~MainWindow()
{

}
void MainWindow::open()
{
    QMessageBox::information(this,tr("信息"),tr("Open"));
}
