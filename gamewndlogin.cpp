#include "gamewndlogin.h"
#include "ui_gamewndlogin.h"

WndLogin::WndLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WndLogin)
{

    ui->setupUi(this);

}

WndLogin::~WndLogin()
{
    delete ui;
}


void WndLogin::on_btnStrat_clicked()
{
    w.Init();
    w.show();
    this->hide();
}


void WndLogin::on_btnexit_clicked()
{
    close();
}

