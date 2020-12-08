#include "mainwindow.h"
#include <QSplitter>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
      QSplitter *MainWin=new QSplitter(Qt::Horizontal); //设置MainWin为水平（左右）分割（分开）时的主窗口，然后需要水平分开的窗口均使用MainWin
      QTextEdit *left1=new QTextEdit(QObject::tr("左窗口1"),MainWin);  //水平分割的窗口left1
      left1->setAlignment(Qt::AlignCenter);
      QTextEdit *left2=new QTextEdit(QObject::tr("左窗口2"),MainWin);  //水平分割的窗口left2
      left2->setAlignment(Qt::AlignCenter);

      QSplitter *MainWin2=new QSplitter(Qt::Vertical,MainWin);  //此处为水平分开的第三个窗口，我们将其上下分开    如果不加MainWin会导致垂直分割的窗口和水平分割的窗口独立存在

      MainWin2->setOpaqueResize(false); //设置拖动分割条时只显示灰线，拖动到位再显示分割条

      QTextEdit *down=new QTextEdit(QObject::tr("上窗口"),MainWin2);
      down->setAlignment(Qt::AlignCenter);
      QTextEdit *up=new QTextEdit(QObject::tr("下窗口"),MainWin2);
      up->setAlignment(Qt::AlignCenter);

      MainWin->setStretchFactor(1,1);
      MainWin->setWindowTitle(QObject::tr("分割窗口"));

      setCentralWidget(MainWin);    //设置中央部件
      MainWin->show();
      MainWin2->show();

}

MainWindow::~MainWindow()
{

}
