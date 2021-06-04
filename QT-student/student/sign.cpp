#include <QMessageBox>
#include <QDebug>
#include "sign.h"
#include "ui_sign.h"
#include "registe.h"
#include "mainwindow.h"
sign::sign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sign)
{
    ui->setupUi(this);
}

sign::~sign()
{
    delete ui;
}


//登录
void sign::on_signPushButton_clicked()
{
    if(ui->usrPasswdLineEdit->text()==newUsrPasswd&&ui->usrNameLineEdit->text()!=newUsrName){
        QMessageBox::about(this,"警告","用户名错误");
    }
    if(ui->usrNameLineEdit->text()==newUsrName&&ui->usrPasswdLineEdit->text()!=newUsrPasswd){
        QMessageBox::about(this,"警告","密码错误");
    }
    if(ui->usrNameLineEdit->text()!=newUsrName&&ui->usrPasswdLineEdit->text()!=newUsrPasswd){
        QMessageBox::about(this,"警告","用户名和密码错误");
    }
    if(ui->usrNameLineEdit->text()==""||ui->usrPasswdLineEdit->text()==""){
        QMessageBox::about(this,"警告","请先注册并仔细填写用户名和密码");

    }
    else if(ui->usrNameLineEdit->text()==newUsrName&&ui->usrPasswdLineEdit->text()==newUsrPasswd){
        QMessageBox::about(this,"提醒","登录成功");
        this->close();
        MainWindow *m=new MainWindow;
        m->show();
    }
}

//注册
void sign::on_registerPushButton_clicked()
{
    Registe *R=new Registe;
    R->exec();
    newUsrName=R->newUsrName();
    newUsrPasswd=R->newUsrPasswd();
}
