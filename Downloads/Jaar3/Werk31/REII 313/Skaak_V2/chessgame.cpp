#include "chessgame.h"
#include "barrierpiece.h"
#include "pionpiece.h"
#include "horsepiece.h"
#include "bishoppiece.h"
#include "castlepiece.h"
#include "queenpiece.h"
#include "kingpiece.h"

ChessGame::ChessGame(QWidget *parent)
    : QWidget(parent)
{
    boardLabel = new QLabel(this);
    boardLabel->setGeometry(70, 100, 800, 800);
    // done: make boardLabel show a nice 800x800 chess board image
    boardLabel->setPixmap(QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/skaakBord2.png").scaled(800, 800));

    debugLabel = new QLabel(this);
    debugLabel->setGeometry(0, 850, 800, 200);

    for (int i = 0; i < 12; ++i)                          //Let op dat in board[][] kolomme eerste is en dan rye
    {
        board[i][0] = new BarrierPiece(this);
        board[i][1] = new BarrierPiece(this);

        board[i][4] = nullptr;
        board[i][5] = nullptr;
        board[i][6] = nullptr;
        board[i][7] = nullptr;

        board[i][10] = new BarrierPiece(this);
        board[i][11] = new BarrierPiece(this);
    }

    board[2][2] = new CastlePiece(this, board, Black);
    board[2][2]->movePieceTo(2, 2);
    board[3][2] = new HorsePiece(this, board, Black);
    board[3][2]->movePieceTo(3, 2);
    board[4][2] = new BishopPiece(this, board, Black);
    board[4][2]->movePieceTo(4, 2);
    board[5][2] = new QueenPiece(this, board, Black);
    board[5][2]->movePieceTo(5, 2);
    board[6][2] = new KingPiece(this, board, Black);
    board[6][2]->movePieceTo(6, 2);
    board[7][2] = new BishopPiece(this, board, Black);
    board[7][2]->movePieceTo(7, 2);
    board[8][2] = new HorsePiece(this, board, Black);
    board[8][2]->movePieceTo(8, 2);
    board[9][2] = new CastlePiece(this, board, Black);
    board[9][2]->movePieceTo(9, 2);

    board[2][9] = new CastlePiece(this, board, White);
    board[2][9]->movePieceTo(2, 9);
    board[3][9] = new HorsePiece(this, board, White);
    board[3][9]->movePieceTo(3, 9);
    board[4][9] = new BishopPiece(this, board, White);
    board[4][9]->movePieceTo(4, 9);
    board[5][9] = new QueenPiece(this, board, White);
    board[5][9]->movePieceTo(5, 9);
    board[6][9] = new KingPiece(this, board, White);
    board[6][9]->movePieceTo(6, 9);
    board[7][9] = new BishopPiece(this, board, White);
    board[7][9]->movePieceTo(7, 9);
    board[8][9] = new HorsePiece(this, board, White);
    board[8][9]->movePieceTo(8, 9);
    board[9][9] = new CastlePiece(this, board, White);
    board[9][9]->movePieceTo(9, 9);

    for (int i = 2; i < 10; ++i)
    {
        board[0][i] = new BarrierPiece(this);
        board[1][i] = new BarrierPiece(this);

        board[i][3] = new PionPiece(this, board, Black);
        board[i][3]->movePieceTo(i, 3);

        board[i][8] = new PionPiece(this, board, White);
        board[i][8]->movePieceTo(i, 8);

        board[10][i] = new BarrierPiece(this);
        board[11][i] = new BarrierPiece(this);

        connect(board[i][2], SIGNAL(iWasClicked()), this, SLOT(pieceClicked()));
        connect(board[i][3], SIGNAL(iWasClicked()), this, SLOT(pieceClicked()));
        connect(board[i][8], SIGNAL(iWasClicked()), this, SLOT(pieceClicked()));
        connect(board[i][9], SIGNAL(iWasClicked()), this, SLOT(pieceClicked()));
    }

    board[2][2]->movePieceTo(3, 5);
    board[2][2] = nullptr;
}

void ChessGame::pieceClicked()
{
    ChessPiece *clickedPiece = (ChessPiece*)sender();

    debugLabel->setText("Clicked piece at " + QString::number(clickedPiece->boardX()) +
                        ", " + QString::number(clickedPiece->boardY()) + "\nMoves: ");
    QList<Position> moves = clickedPiece->possibleMoves();
    QListIterator<Position> mvIter(moves);
    while (mvIter.hasNext())
    {
        Position p = mvIter.next();
        debugLabel->setText(debugLabel->text() + QString::number(p.x) + ", " + QString::number(p.y) + ";  ");
    }
}

void ChessGame::mousePressEvent(QMouseEvent *e)
{
    // suck these constants out of the barrier piece at [0][0] which will always be there.
    // this is not necessarily elegant, but I do not want to duplicate these constants.
    // think of a more elegant way if this bothers you. (it should)
    int xoffset = board[0][0]->xoffset;
    int yoffset = board[0][0]->yoffset;
    int xwidth = board[0][0]->xwidth;
    int ywidth = board[0][0]->ywidth;

    if ((e->button() == Qt::LeftButton) && (e->x() >= xoffset) && (e->x() <= xoffset+8*xwidth)
         && (e->y() >= yoffset) && (e->y() <= yoffset+8*ywidth))
    {
        int clickx = (e->x()-xoffset)/xwidth+2;
        int clicky = (e->y()-yoffset)/ywidth+2;
        debugLabel->setText("Clicked on empty board square " + QString::number(clickx) +
                            ", " + QString::number(clicky));
    }
}
