#include "widget.h"
#include <QApplication>
#include<QLabel>
#include<QImage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QLabel *pTag=new QLabel(&w);
    QImage image("F:/C/nangongxiaoxin/C-github/img/1.jpg");
    pTag->setPixmap(QPixmap::fromImage(image));
    pTag->setGeometry(0,0,image.width(),image.height());
    w.show();

    return a.exec();
}
