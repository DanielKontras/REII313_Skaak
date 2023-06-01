#include "bishoppiece.h"

BishopPiece::BishopPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
    //setText(pieceColour == Black ? "Swart\nLoper" : "Wit\nLoper");
    setPixmap(pieceColour == Black ? QPixmap("swartLoper.png").scaled(40, 40) :
                                          QPixmap("witLoper.png").scaled(40, 40));
}

QList<Position> BishopPiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
