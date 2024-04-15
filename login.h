#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_checkBox_stateChanged(int arg1);
private slots:
    void validateCap();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
