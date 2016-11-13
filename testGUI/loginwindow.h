#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>


namespace Ui {
class loginWindow;
}

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = 0);
    ~loginWindow();

private slots:
    void on_loginButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::loginWindow *ui;
    loginWindow *nWin;
};

#endif // LOGINWINDOW_H
