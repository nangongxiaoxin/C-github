#include"dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actionOpen_triggered()
{
    Dialog *dialog=new Dialog(this);
    dialog->show();//非模态对话框
}

void MainWindow::on_actionMotai_triggered()
{
    Dialog dialog(this);
    dialog.exec();//模态对话框
}
