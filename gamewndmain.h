#ifndef GAMEWNDMAIN_H
#define GAMEWNDMAIN_H

#include <QWidget>
#include <QPainter>
#include <QRect>
#include <QPixmap>
#include <QMouseEvent>
#include <QPainter>
#include "gamemanager.h"


QT_BEGIN_NAMESPACE
namespace Ui { class WndMain; }
QT_END_NAMESPACE

class WndMain : public QWidget,public GameManager
{
    Q_OBJECT

public:
    WndMain(QWidget *parent = nullptr);
    ~WndMain();
    void Init();
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent *);


private:
    Ui::WndMain *ui;

 //   Chess *chesses[8][8];
};
#endif // GAMEWNDMAIN_H
