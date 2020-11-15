#include <iostream>
#include <QString>
#include <QDebug>
int main()
{
    QString str="   tyfytfkjuyfuy  ";
    QString str1=str.trimmed();
    QString str2="juy";
    int a=str.indexOf(str2);
    int b=str2.length();
    QString str3=str.remove(a,b-1);
    qDebug()<<"RemoveSpacd:"<<str1<<endl;
    qDebug()<<"juy StartAt:"<<a<<endl;
    qDebug()<<"AfterRemove:"<<str3<<endl;
}

