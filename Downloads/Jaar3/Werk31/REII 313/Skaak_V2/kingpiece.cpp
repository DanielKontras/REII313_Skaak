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
    QList<Position> moves;
    return moves;
}
