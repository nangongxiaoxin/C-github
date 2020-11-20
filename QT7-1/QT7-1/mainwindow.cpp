#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QColorDialog>
#include <QFontDialog>
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

void MainWindow::on_open_triggered()
{
    QString s=QFileDialog::getOpenFileName(this,"´ò¿ª","/","C++ sourcefile(*.cpp)");
    qDebug()<<s;
}


void MainWindow::on_Clour_triggered()
{
    QColor c=QColorDialog::getColor(Qt::red);
    if(c.isValid())
    {
        ui->textEdit->setTextColor(c);
    }
}


void MainWindow::on_actionSize_triggered()
{
    bool ok=true;
    QFont font=QFontDialog::getFont(&ok);
    if(ok)
    {
         ui->textEdit->setFont(font);
    }
}
