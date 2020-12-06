#include "widget.h"
#include <QColorDialog>
#include <QFontDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    colorButton=new QPushButton("颜色",this);
    fontButton=new QPushButton("字体",this);
    edit=new QTextEdit(this);
    colorButton->setGeometry(30,30,80,30);
    fontButton->setGeometry(120,30,80,30);
    edit->setGeometry(30,80,350,250);
    connect(colorButton,SIGNAL(clicked()),this,SLOT(clickedColorButton()));
    connect(fontButton,SIGNAL(clicked()),this,SLOT(clickedFontButton()));
}

Widget::~Widget()
{

}
void Widget::clickedColorButton()
{
    QColorDialog *colorDialog=new QColorDialog(this);
    colorDialog->setCurrentColor(QColor(Qt::blue));
    if(QDialog::Accepted==colorDialog->exec())
    {
        edit->setTextColor(colorDialog->currentColor());
    }
}
void Widget::clickedFontButton()
{
    QFontDialog *fontDialog=new QFontDialog(this);
    fontDialog->setCurrentFont(edit->font());
    if(QDialog::Accepted==fontDialog->exec())
    {
        edit->setCurrentFont(fontDialog->currentFont());
    }
}
