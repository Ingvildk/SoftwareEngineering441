#ifndef TESTWINDOW2_H
#define TESTWINDOW2_H

#include <QDialog>

namespace Ui {
class testwindow2;
}

class testwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit testwindow2(QWidget *parent = 0);
    ~testwindow2();

private:
    Ui::testwindow2 *ui;
    void fillTable();
};

#endif // TESTWINDOW2_H
