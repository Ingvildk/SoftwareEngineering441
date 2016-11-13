#include "../company.h"
#include "testwindow3.h"
#include "ui_testwindow3.h"
#include <QDebug>

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
void testwindow3::on_fireButton_clicked()
{
    //int temp = ui->IDEdit->toPlainText();
    //singleton company will call the removeEmployee
    //Company.removeEmployee(temp);
    //qDebug() << temp;

    //QString temp = ui->IDEdit->toPlainText();
    //temp.toInt();
    //singleton company will call the removeEmployee

    //removeEmployee(temp);
    //qDebug() << temp;
}


void testwindow3::on_hireButton_clicked()
{
//    QString id = ui->IDEdit->toPlainText();
//    id.toDouble();
//    QString name = ui->nameEdit->toPlainText();
//    QString address = ui->addressEdit->toPlainText();
//    QString job = ui->jobEdit->toPlainText();
//    QString sal = ui->salEdit->toPlainText();
//    sal.toDouble();
//    QString dob = ui->DOBEdit->toPlainText();
//    dob.toDouble();
    //singleton company will call the removeEmployee
    // addEmployee(int, string, string, string, double, int)
    //addEmployee(id, name, address, job, sal, dob);
}
