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
    int temp = ui->IDEdit->toPlainText();
    qDebug() << temp;
}
