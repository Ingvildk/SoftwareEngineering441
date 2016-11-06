#include "testwindow3.h"
#include "ui_testwindow3.h"

testwindow3::testwindow3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow3)
{
    ui->setupUi(this);
}

testwindow3::~testwindow3()
{
    delete ui;
}
