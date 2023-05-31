#include "castlepiece.h"

CastlePiece::CastlePiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
    //setText(pieceColour == Black ? "Swart\nKasteel" : "Wit\nKasteel");
    setPixmap(pieceColour == Black ? QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/swartKasteel.png").scaled(40, 40) :
                                          QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/witKasteel.png").scaled(40, 40));
}

QList<Position> CastlePiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
