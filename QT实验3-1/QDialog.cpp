#include "QDialog.h"

QDialog::QDialog(QWidget *parent):QDialog(parent)
{
	resize(150, 150);
	label = new QLabel(this);
	label->setText("hello qt");
	label->setGeometry(0, 0, 100, 100);
}