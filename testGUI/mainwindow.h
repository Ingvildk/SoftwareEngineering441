#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "testwindow.h"
#include "testwindow2.h"
#include "button1_window.h"
#include "testwindow3.h"
#include "loginscreen.h"
#include "form_company.h"
#include "company.h"
#include "inventory.h" //to be replaced by store.h
#include "product.h"
#include "transaction.h"
#include "store.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton1_clicked();
    QString getVal(int, int);

    void on_pushButton2_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonClr_clicked();

    void on_pushButtonEnter_clicked();

    void on_pushButtonNewSale_clicked();

    void on_pushButtonQty_clicked();

    void on_pushButtonManualKey_clicked();

    void on_actionExit_triggered();

    void on_actionEdit_Buttons_triggered();

    void on_actionEdit_Items_triggered();

    void on_actionEdit_Employees_triggered();

    void on_pushButtonCategory1_clicked();

    void on_pushButton_28_clicked();


    void on_pushButton3_clicked();

    void on_pushButtonRemove_clicked();

private:
    Ui::MainWindow *ui;
    testwindow *tw;
    testwindow2 *tw2;
    button1_window *bw1;
    testwindow3 *tw3;
    LoginScreen *ls;
    Company *c;
    Inventory *i; //Store *s;
    Transaction *t;
    Store *s;
    int quantity;
};

#endif // MAINWINDOW_H
