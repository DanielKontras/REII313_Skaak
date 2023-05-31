#include "barrierpiece.h"

BarrierPiece::BarrierPiece(QWidget *parent, PieceColour clr)
    : ChessPiece(parent)
{
    pieceType = BarrierType;
    pieceColour = clr;
    hide();
}
