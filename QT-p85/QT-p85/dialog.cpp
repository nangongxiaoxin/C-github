#include "dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    comBox=new QComboBox(this);
    comBox->setGeometry(20,20,100,80);
    QIcon icon1(":/rc/1.ico");
    comBox->addItem(icon1,"ftp");
    QIcon icon2(":/rc/2.ico");
    comBox->addItem("www");
    comBox->setItemIcon(1,icon2);

    connect(comBox,SIGNAL(currentIndexChanged(int)),this,SLOT(onChanged(int)));
    this->resize(300,300);
    this->setWindowTitle("QComboxDemo");
}

void Dialog::onChanged(int index)
{
    QMessageBox::warning(this,"消息",comBox->itemText(index),QMessageBox::Ok);
}

Dialog::~Dialog()
{

}
