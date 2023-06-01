#ifndef CHESSGAME_H
#define CHESSGAME_H

#include <QWidget>
#include "chesspiece.h"
#include <iostream>

using namespace std;

class ChessGame : public QWidget
{
    Q_OBJECT

public:
    ChessGame(QWidget *parent = nullptr);
    Board board;
    int clickx;
    int clicky;

private:
    void mousePressEvent(QMouseEvent*);

    QLabel *boardLabel;
    QLabel *debugLabel;

    ChessPiece* selectedPiece = nullptr;

private slots:
    void pieceClicked();
};
#endif // CHESSGAME_H
