#ifndef BUTTON1_WINDOW_H
#define BUTTON1_WINDOW_H

#include <QDialog>

namespace Ui {
class button1_window;
}

class button1_window : public QDialog
{
    Q_OBJECT

public:
    explicit button1_window(QWidget *parent = 0);
    ~button1_window();

private:
    Ui::button1_window *ui;
};

#endif // BUTTON1_WINDOW_H
