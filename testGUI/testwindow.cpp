#include "testwindow.h"
#include "ui_testwindow.h"

testwindow::testwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testwindow)
{
    ui->setupUi(this);
}

testwindow::~testwindow()
{
    delete ui;
}
