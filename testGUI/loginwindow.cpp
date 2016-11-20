#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QFile>;
#include <QTextStream>;

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
    QFile file("//Users//Kayla//Documents//cs441test//testGUI//test.txt");
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
