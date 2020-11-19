#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>

class Dialog : public QDialog
{
    Q_OBJECT
    QLabel *label;

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
