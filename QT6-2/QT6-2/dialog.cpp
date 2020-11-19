#include "dialog.h"
#include<QPushButton>
#include<QIcon>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    toolBox=new QToolBox(this);
    QWidget *widget=new QWidget(toolBox);
    QIcon iconf1(":/img/1.ico");
    QPushButton *button1=new QPushButton(iconf1,"Wind",widget);
    QIcon iconf2(":/img/2.ico");
    QPushButton *button2=new QPushButton(iconf2,"Cake",widget);
    widget->setGeometry(30,0,40,80);
    button1->setGeometry(35,5,120,60);
    button2->setGeometry(35,70,120,60);
    toolBox->addItem(widget,"frind");
    QIcon iconFrind(":img/3.ico");
    toolBox->setItemIcon(0,iconFrind);
    QIcon iconLi(":img/4.ico");
    QPushButton *buttonStrange=new QPushButton(iconLi,"WangCai");
    toolBox->addItem(buttonStrange,"Stranger");
    QIcon iconStrange(":/img/5.ico");
    toolBox->setItemIcon(1,iconStrange);
    toolBox->setGeometry(0,0,200,300);
    this->resize(400,400);
    this->setWindowTitle("QToolboxDemo");
}

Dialog::~Dialog()
{
}
