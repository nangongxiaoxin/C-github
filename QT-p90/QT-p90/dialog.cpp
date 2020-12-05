#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    for(int i=1;i<=1000;i++)
        {
            ui->progressBar->setValue(i);
            QString str=QString("%1").arg(i);
            str="复制文件数目："+str;
            ui->fileNum->setText(str);
        }
}
