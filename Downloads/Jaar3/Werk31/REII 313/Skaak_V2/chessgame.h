#ifndef CHESSGAME_H
#define CHESSGAME_H

#include <QWidget>
#include "chesspiece.h"

class ChessGame : public QWidget
{
    Q_OBJECT

public:
    ChessGame(QWidget *parent = nullptr);
    Board board;

private:
    void mousePressEvent(QMouseEvent*);

    QLabel *boardLabel;
    QLabel *debugLabel;

private slots:
    void pieceClicked();
};
#endif // CHESSGAME_H
