#ifndef REGISTE_H
#define REGISTE_H

#include <QDialog>

namespace Ui {
class Registe;
}

class Registe : public QDialog
{
    Q_OBJECT

public:
    explicit Registe(QWidget *parent = 0);
    ~Registe();

    QString newUsrName();
    QString newUsrPasswd();

private slots:
    void on_SubmitPushButton_clicked();
    void on_resetPushButton_clicked();



private:
    Ui::Registe *ui;
};

#endif // REGISTE_H
