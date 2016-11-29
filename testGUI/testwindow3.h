#ifndef TESTWINDOW3_H
#define TESTWINDOW3_H

#include <QDialog>
#include <QString>
#include "store.h"

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

    void on_fireButton_clicked();
    void on_hireButton_clicked();

private:
    Ui::testwindow3 *ui;
    Store *s;

};

#endif // TESTWINDOW3_H
