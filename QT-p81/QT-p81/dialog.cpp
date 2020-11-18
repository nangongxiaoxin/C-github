#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
     resize(150,150);
     pushButton1=new QPushButton(this);
     QIcon icon1(":/rc/1.ico");
     pushButton1->setIcon(icon1);
     //pushButton1->setChecked(true);
     pushButton1->setGeometry(20,20,70,40);

     pushButton2=new QPushButton(this);
     QIcon icon2(":/rc/2.ico");
     pushButton2->setIcon(icon2);
     pushButton2->setFlat(true);
     pushButton2->setText("Open");
     pushButton2->setChecked(true);
     pushButton2->setGeometry(20,70,70,40);

}

Dialog::~Dialog()
{

}
