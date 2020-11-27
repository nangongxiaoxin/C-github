#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QGridLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QGridLayout *layout=new QGridLayout;
    layout->addWidget(ui->pushButton,0,0,1,3);
    layout->addWidget(ui->label,1,0);
    layout->addWidget(ui->horizontalSlider,2,0);
    layout->addWidget(ui->label_2,1,1);
    layout->addWidget(ui->horizontalSlider_2,2,1);
    layout->addWidget(ui->label_3,1,2);
    layout->addWidget(ui->horizontalSlider_3,2,2);
    layout->addWidget(ui->label_4,3,0);
    layout->addWidget(ui->horizontalSlider_4,4,0);
    layout->addWidget(ui->label_5,3,1);
    layout->addWidget(ui->horizontalSlider_5,4,1);
    layout->addWidget(ui->label_6,3,2);
    layout->addWidget(ui->horizontalSlider_6,4,2);

    this->setLayout(layout);
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

void Dialog::on_horizontalSlider_3_actionTriggered(int action)
{
    ui->label_3->setText(QString::number(ui->horizontalSlider_3->value()));
}

void Dialog::on_horizontalSlider_4_actionTriggered(int action)
{
    ui->label_4->setText(QString::number(ui->horizontalSlider_4->value()));
}

void Dialog::on_horizontalSlider_5_actionTriggered(int action)
{
    ui->label_5->setText(QString::number(ui->horizontalSlider_5->value()));
}

void Dialog::on_horizontalSlider_6_actionTriggered(int action)
{
    ui->label_6->setText(QString::number(ui->horizontalSlider_6->value()));
}
