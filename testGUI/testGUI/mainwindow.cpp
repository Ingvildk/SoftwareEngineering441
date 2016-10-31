#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QTextStream>
#include <QtCore/QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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
    ui->textBrowserTransaction->append(QString::number(ui->lcdNumber->intValue()));
    MainWindow::on_pushButtonClr_clicked();
    //Search for item and display all item information: item description, price, etc.
}
void MainWindow::on_pushButtonNewSale_clicked()
{
    MainWindow::on_pushButtonClr_clicked();
    ui->textBrowserTransaction->setPlainText("");
}

void MainWindow::on_pushButtonQty_clicked()
{
    QString str = "[";
    str.append(QString::number(ui->lcdNumber->intValue()));
    str.append("x]");
    ui->textBrowserTransaction->append(str);
    MainWindow::on_pushButtonClr_clicked();
}

void MainWindow::on_pushButtonManualKey_clicked()
{
    ui->textBrowserTransaction->setPlainText("Hi Logan!");
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
