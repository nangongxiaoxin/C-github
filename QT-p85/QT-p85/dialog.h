#ifndef DIALOG_H
#define DIALOG_H
#include <QComboBox>
#include <QDialog>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
public slots:
    void onChanged(int index);
private:
    QComboBox *comBox;
};

#endif // DIALOG_H
