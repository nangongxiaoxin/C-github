#ifndef EXAMPLEB_H
#define EXAMPLEB_H
#include<QDebug>
#include<QCoreApplication>
class CExampleB:public QObject
{
    Q_OBJECT
public:
    CExampleB(){}
public slots:
    void Function(int NewVal)
    {
        qDebug()<<"new Values="<<NewVal;
    }
};

#endif // EXAMPLEB_H
