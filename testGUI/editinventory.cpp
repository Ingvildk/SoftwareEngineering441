#include "editinventory.h"
#include "ui_editinventory.h"

editInventory::editInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editInventory)
{
    ui->setupUi(this);
}

editInventory::~editInventory()
{
    delete ui;
}
