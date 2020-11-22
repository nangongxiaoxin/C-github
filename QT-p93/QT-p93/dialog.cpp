#include "dialog.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    tabWidget=new QTabWidget(this);
    QWidget *widget=new QWidget();
    QLineEdit *lineEdit=new QLineEdit(widget);
    lineEdit->setGeometry(10,10,190,30);
    QPushButton *pushButton=new QPushButton("Test",widget);
    pushButton->setGeometry(10,45,190,30);

    QLabel *label=new QLabel("hello qt");
    label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    QPushButton *pushButton3=new QPushButton("Click Me");

    tabWidget->addTab(widget,"Tab1");

    tabWidget->addTab(label,"Tab2");

    tabWidget->addTab(pushButton3,"Tab3");

    tabWidget->setGeometry(0,0,220,150);
    this->resize(220,150);
    this->setWindowTitle("QTabWidgetDemo");
}

Dialog::~Dialog()
{

}
