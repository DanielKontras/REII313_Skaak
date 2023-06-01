#include "horsepiece.h"

HorsePiece::HorsePiece(QWidget *parent, const Board &b, PieceColour clr)
    : ChessPiece(parent, b, clr)
{
   // setText(pieceColour == Black ? "Swart\nPerd" : "Wit\nPerd");
    setPixmap(pieceColour == Black ? QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/swartPerd.png").scaled(40, 40) :
                                          QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/witPerd.png").scaled(40, 40));

}

QList<Position> HorsePiece::possibleMoves()
{
    QList<Position> moves;
    return moves;
}
