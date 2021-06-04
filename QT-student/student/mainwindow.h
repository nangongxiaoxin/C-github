#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "studentBase.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    student *stu=new student;

private slots:
    void on_addPushButton_clicked();
    void on_deletePushButton_clicked();
    void on_modifyPushButton_clicked();
    void on_queryPushButton_clicked();
    void on_showPushButton_clicked();



    void on_actionADD_triggered();
    void on_actionDEL_triggered();
    void on_actionMOD_triggered();
    void on_actionSER_triggered();
    void on_actionSHOW_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
