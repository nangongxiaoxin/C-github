#include<QString>
#include<QDebug>
int main()
{

    QString str="abcd";
    QString str1=str.toUpper();
    qDebug("%s",qPrintable(str1));
    qDebug()<<qPrintable(str1);                     //ʹ��qDebug("%s",qPrintable(str1));����qDebug()<<qPrintable(str1);����qDebug()<<str1<<endl;�������ʱ������˫����

    QString str2="QWER";
    QString str3=str2.toLower();
    qDebug("%s",qPrintable(str3));
    qDebug()<<qPrintable(str3);

    QString str4="4696";
    double str5=str4.toInt();
    qDebug()<<str5<<endl;

}
