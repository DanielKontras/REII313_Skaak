#ifndef BARRIERPIECE_H
#define BARRIERPIECE_H

#include "chesspiece.h"

class BarrierPiece : public ChessPiece
{
public:
    BarrierPiece(QWidget *parent = nullptr, PieceColour clr = BarrierColour);
};

#endif // BARRIERPIECE_H
