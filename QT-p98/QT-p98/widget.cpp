#include "widget.h"
#include <QTableWidget>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTableWidget *tableWidget=new QTableWidget(10,5,this);//构造一个QTableWidget的对象，设置为10行5列
    tableWidget->setWindowTitle("QTableWidget &Item");
    tableWidget->resize(550,350);//设置表格
    QStringList header;//添加表头
    header<<"月份"<<"名字"<<"备注";
    tableWidget->setHorizontalHeaderLabels(header);
    tableWidget->setItem(0,0,new QTableWidgetItem("一月"));//添加第1列(从0开始计数)
    tableWidget->setItem(1,0,new QTableWidgetItem("二月"));
    tableWidget->setItem(2,0,new QTableWidgetItem("三月"));
    tableWidget->setItem(0,1,new QTableWidgetItem(QIcon(":/rc/1.ico"),"文件1"));//添加第二列
    tableWidget->setItem(1,1,new QTableWidgetItem(QIcon(":/rc/2.ico"),"文件2"));
    tableWidget->setItem(2,1,new QTableWidgetItem(QIcon(":/rc/3.ico"),"文件3"));
    //tableWidget->removeRow(0);
    //tableWidget->removeColumn(0);//删除行、列
    tableWidget->show();
}

Widget::~Widget()
{

}
