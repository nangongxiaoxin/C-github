#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    count=0;
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::timerEvent(QTimerEvent *event)//没有使用event这个参数
{
    count++;
    QString item=tr("第")+QString::number(count)+tr("次触发");
    ui->listWidget->addItem(item);
}
void Dialog::on_startBtn_clicked()
{
    m_nTimerId=this->startTimer(1500);
}
void Dialog::on_stopBtn_clicked()
{
    this->killTimer(m_nTimerId);
}
