#ifndef GAMEWNDLOGIN_H
#define GAMEWNDLOGIN_H

#include <QWidget>
#include "gamewndmain.h"

namespace Ui {
class WndLogin;
}

class WndLogin : public QWidget
{
    Q_OBJECT

public:
    explicit WndLogin(QWidget *parent = nullptr);
    ~WndLogin();



private slots:

    void on_btnStrat_clicked();

    void on_btnexit_clicked();

private:
    Ui::WndLogin *ui;

        WndMain w ;
};

#endif // GAMEWNDLOGIN_H
