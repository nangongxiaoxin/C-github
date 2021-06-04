/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionADD;
    QAction *actionDEL;
    QAction *actionMOD;
    QAction *actionSER;
    QAction *actionSHOW;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addPushButton;
    QPushButton *deletePushButton;
    QPushButton *modifyPushButton;
    QPushButton *queryPushButton;
    QPushButton *showPushButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *studentNumberLable;
    QLineEdit *studentNumberLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *studentNameLable;
    QLineEdit *studentNameLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *studentClassLable;
    QLineEdit *studentClassLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *studentScoreLable;
    QLineEdit *studentScoreLineEdit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *showTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{border-image:url(:/mainWindow.jpg);}\n"
"#toolBar{background-image:url(:/mainWindow.jpg);}\n"
""));
        actionADD = new QAction(MainWindow);
        actionADD->setObjectName(QStringLiteral("actionADD"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionADD->setIcon(icon);
        actionADD->setText(QString::fromUtf8("\345\242\236\345\212\240"));
        actionDEL = new QAction(MainWindow);
        actionDEL->setObjectName(QStringLiteral("actionDEL"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDEL->setIcon(icon1);
        actionMOD = new QAction(MainWindow);
        actionMOD->setObjectName(QStringLiteral("actionMOD"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMOD->setIcon(icon2);
        actionSER = new QAction(MainWindow);
        actionSER->setObjectName(QStringLiteral("actionSER"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSER->setIcon(icon3);
        actionSHOW = new QAction(MainWindow);
        actionSHOW->setObjectName(QStringLiteral("actionSHOW"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSHOW->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addPushButton = new QPushButton(centralwidget);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));

        horizontalLayout_2->addWidget(addPushButton);

        deletePushButton = new QPushButton(centralwidget);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));

        horizontalLayout_2->addWidget(deletePushButton);

        modifyPushButton = new QPushButton(centralwidget);
        modifyPushButton->setObjectName(QStringLiteral("modifyPushButton"));

        horizontalLayout_2->addWidget(modifyPushButton);

        queryPushButton = new QPushButton(centralwidget);
        queryPushButton->setObjectName(QStringLiteral("queryPushButton"));

        horizontalLayout_2->addWidget(queryPushButton);

        showPushButton = new QPushButton(centralwidget);
        showPushButton->setObjectName(QStringLiteral("showPushButton"));

        horizontalLayout_2->addWidget(showPushButton);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentNumberLable = new QLabel(centralwidget);
        studentNumberLable->setObjectName(QStringLiteral("studentNumberLable"));
        QFont font1;
        font1.setFamily(QStringLiteral("AcadEref"));
        font1.setPointSize(10);
        studentNumberLable->setFont(font1);

        verticalLayout->addWidget(studentNumberLable, 0, Qt::AlignHCenter);

        studentNumberLineEdit = new QLineEdit(centralwidget);
        studentNumberLineEdit->setObjectName(QStringLiteral("studentNumberLineEdit"));

        verticalLayout->addWidget(studentNumberLineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        studentNameLable = new QLabel(centralwidget);
        studentNameLable->setObjectName(QStringLiteral("studentNameLable"));
        studentNameLable->setFont(font1);

        verticalLayout_2->addWidget(studentNameLable, 0, Qt::AlignHCenter);

        studentNameLineEdit = new QLineEdit(centralwidget);
        studentNameLineEdit->setObjectName(QStringLiteral("studentNameLineEdit"));

        verticalLayout_2->addWidget(studentNameLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        studentClassLable = new QLabel(centralwidget);
        studentClassLable->setObjectName(QStringLiteral("studentClassLable"));
        studentClassLable->setFont(font1);

        verticalLayout_3->addWidget(studentClassLable, 0, Qt::AlignHCenter);

        studentClassLineEdit = new QLineEdit(centralwidget);
        studentClassLineEdit->setObjectName(QStringLiteral("studentClassLineEdit"));

        verticalLayout_3->addWidget(studentClassLineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        studentScoreLable = new QLabel(centralwidget);
        studentScoreLable->setObjectName(QStringLiteral("studentScoreLable"));
        studentScoreLable->setFont(font1);

        verticalLayout_4->addWidget(studentScoreLable, 0, Qt::AlignHCenter);

        studentScoreLineEdit = new QLineEdit(centralwidget);
        studentScoreLineEdit->setObjectName(QStringLiteral("studentScoreLineEdit"));

        verticalLayout_4->addWidget(studentScoreLineEdit);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 100, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        showTextEdit = new QTextEdit(centralwidget);
        showTextEdit->setObjectName(QStringLiteral("showTextEdit"));

        gridLayout->addWidget(showTextEdit, 8, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionADD);
        menu->addAction(actionDEL);
        menu->addAction(actionMOD);
        menu->addAction(actionSER);
        menu->addAction(actionSHOW);
        toolBar->addAction(actionADD);
        toolBar->addAction(actionDEL);
        toolBar->addAction(actionMOD);
        toolBar->addAction(actionSER);
        toolBar->addAction(actionSHOW);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        actionADD->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionDEL->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
#ifndef QT_NO_TOOLTIP
        actionDEL->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
#endif // QT_NO_TOOLTIP
        actionDEL->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        actionMOD->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0));
#ifndef QT_NO_TOOLTIP
        actionMOD->setToolTip(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0));
#endif // QT_NO_TOOLTIP
        actionMOD->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0));
        actionSER->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
#ifndef QT_NO_TOOLTIP
        actionSER->setToolTip(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
#endif // QT_NO_TOOLTIP
        actionSER->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionSHOW->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211", 0));
#ifndef QT_NO_TOOLTIP
        actionSHOW->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211", 0));
#endif // QT_NO_TOOLTIP
        actionSHOW->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        label->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        addPushButton->setText(QApplication::translate("MainWindow", "\345\242\236  \345\212\240", 0));
        deletePushButton->setText(QApplication::translate("MainWindow", "\345\210\240  \351\231\244", 0));
        modifyPushButton->setText(QApplication::translate("MainWindow", "\344\277\256  \346\224\271", 0));
        queryPushButton->setText(QApplication::translate("MainWindow", "\346\237\245  \350\257\242", 0));
        showPushButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272", 0));
        studentNumberLable->setText(QApplication::translate("MainWindow", "\345\255\246 \345\217\267", 0));
        studentNameLable->setText(QApplication::translate("MainWindow", "\345\247\223 \345\220\215", 0));
        studentClassLable->setText(QApplication::translate("MainWindow", "\347\217\255 \347\272\247", 0));
        studentScoreLable->setText(QApplication::translate("MainWindow", "\346\210\220 \347\273\251", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
