#include<QString>
#include<QDebug>
int main()
{

    QString str="abcd";
    QString str1=str.toUpper();
    //qDebug()<<str1<<endl;
    //qDebug("%s",qPrintable(str1));
    //qDebug()<<qPrintable(str1);                     //使用qDebug("%s",qPrintable(str1));或者qDebug()<<qPrintable(str1);代替qDebug()<<str1<<endl;消除输出时带来的双引号

    QString str2="QWER";
    QString str3=str2.toLower();
    //qDebug("%s",qPrintable(str3));
    //qDebug()<<qPrintable(str3);
    //qDebug()<<str<<endl;

    QString str4="4696";
    double str5=str4.toInt();
    //qDebug()<<str5<<endl;

    QString str6="7895.5";
    float str7=str6.toFloat();
    //qDebug()<<str7<<endl;

    qDebug()<<str1<<str3<<" "<<str5<<"+"<<str7<<"="<<str5+str7<<endl;

}
