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
    void on_horizontalSlider_actionTriggered(int action);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_horizontalSlider_6_actionTriggered(int action);

    void on_horizontalSlider_3_actionTriggered(int action);

    void on_horizontalSlider_4_actionTriggered(int action);

    void on_horizontalSlider_5_actionTriggered(int action);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
