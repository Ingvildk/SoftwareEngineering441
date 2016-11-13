#include "testwindow2.h"
#include "ui_testwindow2.h"

testwindow2::testwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow2)
{
    ui->setupUi(this);
}

testwindow2::~testwindow2()
{
    delete ui;
}

void testwindow2::fillTable()
{
    //ui->tableWidget->
}

void testwindow2::on_pushButtonLoadInventory_clicked()
{
    QString tempstr;
    inv = new Inventory(1);
    inv->addProduct(123456, "Toilet Paper", "Charmin", "Sundries", 100, 15.99, 18.99);
    tempstr = QString::fromStdString(inv->getProductInfoAsString(123456));
    ui->textBrowser->append(tempstr);//parameter = const QString &text
}
