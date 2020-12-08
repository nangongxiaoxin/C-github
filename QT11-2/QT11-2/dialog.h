#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_startBtn_clicked();

    void on_stopBtn_clicked();

private:
    Ui::Dialog *ui;
protected:
    void timerEvent(QTimerEvent *event);
    int m_nTimerId;
    int count;
};

#endif // DIALOG_H
