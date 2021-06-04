#include "studentBase.h"
#include <String>

student::student(){
    //建立QSQLITE数据库
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db.dat");
    if(!db.open()){
        QMessageBox::warning(0,"数据库错误",db.lastError().text());
    }

    //强制指定关联数据库
    sql_query=QSqlQuery(db);
    //建表
    sql_query.exec("create table student(studentNumber int,studentName varchar(40),studentClass varchar(10),studentScore int)");
}

//增加
void student::add(QString studentNumber,QString studentName,QString studentClass,QString studentScore){
    sql_query.exec("INSERT INTO student VALUES ('"+studentNumber+"','"+studentName+"','"+studentClass+"','"+studentScore+"')");
}

//删除
void student::del(QString studentNumber){
    sql_query.exec("delete from student where studentNumber='"+studentNumber+"'");
}

//修改(只能修改分数)
void student::mod(QString studentNumber,QString studentScore){
    sql_query.exec("update student set studentScore='"+studentScore+"' where studentNumber='"+studentNumber+"'");
}

//查询
QString student::que(QString studentNumber){
    bool ok;
    sql_query.exec("select * from student where studentNumber='"+studentNumber+"'");
    qDebug()<<"学号"<<"姓名"<<"班级"<<"分数";
    while(sql_query.next())
    {
        int studentNumber = sql_query.value(0).toInt(&ok);
        QString studentName = sql_query.value(1).toString();
        QString studentClass = sql_query.value(2).toString();
        int studentScore= sql_query.value(3).toInt(&ok);

        //控制台输出
        qDebug()<<studentNumber<<studentName<<studentClass<<studentScore;
        QString stuNumber=QString::number(studentNumber);
        QString stuScore=QString::number(studentScore);

        //空格会报错
        QString k="   ";
        QString StuInfo="学号"+k+"姓名"+"   "+"班级"+"   "+"分数"+"\n"+stuNumber+"    "+studentName+"    "+studentClass+"    "+stuScore;
        return StuInfo;

    }
    return 0;
}

//显示
QString student::show(){
    bool ok;
    QString k="   ";
    QString StuInfo="学号"+k+"姓名"+"   "+"班级"+"   "+"分数"+"\n";
    sql_query.exec("SELECT * FROM student");
    qDebug()<<"学号"<<"姓名"<<"班级"<<"分数";
       while(sql_query.next())
       {
           int studentNumber = sql_query.value(0).toInt(&ok);
           QString studentName = sql_query.value(1).toString();
           QString studentClass = sql_query.value(2).toString();
           int studentScore= sql_query.value(3).toInt(&ok);;

           qDebug()<<studentNumber<<studentName<<studentClass<<studentScore;

           QString stuNumber=QString::number(studentNumber);
           QString stuScore=QString::number(studentScore);
           StuInfo=StuInfo+stuNumber+"      "+studentName+"      "+studentClass+"     "+stuScore+"\n";

       }
     return StuInfo;
}
