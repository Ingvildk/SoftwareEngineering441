#ifndef TESTWINDOW2_H
#define TESTWINDOW2_H

#include <QDialog>
#include <QString>
#include "store.h"

namespace Ui {
class testwindow2;
}

class testwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit testwindow2(QWidget *parent = 0);
    ~testwindow2();

private slots:
    void LoadInventory();

    void on_pushButtonAddItem_clicked();

    void on_pushButtonEditItem_clicked();

private:
    Ui::testwindow2 *ui;
    Store *s;
};

#endif // TESTWINDOW2_H
