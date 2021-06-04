#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//增加
void MainWindow::on_addPushButton_clicked()
{
   //提取
   QString studentNumber=ui->studentNumberLineEdit->text();
   QString studentName=ui->studentNameLineEdit->text();
   QString studentClass=ui->studentClassLineEdit->text();
   QString studentScore=ui->studentScoreLineEdit->text();

   //传参修改
   stu->add(studentNumber,studentName,studentClass,studentScore);

   //ui->studentNumberLineEdit->text();
   ui->studentNumberLineEdit->clear();
   ui->studentNameLineEdit->clear();
   ui->studentClassLineEdit->clear();
   ui->studentScoreLineEdit->clear();

}

//删除
void MainWindow::on_deletePushButton_clicked()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    stu->del(studentNumber);

    QMessageBox::about(this,"提醒","删除成功");

    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();

}

//修改
void MainWindow::on_modifyPushButton_clicked()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    QString studentScore=ui->studentScoreLineEdit->text();
    stu->mod(studentNumber,studentScore);
    QMessageBox::about(this,"提醒","修改成功");
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}

//查询
void MainWindow::on_queryPushButton_clicked()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    QString StuInfo=stu->que(studentNumber);
    qDebug()<<StuInfo;
    if(StuInfo!=NULL){
        ui->showTextEdit->setText(StuInfo);
    }
    else{
        QMessageBox::about(this,"提醒","没有该学生");
    }
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}

//显示
void MainWindow::on_showPushButton_clicked()
{

    QString StuInfo=stu->show();

    ui->showTextEdit->setText(StuInfo);
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}

//菜单栏
void MainWindow::on_actionADD_triggered()
{
    //提取
    QString studentNumber=ui->studentNumberLineEdit->text();
    QString studentName=ui->studentNameLineEdit->text();
    QString studentClass=ui->studentClassLineEdit->text();
    QString studentScore=ui->studentScoreLineEdit->text();

    //传参修改
    stu->add(studentNumber,studentName,studentClass,studentScore);

    //ui->studentNumberLineEdit->text();
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();

}


void MainWindow::on_actionDEL_triggered()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    stu->del(studentNumber);

    QMessageBox::about(this,"提醒","删除成功");

    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}


void MainWindow::on_actionMOD_triggered()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    QString studentScore=ui->studentScoreLineEdit->text();
    stu->mod(studentNumber,studentScore);
    QMessageBox::about(this,"提醒","修改成功");
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}


void MainWindow::on_actionSER_triggered()
{
    QString studentNumber=ui->studentNumberLineEdit->text();
    QString StuInfo=stu->que(studentNumber);
    qDebug()<<StuInfo;
    if(StuInfo!=NULL){
        ui->showTextEdit->setText(StuInfo);
    }
    else{
        QMessageBox::about(this,"提醒","没有该学生");
    }
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}

void MainWindow::on_actionSHOW_triggered()
{
    QString StuInfo=stu->show();

    ui->showTextEdit->setText(StuInfo);
    ui->studentNumberLineEdit->clear();
    ui->studentNameLineEdit->clear();
    ui->studentClassLineEdit->clear();
    ui->studentScoreLineEdit->clear();
}
