#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <Qfile>
#include <QTextStream>

loginWindow::loginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_loginButton_clicked()
{
    QFile file("//Users//Kayla//Documents//Login//test.txt");
           QString username = ui->userTxt->text();
           QString password = ui->passwordTxt->text();

    if (file.open(QIODevice::ReadOnly))
           {
              QTextStream in(&file);
              while (!in.atEnd())
              {
                 QString line = in.readLine();

                 quint32 offset = 2;
                 QString userx= line.left(offset);
                 QString passx = line.mid(offset);



                 if((userx.contains(username, Qt::CaseSensitive)) && (passx.contains(password, Qt::CaseSensitive))){

                             nWin = new loginWindow();
                             nWin->setAttribute(Qt::WA_DeleteOnClose);
                             nWin->show();
                 }
                 else{
                     ui->loginLabel->setText(("Incorrect user or password"));
                 }
              }
              file.close();
           }
}

void loginWindow::on_clearButton_clicked()
{
    ui->userTxt->setText("");
    ui->passwordTxt->setText("");
}
