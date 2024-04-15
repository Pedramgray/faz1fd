#include "splashpage.h"
#include "ui_splashpage.h"
#include "signup.h"

splashpage::splashpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::splashpage)
{
    ui->setupUi(this);
}

splashpage::~splashpage()
{
    delete ui;
}


void splashpage::on_pushButton_clicked()
{
    signup *w2=new signup;
    w2->show();

}

