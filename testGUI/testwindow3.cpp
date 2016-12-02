#include "testwindow3.h"
#include "ui_testwindow3.h"
#include <QDebug>

testwindow3::testwindow3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow3)
{
    ui->setupUi(this);
    //s = new Store(1);
}

int ID = 0;

testwindow3::~testwindow3()
{
    delete ui;
    //delete s;
}
void testwindow3::on_fireButton_clicked()
{
    Store::Instance()->removeEmployee(ui->input_ID->toPlainText().toInt(), ui->input_Name->toPlainText().toStdString());

    ui->input_ID->clear();
    ui->input_Name->clear();
    ui->input_Address->clear();
    ui->input_Job->clear();
    ui->input_Salary->clear();
    ui->input_Dob->clear();
}


void testwindow3::on_hireButton_clicked()
{
    Store::Instance()->addEmployee(
                ui->input_ID->toPlainText().toInt(),
                ui->input_Name->toPlainText().toStdString(),
                ui->input_Address->toPlainText().toStdString(),
                ui->input_Job->toPlainText().toStdString(),
                ui->input_Salary->toPlainText().toDouble(),
                ui->input_Dob->toPlainText().toInt());

    ui->input_ID->clear();
    ui->input_Name->clear();
    ui->input_Address->clear();
    ui->input_Job->clear();
    ui->input_Salary->clear();
    ui->input_Dob->clear();
}
