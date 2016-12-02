#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QFile>
#include <QTextStream>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QFile file("test.txt");//change path to YOUR test.txt
               QString username = ui->userTxt->text();
               QString password = ui->passwordTxt->text();

        if (file.open(QIODevice::ReadOnly))
               {
                  QTextStream in(&file);
                  while (!in.atEnd())
                  {
                     QString line = in.readLine();      // read line by line from text file

                     quint32 offset = 3;                // creating the offset of size three for user name because username is the size of 3 char
                     QString userx= line.left(offset);      // take the first 3 char from text file and store in userx
                     QString passx = line.mid(4);           // take 4 char from text for password


                        // if loop conditions:
                        //                          userx from text  is equal to the username entered
                        //                          passx from text is equal to the password entered
                     //                             userx lenght is equal to the username entered length
                     //                             passx lenght is equal to the password entered length
                     if((userx.contains(username, Qt::CaseSensitive)) && (passx.contains(password, Qt::CaseSensitive)) && (userx.length() == username.length()) && (passx.length() == password.length())){
                                 this->close();
                                 nWin = new MainWindow();
                                 nWin->setAttribute(Qt::WA_DeleteOnClose);
                                 nWin->show();
                                     std::ifstream myfile;
                                     myfile.open("company.txt");
                                     //possible listener for this if statement. Currently does not work to serve as file detection -Dennis
                                     if(myfile.is_open()){
                                         myfile.close();
                                     }
                                     else{
                                         form_company fc;
                                         Qt::WindowFlags flags = fc.windowFlags();
                                         fc.setWindowFlags(flags | Qt::WindowStaysOnTopHint);
                                         fc.setWindowModality(Qt::ApplicationModal);
                                         fc.show();
                                     }
                     }
                     else{
                         ui->loginLabel->setText(("Incorrect user or password"));
                     }
                  }
                  file.close();
               }
}

void LoginWindow::on_clearButton_clicked()
{
    ui->userTxt->setText("");
    ui->passwordTxt->setText("");
}
