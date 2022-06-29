#include <QApplication>
#include "gamewndmain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    WndMain mainWindow ;
    mainWindow.Init();
    mainWindow.show();
    return a.exec();
}
