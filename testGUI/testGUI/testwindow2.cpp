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
