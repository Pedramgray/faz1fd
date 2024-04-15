#include "popup.h"
#include "ui_popup.h"
#include <QTime>
#include "imnotarobot.h"
#include <QFile>
#include <QDataStream>
#include <QObject>
#include <QMessageBox>

popup::popup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::popup)
{
    ui->setupUi(this);
       qsrand(QTime::currentTime().msec());
       int randomNumber = qrand() % 9000 + 1000;

       ui->lineEdit->setText(QString::number(randomNumber));
       ui->lineEdit->setEnabled(false);


}

popup::~popup()
{
    delete ui;
}



void popup::on_lineEdit_2_editingFinished()
{

    QString randnum = ui->lineEdit->text();
    QString userInput =ui-> lineEdit->text();

    if (userInput == randnum) {
        imnotarobot *t=new imnotarobot;
                t->show();
    } else {
        QMessageBox::warning(this, "Incorrect ", "The numbryou entered is incorrect.");
        ui->lineEdit_2->clear();
    }
}

