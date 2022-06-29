#include "gamewndmain.h"
#include "ui_gamewndmain.h"



extern int boardBackground[8][8];


WndMain::WndMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WndMain)
{
    ui->setupUi(this);
}

WndMain::~WndMain()
{
    delete ui;
}

void WndMain::Init()
{
    InitBoard();
}

void WndMain::paintEvent(QPaintEvent *)
{

    if(piece->GetMove_()){
    for(int i=0;i<8;++i)
    {
        for(int j=0;j<8;++j)
        {//j列 i 行
           boardBackground[i][j]=0;
        }
    }
 }

        QPainter *p=new QPainter(this);
        p->drawPixmap(0,0,384,384,QPixmap(":/res/res/checker.png"));
         for(int i=0;i<8;++i)
         {
             for(int j=0;j<8;++j)
             {//j列 i 行

                 p->drawPixmap(48*j,48*i,48,48,QPixmap(":/res/res/"+
                        QString::number(boardBackground[j][i])+".png"));
                 p->drawPixmap(48*j,48*i,48,48,QPixmap(":/res/res/"+
                        QString::number(board[j][i])+".png"));
             }
         }

    delete p;
}

void WndMain::mousePressEvent(QMouseEvent *e)
{
   int x=e->pos().x()/48;
   int y=e->pos().y()/48;

   if((x>7||y>7)||(!(pw->waction||pw->baction)&&!board[x][y]))
   {
       qDebug()<<"here is NULL";
       return;
   }

   if(piece&&x==piece->GetX()&&y==piece->GetY())
   {
       if(pw->thisShow==1)
       {
           pw->waction=false;
           delete piece;
           for(int i=0;i<8;++i)
           {
               for(int j=0;j<8;++j)
               {//j列 i 行
                  boardBackground[i][j]=0;
               }
           }
           update();
           return;
       }
       else {
           pw->baction=false;
           delete piece;
           for(int i=0;i<8;++i)
           {
               for(int j=0;j<8;++j)
               {//j列 i 行
                  boardBackground[i][j]=0;
               }
           }

           update();
           return;
       }
   }
    qDebug()<<pw->thisShow;
   if(pw->thisShow==1)
   {
       if(!pw->waction){
          if(board[x][y]/100==1){/*
           qDebug()<<"here is w show"<<board[x][y];*/
            pw->waction=true;
            //Init piece
             piece=GetChaPiece(board[x][y],x,y);
            //
             if(piece->isHaveMoveRoad(piece->GetValue()/100,&board[0],
                                      arrStep(PieceName(piece->GetValue()/100,piece->GetValue())),
                                      nextarrStep(PieceName(piece->GetValue()/100,piece->GetValue())))){
            repaint();
            return;
         }
         delete piece;
         pw->waction=false;
      }
    }
   }else if(pw->thisShow==2){
       if(!pw->baction){
          if(board[x][y]/100==2){
//            qDebug()<<"here is b show";
            pw->baction=true;
            //Init piece
           piece=GetChaPiece(board[x][y],x,y);
//            qDebug()<<"b piece："<<piece;
           if(piece->isHaveMoveRoad(piece->GetValue()/100,&board[0],
                                    arrStep(PieceName(piece->GetValue()/100,piece->GetValue())),
                                    nextarrStep(PieceName(piece->GetValue()/100,piece->GetValue())))){
          repaint();
          return;
       }
       delete piece;
       pw->baction=false;
          }
       }
   }

   PlayerMove(piece->GetValue(),x,y);
   update();
   //判断玩家 黑 白

   //玩家移动 canMove
// piece->painterMove();


}


