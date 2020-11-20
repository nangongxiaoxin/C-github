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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open;
    QAction *actionSize;
    QAction *Clour;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(935, 790);
        open = new QAction(MainWindow);
        open->setObjectName(QStringLiteral("open"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rc/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        open->setIcon(icon);
        actionSize = new QAction(MainWindow);
        actionSize->setObjectName(QStringLiteral("actionSize"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rc/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSize->setIcon(icon1);
        Clour = new QAction(MainWindow);
        Clour->setObjectName(QStringLiteral("Clour"));
        Clour->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 40, 771, 551));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 935, 34));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(open);
        menuFile->addAction(actionSize);
        menuFile->addAction(Clour);
        mainToolBar->addAction(open);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        open->setText(QApplication::translate("MainWindow", "open", 0));
        open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSize->setText(QApplication::translate("MainWindow", "FlontSize", 0));
        actionSize->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        Clour->setText(QApplication::translate("MainWindow", "clour", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
