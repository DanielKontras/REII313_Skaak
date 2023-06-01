#include "bishoppiece.h"

BishopPiece::BishopPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
    //setText(pieceColour == Black ? "Swart\nLoper" : "Wit\nLoper");
    setPixmap(pieceColour == Black ? QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/swartLoper.png").scaled(40, 40) :
                                          QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/witLoper.png").scaled(40, 40));
}

QList<Position> BishopPiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
