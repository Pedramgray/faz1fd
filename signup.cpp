#include "signup.h"
#include "ui_signup.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QRegExp>
#include "imnotarobot.h"
#include "login.h"
#include "popup.h"
#include <QTime>
signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
     connect(ui->lineEdit, &QLineEdit::textChanged, this, &signup::onLineEditTextChanged);
     connect(ui->lineEdit_2, &QLineEdit::editingFinished, this, &signup::on_lineEdit_2_editingFinished);
     connect(ui->lineEdit_5, &QLineEdit::editingFinished, this, &signup::validateCaptcha);
     ui->pushButton->hide();
     ui->lineEdit_4->hide();
     ui->lineEdit_5->setPlaceholderText("enter the  captcha");
     ui->pushButton->setEnabled(false);
     ui->lineEdit_5->hide();
     ui->label_5->hide();

}

signup::~signup()
{
    delete ui;
}

void signup::onLineEditTextChanged(const QString &text)
{
    if (text.contains(' '))
    {
        QMessageBox::warning(this, "Warning", "Spaces are not allowed in this field.");

    }
}






void signup::on_pushButton_clicked()
{

    popup *w5=new popup;
    w5->show();

}


void signup::on_checkBox_stateChanged(int arg1)
{
    ui->lineEdit_4->show();
    ui->pushButton->show();
    ui->lineEdit_5->show();
    ui->label_5->show();
    if (arg1) {
           QString captcha;
           qsrand(QTime::currentTime().msec());
           for (int i = 0; i < 6; ++i) {
               if (qrand() % 2 == 0) {
                   captcha.append(QChar('A' + qrand() % 26));
               } else {
                   captcha.append(QString::number(qrand() % 10));
               }
           }
           ui->lineEdit_4->setText(captcha);
       } else {
           ui->lineEdit_4->clear();
       }
    ui->checkBox->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);


}


void signup::on_lineEdit_2_editingFinished() {
    QString text = ui->lineEdit_2->text();
    if (!text.contains("@gmail.com")) {
        QMessageBox::critical(this, "Error", "Please enter a valid Gmail address");
        ui->lineEdit_2->setFocus();
    }
}
void signup::validateCaptcha() {
    QString captcha = ui->lineEdit_4->text();
    QString userInput =ui-> lineEdit_5->text();

    if (userInput == captcha) {
       ui-> pushButton->setEnabled(true);
    } else {
        QMessageBox::warning(this, "Incorrect Captcha", "The captcha you entered is incorrect.");
        ui->lineEdit_5->clear();
    }
}

void signup::on_pushButtonlogin_clicked()
{

    login *w4=new login;
    w4->show();
}

