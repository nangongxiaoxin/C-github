#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label=new QLabel(this);
    label->setFixedWidth(70);
    list=new  QListWidget(this);

    list->addItem(new QListWidgetItem(QIcon(":/rc/1.ico"),tr("Line")));
    list->addItem(new QListWidgetItem(QIcon(":/rc/2.ico"),tr("Rectangle")));
    list->addItem(new QListWidgetItem(QIcon(":/rc/3.ico"),tr("Oval")));
    list->addItem(new QListWidgetItem(QIcon(":/rc/4.ico"),tr("Trangle")));

    label->setGeometry(20,50,100,20);
    list->setGeometry(20,70,200,100);

    connect(list,SIGNAL(currentTextChanged(QString)),label,SLOT(setText(QString)));
}

Widget::~Widget()
{

}
