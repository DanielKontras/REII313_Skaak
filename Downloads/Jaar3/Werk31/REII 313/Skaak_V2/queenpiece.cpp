#include "queenpiece.h"

QueenPiece::QueenPiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
   // setText(pieceColour == Black ? "Swart\nKoningin" : "Wit\nKoningin");
    setPixmap(pieceColour == Black ? QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/swartKoningin.png").scaled(40, 40) :
                                              QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/witKoningin.png").scaled(40, 40));
}

QList<Position> QueenPiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
