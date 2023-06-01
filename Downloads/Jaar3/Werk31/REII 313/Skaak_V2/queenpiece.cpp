#include "queenpiece.h"

QueenPiece::QueenPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
   // setText(pieceColour == Black ? "Swart\nKoningin" : "Wit\nKoningin");
    setPixmap(pieceColour == Black ? QPixmap("swartKoningin.png").scaled(40, 40) :
                                              QPixmap("witKoningin.png").scaled(40, 40));
}

QList<Position> QueenPiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
