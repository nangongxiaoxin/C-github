#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(400,400);
    label=new QLabel(this); //label�Ǹ�����
    label->setText("hello qt!");
    label->setGeometry(200,200,300,100);
}

Dialog::~Dialog()
{

}
