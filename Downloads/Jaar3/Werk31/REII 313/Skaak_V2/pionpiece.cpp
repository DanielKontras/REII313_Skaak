#include "pionpiece.h"

PionPiece::PionPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
    // todo for all derived classes: make it show a nice 100x100 pixmap of the piece in the correct
    // colour instead of this text.
   // setText(pieceColour == Black ? "Swart\nPion" : "Wit\nPion");
    setPixmap(pieceColour == Black ? QPixmap("swartPion.png").scaled(40, 40) :
                                              QPixmap("witPion.png").scaled(40, 40));
}

QList<Position> PionPiece::possibleMoves()
{
    // Andres is n fokken nerd
    // Look down for black and up for white
    Position p;
    QList<Position> moves;
    if (pieceColour == Black)
    {
        if (board[x][y+1] == nullptr)
        {
            p.x = x;
            p.y = y+1;
            moves.append(p);
        }
        if (board[x-1][y+1] && (board[x-1][y+1]->colour() == White))
        {
            p.x = x-1;
            p.y = y+1;
            moves.append(p);
        }
        if (board[x+1][y+1] && (board[x+1][y+1]->colour() == White))
        {
            p.x = x+1;
            p.y = y+1;
            moves.append(p);
        }
        if (timesMoved == 0)
        {
            if (board[x][y+2] == nullptr)
            {
                p.x = x;
                p.y = y+2;
                moves.append(p);
            }
            if (board[x-1][y+2] && (board[x-1][y+2]->colour() == White))
            {
                p.x = x-1;
                p.y = y+2;
                moves.append(p);
            }
            if (board[x+1][y+2] && (board[x+1][y+2]->colour() == White))
            {
                p.x = x+1;
                p.y = y+2;
                moves.append(p);
            }
        }
    }
    else if (pieceColour == White)
    {
        if (board[x][y-1] == nullptr)
        {
            p.x = x;
            p.y = y-1;
            moves.append(p);
        }
        if (board[x-1][y-1] && (board[x-1][y-1]->colour() == Black))
        {
            p.x = x-1;
            p.y = y-1;
            moves.append(p);
        }
        if (board[x+1][y-1] && (board[x+1][y-1]->colour() == Black))
        {
            p.x = x+1;
            p.y = y-1;
            moves.append(p);
        }
        if (timesMoved == 0)
        {
            if (board[x][y-2] == nullptr)
            {
                p.x = x;
                p.y = y-2;
                moves.append(p);
            }
            if (board[x-1][y-2] && (board[x-1][y-2]->colour() == Black))
            {
                p.x = x-1;
                p.y = y-2;
                moves.append(p);
            }
            if (board[x+1][y-2] && (board[x+1][y-2]->colour() == Black))
            {
                p.x = x+1;
                p.y = y-2;
                moves.append(p);
            }
        }
    }
    return moves;
}
