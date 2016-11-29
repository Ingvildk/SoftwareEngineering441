#include "testwindow2.h"
#include "ui_testwindow2.h"

testwindow2::testwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow2)
{
    ui->setupUi(this);
    s = new Store(1);
}

testwindow2::~testwindow2()
{
    delete ui;
    delete s;
}

void testwindow2::on_pushButtonLoadInventory_clicked()
{
    QString tempstr = QString::fromStdString(s->getInventory().getProductInfoAsString(ui->input_ID->toPlainText().toInt()));
    ui->show_Inventory->append(tempstr);
}

void testwindow2::on_pushButtonAddItem_clicked()
{
    s->getInventory().addProduct(ui->input_ID->toPlainText().toInt(),
        ui->input_Name->toPlainText().toStdString(),
        ui->input_Brand->toPlainText().toStdString(),
        ui->input_Dept->toPlainText().toStdString(),
        ui->input_Qty->toPlainText().toInt(),
        ui->input_Msrp->toPlainText().toDouble(),
        ui->input_Price->toPlainText().toDouble());

    ui->input_ID->clear();
    ui->input_Name->clear();
    ui->input_Brand->clear();
    ui->input_Dept->clear();
    ui->input_Qty->clear();
    ui->input_Msrp->clear();
    ui->input_Price->clear();
}

void testwindow2::on_pushButtonEditItem_clicked()
{
    s->getInventory().removeProduct(ui->input_ID->toPlainText().toInt());
    on_pushButtonAddItem_clicked();
}
