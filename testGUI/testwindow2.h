#ifndef TESTWINDOW2_H
#define TESTWINDOW2_H

#include <QDialog>
#include <QString>
#include "inventory.h"

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
    void on_pushButtonLoadInventory_clicked();

    void on_pushButtonAddItem_clicked();

private:
    Ui::testwindow2 *ui;
    void fillTable();
    Inventory *inv;
};

#endif // TESTWINDOW2_H
