#ifndef MAINWINDOWSTRAT_H
#define MAINWINDOWSTRAT_H

#include <QWidget>

namespace Ui {
class MainWindowSTRAT;
}

class MainWindowSTRAT : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindowSTRAT(QWidget *parent = nullptr);
    ~MainWindowSTRAT();

private:
    Ui::MainWindowSTRAT *ui;
};

#endif // MAINWINDOWSTRAT_H
