#include "../company.h"
#include "testwindow3.h"
#include "ui_testwindow3.h"
//#include <QtDebug>

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
    QString temp = ui->IDEdit->toPlainText();
   // qDebug() << "hello";
}
