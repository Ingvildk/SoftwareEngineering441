#include "../company.h"
#include "testwindow3.h"
#include "ui_testwindow3.h"
#include <QtDebug>

testwindow3::testwindow3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow3)
{
    ui->setupUi(this);
}

int ID = 0;

testwindow3::~testwindow3()
{
    delete ui;
}
/*
void MainWindow::on_pushButton1_clicked()
{
    int current;
    current = ui->lcdNumber->intValue();
    int digits = 1;
    ui->lcdNumber->display(getVal(digits, current));
}

void testwindow3::on_pushButton_clicked()
{

}
//delete button. Deleting employeed with matching ID

void testwindow3::on_pushButton_2_clicked()
{
    // wrong need to access this instance of company
    Company* temp = new Company();
    temp->removeEmployee(ui->IDEdit);
}
*/
void testwindow3::on_fireButton_clicked()
{
    QString temp = ui->IDEdit->toPlainText();
    qDebug() << "hello";
}
