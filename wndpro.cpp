#include "wndpro.h"
#include "ui_wndpro.h"

WndPro::WndPro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WndPro)
{
    ui->character->addItem("Queen");
    ui->character->addItem("Rook");
    ui->character->addItem("Knight");
    ui->character->addItem("Bishop");
    ui->setupUi(this);
}

WndPro::~WndPro()
{
    delete ui;
}

QString WndPro::GetStr()
{
    return str_;
}

void WndPro::on_yes_clicked()
{
    str_=ui->character->currentText();
    close();
}

