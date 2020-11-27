#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->lineEdit->setReadOnly(true);
    }
    else
    {
        ui->lineEdit->setReadOnly(false);
    }
}

void Widget::on_checkBox_2_clicked()
{
    if(ui->checkBox_2->isChecked())
    {
        ui->lineEdit->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->lineEdit->setEchoMode(QLineEdit::Normal);
    }
}

void Widget::on_pushButton_clicked()
{
    ui->label->setText(ui->lineEdit->text());
}
