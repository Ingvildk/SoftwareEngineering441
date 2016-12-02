#include "testwindow2.h"
#include "ui_testwindow2.h"

testwindow2::testwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow2)
{
    ui->setupUi(this);
    s = new Store(1);
    ui->input_ID->setMaximumBlockCount(6);
    LoadInventory();
    delete s;
}

testwindow2::~testwindow2()
{
    delete ui;
    delete s;
}

void testwindow2::LoadInventory()
{
    s = new Store(1);
    ui->show_Inventory->setText("");
    std::string info[(s->getInventory().sizeOfInventory()) * 7];
    s->getInventory().getAllProductsInfoAsString(info, (s->getInventory().sizeOfInventory()));
    for(int i = 0; i < (s->getInventory().sizeOfInventory()); i++){
        ui->show_Inventory->append(QString::fromStdString(info[(i*7)]) + "\t" +
        QString::fromStdString(info[(i*7)+1]) +"\t"+
        QString::fromStdString(info[(i*7)+2]) +"\t"+
        QString::fromStdString(info[(i*7)+3]) +"\t"+
        QString::fromStdString(info[(i*7)+4]) +"\t"+
        QString::fromStdString(info[(i*7)+5]) +"\t"+
        QString::fromStdString(info[(i*7)+6]));
    }
    delete s;
}

void testwindow2::on_pushButtonAddItem_clicked()
{
    s = new Store(1);
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
    LoadInventory();
    delete s;
}

void testwindow2::on_pushButtonEditItem_clicked()
{
    s = new Store(1);
    s->getInventory().removeProduct(ui->input_ID->toPlainText().toInt());
    on_pushButtonAddItem_clicked();
    LoadInventory();
    delete s;
}
