#include "mainwindow.h"
#include <QDockWidget>//包含停靠窗口
#include <QCalendarWidget>//包含日历控件
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    textEdit=new QTextEdit;//创建一个textEdit控件作为主窗口
    this->setCentralWidget(textEdit);
    viewMenu=menuBar()->addMenu(tr("视图"));//添加菜单
    viewToolBar=this->addToolBar(tr(""));//添加工具条
    createDockWidget();                    //创建停靠窗体
    this->setWindowTitle(tr("停靠窗口"));
}

MainWindow::~MainWindow()
{

}
void MainWindow::createDockWidget()
{
    QDockWidget *dock=new QDockWidget;//设置主窗体的第一个QDockWidget
    dock->setWindowTitle(tr("日期"));//设置dock的窗口名称
    dock->setAllowedAreas(Qt::AllDockWidgetAreas);//设置dock的可停靠区域，全部可停靠
    QCalendarWidget *calendar=new QCalendarWidget;//设置dock内的控件
    dock->setWidget(calendar);//将日历设置成dock的主控件
    this->addDockWidget(Qt::RightDockWidgetArea,dock);//向主窗体中添加dock的第一个参数，表示初始显示的位置；第二个参数是要添加的QDockWidget控件
    viewMenu->addAction(dock->toggleViewAction());//向菜单和工具栏中添加显示和隐藏dock窗口的动作
    viewToolBar->addAction(dock->toggleViewAction());


}
