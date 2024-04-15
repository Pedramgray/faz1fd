#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT
private slots:
    void onLineEditTextChanged(const QString &text);

private slots:
    void validateEmail();
private slots:
    void validateCaptcha();



public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_lineEdit_2_editingFinished();

    void on_pushButton_2_clicked();

    void on_pushButtonnext_clicked();

    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);
private slots:
    void onSignupLineEditEditingFinished();

    void on_pushButtonlogin_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
