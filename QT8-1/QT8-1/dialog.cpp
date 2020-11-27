#include "dialog.h"
#include "ui_dialog.h"
#include <QString>

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

void Dialog::on_horizontalSlider_actionTriggered(int action)
{
    ui->label->setText(QString::number(ui->horizontalSlider->value()));
}

void Dialog::on_horizontalSlider_2_actionTriggered(int action)
{
    ui->label_2->setText(QString::number(ui->horizontalSlider_2->value()));
}

void Dialog::on_horizontalSlider_6_actionTriggered(int action)
{
    ui->label_3->setText(QString::number(ui->horizontalSlider_6->value()));
}

void Dialog::on_horizontalSlider_3_actionTriggered(int action)
{
    ui->label_4->setText(QString::number(ui->horizontalSlider_3->value()));
}

void Dialog::on_horizontalSlider_4_actionTriggered(int action)
{
    ui->label_5->setText(QString::number(ui->horizontalSlider_4->value()));
}

void Dialog::on_horizontalSlider_5_actionTriggered(int action)
{
    ui->label_6->setText(QString::number(ui->horizontalSlider_5->value()));
}
