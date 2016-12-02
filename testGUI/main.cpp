#include "mainwindow.h"
#include <QApplication>
#include "form_company.h"
#include <fstream>
#include "loginwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();
    form_company fc;
    Qt::WindowFlags flags = fc.windowFlags();
    fc.setWindowFlags(flags | Qt::WindowStaysOnTopHint);
    fc.setWindowModality(Qt::ApplicationModal);
    std::ifstream myfile;
    std::string check = "";
    myfile.open("company.txt");
    //possible listener for this if statement. Currently does not work to serve as file detection -Dennis
    getline(myfile, check);
    myfile.close();
    if(check == ""){
        remove("company.txt");
        fc.show();
    }
    else{
        fc.close();
    }

//    MainWindow w;
//    w.show();
//    std::ifstream myfile;
//    myfile.open("company.txt");
//    //possible listener for this if statement. Currently does not work to serve as file detection -Dennis
//    if(myfile.is_open()){
//        myfile.close();
//    }
//    else{
//        form_company fc;
//        Qt::WindowFlags flags = fc.windowFlags();
//        fc.setWindowFlags(flags | Qt::WindowStaysOnTopHint);
//        fc.setWindowModality(Qt::ApplicationModal);
//        fc.show();
//    }

    return a.exec();
}
