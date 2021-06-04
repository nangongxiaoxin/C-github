/********************************************************************************
** Form generated from reading UI file 'sign.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_H
#define UI_SIGN_H

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

class Ui_sign
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *signLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *usrPasswdLabel;
    QLineEdit *usrPasswdLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerPushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *signPushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *usrNameLabel;
    QLineEdit *usrNameLineEdit;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *sign)
    {
        if (sign->objectName().isEmpty())
            sign->setObjectName(QStringLiteral("sign"));
        sign->resize(501, 419);
        sign->setStyleSheet(QLatin1String("#sign {\n"
"border-image: url(:/sign.jpg);\n"
"}"));
        gridLayout = new QGridLayout(sign);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 9, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        signLabel = new QLabel(sign);
        signLabel->setObjectName(QStringLiteral("signLabel"));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(16);
        signLabel->setFont(font);

        horizontalLayout_4->addWidget(signLabel, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        usrPasswdLabel = new QLabel(sign);
        usrPasswdLabel->setObjectName(QStringLiteral("usrPasswdLabel"));

        horizontalLayout_2->addWidget(usrPasswdLabel);

        usrPasswdLineEdit = new QLineEdit(sign);
        usrPasswdLineEdit->setObjectName(QStringLiteral("usrPasswdLineEdit"));
        usrPasswdLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(usrPasswdLineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        registerPushButton = new QPushButton(sign);
        registerPushButton->setObjectName(QStringLiteral("registerPushButton"));

        horizontalLayout_3->addWidget(registerPushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        signPushButton = new QPushButton(sign);
        signPushButton->setObjectName(QStringLiteral("signPushButton"));

        horizontalLayout_3->addWidget(signPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        usrNameLabel = new QLabel(sign);
        usrNameLabel->setObjectName(QStringLiteral("usrNameLabel"));

        horizontalLayout->addWidget(usrNameLabel);

        usrNameLineEdit = new QLineEdit(sign);
        usrNameLineEdit->setObjectName(QStringLiteral("usrNameLineEdit"));

        horizontalLayout->addWidget(usrNameLineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 0, 1, 1);


        retranslateUi(sign);

        QMetaObject::connectSlotsByName(sign);
    } // setupUi

    void retranslateUi(QDialog *sign)
    {
        sign->setWindowTitle(QApplication::translate("sign", "\347\231\273\345\275\225", 0));
        signLabel->setText(QApplication::translate("sign", "\347\231\273\345\275\225", 0));
        usrPasswdLabel->setText(QApplication::translate("sign", "\345\257\206  \347\240\201\357\274\232", 0));
        registerPushButton->setText(QApplication::translate("sign", "\346\263\250\345\206\214", 0));
        signPushButton->setText(QApplication::translate("sign", "\347\231\273\345\275\225", 0));
        usrNameLabel->setText(QApplication::translate("sign", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class sign: public Ui_sign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_H
