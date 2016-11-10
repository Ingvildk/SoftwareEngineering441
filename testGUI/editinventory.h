#ifndef EDITINVENTORY_H
#define EDITINVENTORY_H

#include <QDialog>

namespace Ui {
class editInventory;
}

class editInventory : public QDialog
{
    Q_OBJECT

public:
    explicit editInventory(QWidget *parent = 0);
    ~editInventory();

private:
    Ui::editInventory *ui;
};

#endif // EDITINVENTORY_H
