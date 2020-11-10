#ifndef DIALOG_H
#define DIALOG_H
#include<QLabel>
#include<QPushButton>

#include <QDialog>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QLabel *label;
    QPushButton *btn;
};

#endif // DIALOG_H
