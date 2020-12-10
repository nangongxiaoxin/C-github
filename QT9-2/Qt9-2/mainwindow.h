#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QMenuBar>
#include <QToolBar>
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QTextEdit *textEdit;
    QMenu *viewMenu;
    QToolBar *viewToolBar;
    void createDockWidget();
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
