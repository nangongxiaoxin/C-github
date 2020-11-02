#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    resize(300,300);
    label=new QLabel("label",this);
    btn=new QPushButton("click Me",this);
    label->move(150,150);
    btn->move(125,110);
    connect(btn,SIGNAL(clicked()),label,SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}
