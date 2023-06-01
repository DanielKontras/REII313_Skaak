#include "kingpiece.h"

KingPiece::KingPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
    //setText(pieceColour == Black ? "Swart\nKoning" : "Wit\nKoning");
    setPixmap(pieceColour == Black ? QPixmap("swartKoning.png").scaled(40, 40) :
                                              QPixmap("witKoning.png").scaled(40, 40));

}

QList<Position> KingPiece::possibleMoves()
{
    // MOET NOG KYK VIR AS DIT IN SKAAK IS!
    Position p;
    QList<Position> moves;

    // Op
    if (board[x][y+1] == nullptr)
    {
        p.x = x;
        p.y = y+1;
        moves.append(p);
    }
    // Af
    if (board[x][y-1] == nullptr)
    {
        p.x = x;
        p.y = y-1;
        moves.append(p);
    }
    // Regs
    if (board[x+1][y] == nullptr)
    {
        p.x = x+1;
        p.y = y;
        moves.append(p);
    }
    // Links
    if (board[x-1][y] == nullptr)
    {
        p.x = x-1;
        p.y = y;
        moves.append(p);
    }
    // Regs af
    if (board[x+1][y+1] == nullptr)
    {
        p.x = x+1;
        p.y = y+1;
        moves.append(p);
    }
    // Regs op
    if (board[x+1][y-1] == nullptr)
    {
        p.x = x+1;
        p.y = y-1;
        moves.append(p);
    }
    // Links af
    if (board[x-1][y+1] == nullptr)
    {
        p.x = x-1;
        p.y = y+1;
        moves.append(p);
    }
    // Links op
    if (board[x-1][y-1] == nullptr)
    {
        p.x = x-1;
        p.y = y-1;
        moves.append(p);
    }

    return moves;
}
