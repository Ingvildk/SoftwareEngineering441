#ifndef TESTWINDOW3_H
#define TESTWINDOW3_H

#include <QDialog>

namespace Ui {
class testwindow3;
}

class testwindow3 : public QDialog
{
    Q_OBJECT

public:
    explicit testwindow3(QWidget *parent = 0);
    ~testwindow3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::testwindow3 *ui;

};

#endif // TESTWINDOW3_H
