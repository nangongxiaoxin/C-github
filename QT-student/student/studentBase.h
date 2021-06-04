#ifndef STUDENTBASE_H
#define STUDENTBASE_H

#endif // STUDENTBASE_H

//数据库相关操作的头文件

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include <QString>
#include <QDebug>

class student{
    //公有属性 外部调用
public:
    student();

    QSqlQuery sql_query;

    //增加
    void add(QString studentNumber,QString studentName,QString studentClass,QString studentScore);
    //删除
    void del(QString studentNumber);
    //修改(只能修改分数)
    void mod(QString studentNumber,QString studentScore);
    //查询
    QString que(QString studentNumber);

    //显示
    QString show();
};
