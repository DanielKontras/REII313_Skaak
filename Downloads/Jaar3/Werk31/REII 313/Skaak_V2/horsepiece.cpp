#include "horsepiece.h"

HorsePiece::HorsePiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
   // setText(pieceColour == Black ? "Swart\nPerd" : "Wit\nPerd");
    setPixmap(pieceColour == Black ? QPixmap("swartPerd.png").scaled(40, 40) :
                                          QPixmap("witPerd.png").scaled(40, 40));

}

QList<Position> HorsePiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
