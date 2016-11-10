#include "button1_window.h"
#include "ui_button1_window.h"

button1_window::button1_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::button1_window)
{
    ui->setupUi(this);
}

button1_window::~button1_window()
{
    delete ui;
}
