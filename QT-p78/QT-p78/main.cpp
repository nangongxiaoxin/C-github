#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setGeometry(50,50,200,200);
    qDebug()<<w.x()<<" "<<w.y()<<" "<<w.pos();
    qDebug()<<w.geometry().width()<<" "<<w.frameGeometry().width();
    qDebug()<<w.geometry().width()<<" "<<w.frameGeometry().height();
    return a.exec();
}
