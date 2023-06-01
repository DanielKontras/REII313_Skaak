#ifndef CHESSPIECE_H
#define CHESSPIECE_H
#include <QLabel>
#include <QList>
#include <QMouseEvent>

class ChessPiece;
typedef ChessPiece* Board[12][12];

struct Position
{
    int x;
    int y;
};

enum PieceColour
{
    BarrierColour = -1,
    Black = 0,
    White = 1
};

enum PieceType
{
    BarrierType = -1,
    Pion = 1,
    Horse = 2,
    Bishop = 3,
    Castle = 4,
    Queen = 5,
    King = 6
};

class ChessPiece : public QLabel
{
    Q_OBJECT
public:
    ChessPiece(QWidget *parent = nullptr, const Board &b = {}, PieceColour clr = BarrierColour);
    virtual QList<Position> possibleMoves();
    PieceColour colour();
    PieceType type();
    void movePieceTo(float, float); // Ekt die verander na float toe
    int moveCount();
    int boardX();
    int boardY();

    int xwidth = 100;
    int ywidth = 100;
    int xoffset = 100;
    int yoffset =100;

signals:
    void iWasClicked();

protected:
    void mousePressEvent(QMouseEvent*);

    int timesMoved;
    int x, y;
    PieceColour pieceColour;
    PieceType pieceType;
    const Board &board;
};

#endif // CHESSPIECE_H
