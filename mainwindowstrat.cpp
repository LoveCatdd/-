#include "mainwindowstrat.h"
#include "ui_mainwindowstrat.h"

MainWindowSTRAT::MainWindowSTRAT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindowSTRAT)
{
    ui->setupUi(this);
}

MainWindowSTRAT::~MainWindowSTRAT()
{
    delete ui;
}
