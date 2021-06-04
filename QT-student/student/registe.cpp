#include "registe.h"
#include "ui_registe.h"
#include "sign.h"

Registe::Registe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registe)
{
    ui->setupUi(this);
}

Registe::~Registe()
{
    delete ui;
}

//注册提交
void Registe::on_SubmitPushButton_clicked()
{
    this->close();
}

QString Registe::newUsrName()
{
    return ui->newUsrNameLineEdit->text();
}

QString Registe::newUsrPasswd()
{
    return ui->newUsrPasswdLineEdit->text();
}

//重置
void Registe::on_resetPushButton_clicked()
{
    ui->newUsrNameLineEdit->clear();
    ui->newUsrPasswdLineEdit->clear();
}


