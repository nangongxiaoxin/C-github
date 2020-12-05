#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_mdiArea=new QMdiArea;
    this->setCentralWidget(m_mdiArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actionNew_triggered()
{
    QLabel *label=new QLabel("MDI SuWindow!");
    QMdiSubWindow *subWin=new QMdiSubWindow;
    subWin->setWidget(label);
    subWin->setAttribute(Qt::WA_DeleteOnClose);
    subWin->resize(180,100);
    m_mdiArea->addSubWindow(subWin);
    subWin->show();
}
