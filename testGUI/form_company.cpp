#include "form_company.h"
#include "ui_form_company.h"

form_company::form_company(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_company)
{
    ui->setupUi(this);
}

form_company::~form_company()
{
    delete ui;
}

void form_company::on_buttonBox_accepted()
{
    std::string companyName;
    std::string companyAddress;
    companyName = (ui->textEdit_CompanyInput->toPlainText()).toStdString();
    companyAddress = (ui->textEdit_AddressInput->toPlainText()).toStdString();
    c = new Company(companyName, companyAddress, 0);
    delete c;
}
