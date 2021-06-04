/********************************************************************************
** Form generated from reading UI file 'registe.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTE_H
#define UI_REGISTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Registe
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *SubmitPushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QLineEdit *newUsrNameLineEdit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *newUsrPasswdLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *Registe)
    {
        if (Registe->objectName().isEmpty())
            Registe->setObjectName(QStringLiteral("Registe"));
        Registe->resize(501, 424);
        Registe->setStyleSheet(QLatin1String("#Registe {\n"
"border-image: url(:/registe.jpg);\n"
"}"));
        gridLayout = new QGridLayout(Registe);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Registe);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(16);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SubmitPushButton = new QPushButton(Registe);
        SubmitPushButton->setObjectName(QStringLiteral("SubmitPushButton"));

        horizontalLayout->addWidget(SubmitPushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        resetPushButton = new QPushButton(Registe);
        resetPushButton->setObjectName(QStringLiteral("resetPushButton"));

        horizontalLayout->addWidget(resetPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_2 = new QLabel(Registe);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        newUsrNameLineEdit = new QLineEdit(Registe);
        newUsrNameLineEdit->setObjectName(QStringLiteral("newUsrNameLineEdit"));

        horizontalLayout_3->addWidget(newUsrNameLineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(Registe);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        newUsrPasswdLineEdit = new QLineEdit(Registe);
        newUsrPasswdLineEdit->setObjectName(QStringLiteral("newUsrPasswdLineEdit"));
        newUsrPasswdLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(newUsrPasswdLineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 1, 0, 1, 1);


        retranslateUi(Registe);

        QMetaObject::connectSlotsByName(Registe);
    } // setupUi

    void retranslateUi(QDialog *Registe)
    {
        Registe->setWindowTitle(QApplication::translate("Registe", "\346\263\250\345\206\214", 0));
        label->setText(QApplication::translate("Registe", "\346\263\250\345\206\214", 0));
        SubmitPushButton->setText(QApplication::translate("Registe", "\346\217\220\344\272\244", 0));
        resetPushButton->setText(QApplication::translate("Registe", "\351\207\215\347\275\256", 0));
        label_2->setText(QApplication::translate("Registe", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("Registe", "\345\257\206  \347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Registe: public Ui_Registe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTE_H
