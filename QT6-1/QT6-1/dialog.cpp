#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    this->resize(320,100);
    slider=new QSlider(Qt::Horizontal,this);
    slider->setMinimum(0);
    slider->setMaximum(1000);
    slider->setValue(0);
    slider->update();
    label=new QLabel(this);
    QFont font;
    font.setFamily(QStringLiteral("Arial"));
    font.setPointSize(16);
    label->setFont(font);
    label->setAlignment(Qt::AlignHCenter);
    label->setText("0");
    label->setGeometry(20,20,70,70);
    slider->setGeometry(80,25,200,20);   //(x£¬y£¬³¤£¬¿í)

    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(setLabelText(int)));
    this->setWindowTitle("Qslider Demo");

}
void Dialog::setLabelText(int pos)
{
    QString str=QString("%1").arg(pos);
    label->setText(str);
}

Dialog::~Dialog()
{

}
