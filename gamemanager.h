#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H


#include <QPainter>
#include "chess.h"
#include "gameplayer.h"
#include <QMessageBox>


class GameManager
{

public:
    GameManager();

protected:
    void InitBoard();
    void PlayerMove(int,int,int);
    void pp(int (*board)[8]);
    void canWin(int);
    QString PieceName(int,int);
    int** arrStep(QString);
    int** nextarrStep(QString);
    bool SelectMove(int,int,int);
    Chess GetPiece(int x,int y);
    Chess* GetChaPiece(int,int,int);

    Chess *piece;

    GamePlayer *pw;
    int board[8][8];
};

#endif // GAMEMANAGER_H
