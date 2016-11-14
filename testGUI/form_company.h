#ifndef FORM_COMPANY_H
#define FORM_COMPANY_H

#include <QDialog>
#include "company.h"
#include <string>

namespace Ui {
class form_company;
}

class form_company : public QDialog
{
    Q_OBJECT

public:
    explicit form_company(QWidget *parent = 0);
    ~form_company();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::form_company *ui;
    Company *c;
};

#endif // FORM_COMPANY_H
