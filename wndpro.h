#ifndef WNDPRO_H
#define WNDPRO_H

#include <QDialog>

namespace Ui {
class WndPro;
}

class WndPro : public QDialog
{
    Q_OBJECT

public:
    explicit WndPro(QWidget *parent = nullptr);
    ~WndPro();
    QString GetStr();
private slots:
    void on_yes_clicked();

private:
    Ui::WndPro *ui;
    QString str_;
};

#endif // WNDPRO_H
