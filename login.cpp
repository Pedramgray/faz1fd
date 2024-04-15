#include "login.h"
#include "ui_login.h"
#include <QTime>
#include <QMessageBox>
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->label_3->hide();
    ui->lineEdit_3->hide();
    ui->lineEdit_4->hide();
    ui->pushButton->hide();
    ui->pushButton->setEnabled(false);
    connect(ui->lineEdit_4, &QLineEdit::editingFinished, this, &login::validateCap);


}

login::~login()
{
    delete ui;
}

void login::on_checkBox_stateChanged(int arg1)
{
    ui->label_3->show();
    ui->lineEdit_3->show();
    ui->lineEdit_4->show();
    ui->pushButton->show();
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
           ui->lineEdit_3->setText(captcha);
       } else {
           ui->lineEdit_3->clear();
       }
    ui->checkBox->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
}

void login::validateCap() {
    QString captcha = ui->lineEdit_3->text();
    QString userInput =ui-> lineEdit_4->text();

    if (userInput == captcha) {
       ui-> pushButton->setEnabled(true);
    } else {
        QMessageBox::warning(this, "Incorrect Captcha", "The captcha you entered is incorrect.");
        ui->lineEdit_4->clear();
    }
}

