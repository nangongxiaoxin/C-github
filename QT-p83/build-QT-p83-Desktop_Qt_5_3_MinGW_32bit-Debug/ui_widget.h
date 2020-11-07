/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(720, 483);
        radioButton1 = new QRadioButton(Widget);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(30, 30, 121, 19));
        radioButton2 = new QRadioButton(Widget);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(30, 120, 121, 19));
        checkBox1 = new QCheckBox(Widget);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));
        checkBox1->setGeometry(QRect(40, 230, 101, 19));
        checkBox2 = new QCheckBox(Widget);
        checkBox2->setObjectName(QStringLiteral("checkBox2"));
        checkBox2->setGeometry(QRect(40, 310, 101, 19));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 80, 200, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 250, 200, 40));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        radioButton1->setText(QApplication::translate("Widget", "RadioButton1", 0));
        radioButton2->setText(QApplication::translate("Widget", "RadioButton2", 0));
        checkBox1->setText(QApplication::translate("Widget", "CheckBox1", 0));
        checkBox2->setText(QApplication::translate("Widget", "CheckBox2", 0));
        label->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_2->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
