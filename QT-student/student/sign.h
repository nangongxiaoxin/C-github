#ifndef SIGN_H
#define SIGN_H

#include <QDialog>

namespace Ui {
class sign;
}

class sign : public QDialog
{
    Q_OBJECT

public:
    explicit sign(QWidget *parent = 0);
    ~sign();
    QString newUsrName;
    QString newUsrPasswd;


private slots:
    void on_signPushButton_clicked();

    void on_registerPushButton_clicked();

private:
    Ui::sign *ui;
};

#endif // SIGN_H
