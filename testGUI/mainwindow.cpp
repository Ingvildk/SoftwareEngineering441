#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QTextStream>
#include <QtCore/QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    c = new Company();
    i = new Inventory(1); //s = new Store();
    t = new Transaction(0.0); //(s->getSalesTax)
    s = new Store();
    ui->label_Company->setText(QString::fromStdString(c->getName()));
    delete c;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete i; //delete s;
    delete t;
    delete s;
}

QString MainWindow::getVal(int digits, int current)
{
    QString str = QString::number(current);
    QString num = QString::number(digits);
    if(current == 0)
        return num;
    if(current > 99999)
        return str;
    str.append(num);
    return str;
}

void MainWindow::on_pushButton1_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 1;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton2_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 2;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton3_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 3;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton4_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 4;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton5_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 5;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton6_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 6;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton7_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 7;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton8_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 8;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton9_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 9;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButton0_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 0;
    ui->lcdNumber->display(getVal(digits, current));
}

void MainWindow::on_pushButtonClr_clicked()
{
    ui->lcdNumber->display("0");
}

void MainWindow::on_pushButtonEnter_clicked()
{
    MainWindow::on_pushButtonClr_clicked();
    //Search for item and display all item information: item description, price, etc.
    if ((i->getProduct(ui->lcdNumber->intValue()).getID()) == -1) {
        ui->textBrowserTransaction->append(QString::fromStdString("There is no product that matches this ID."));
    }
    else {
        ui->textBrowserTransaction->append(QString::number(ui->lcdNumber->intValue()));
        Product *p = new Product();

        p->setID(i->getProduct(ui->lcdNumber->intValue()).getID());
        p->setName(i->getProduct(ui->lcdNumber->intValue()).getName());
        p->setBrand(i->getProduct(ui->lcdNumber->intValue()).getBrand());
        p->setDept(i->getProduct(ui->lcdNumber->intValue()).getDept());
        p->setQuantity(quantity);
        p->setMsrp(i->getProduct(ui->lcdNumber->intValue()).getMsrp());
        p->setPrice(i->getProduct(ui->lcdNumber->intValue()).getPrice());

        t->addToCart(*p);
        quantity = 0;
        delete p;
    }
}

void MainWindow::on_pushButtonNewSale_clicked()
{
    MainWindow::on_pushButtonClr_clicked();
    ui->textBrowserTransaction->setPlainText("");
    t->clearCart();
}

void MainWindow::on_pushButtonQty_clicked()
{
    QString str = "[";
    str.append(QString::number(ui->lcdNumber->intValue()));
    str.append("x]");
    quantity = ui->lcdNumber->intValue();
    ui->textBrowserTransaction->append(str);
    MainWindow::on_pushButtonClr_clicked();
}

void MainWindow::on_pushButtonManualKey_clicked()
{
    ui->textBrowserTransaction->setPlainText("!");
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionEdit_Buttons_triggered()
{
    tw = new testwindow();
    tw->show();
}

void MainWindow::on_actionEdit_Items_triggered()
{
    tw2 = new testwindow2();
    tw2->show();
}

void MainWindow::on_actionEdit_Employees_triggered()
{
    tw3 = new testwindow3();
    tw3->show();
}

void MainWindow::on_pushButtonCategory1_clicked()
{

}

void MainWindow::on_pushButton_28_clicked()
{

}

void MainWindow::on_pushButtonRemove_clicked()
{
    MainWindow::on_pushButtonClr_clicked();
    //Search for item and display all item information: item description, price, etc.
    if (i->getProduct(ui->lcdNumber->intValue()).getID() == -1)
        ui->textBrowserTransaction->append(QString::fromStdString("There is no product that matches this ID."));
    else {
        ui->textBrowserTransaction->append(QString::number(ui->lcdNumber->intValue()));
        Product *p = new Product();

        p->setID(i->getProduct(ui->lcdNumber->intValue()).getID());
        p->setName(i->getProduct(ui->lcdNumber->intValue()).getName());
        p->setBrand(i->getProduct(ui->lcdNumber->intValue()).getBrand());
        p->setDept(i->getProduct(ui->lcdNumber->intValue()).getDept());
        p->setQuantity(quantity);
        p->setMsrp(i->getProduct(ui->lcdNumber->intValue()).getMsrp());
        p->setPrice(i->getProduct(ui->lcdNumber->intValue()).getPrice());

        t->removeFromCart(*p);
        quantity = 0;
        delete p;
    }
}
