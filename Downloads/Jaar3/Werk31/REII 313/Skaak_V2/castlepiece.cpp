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
    Position p;
    QList<Position> moves;
 //--------------------------------------------------checks up and down:
        if (board[x][y+1] == nullptr)
        {
            p.x = x;
            p.y = y+1;
            moves.append(p);

            if(board[x][y+2] == nullptr)
            {
                p.x = x;
                p.y = y+2;
                moves.append(p);

                if(board[x][y+3] == nullptr)
                {
                    p.x = x;
                    p.y = y+3;
                    moves.append(p);

                    if(board[x][y+4] == nullptr)
                    {
                        p.x = x;
                        p.y = y+4;
                        moves.append(p);

                        if(board[x][y+5] == nullptr)
                        {
                            p.x = x;
                            p.y = y+5;
                            moves.append(p);

                            if(board[x][y+6] == nullptr)
                            {
                                p.x = x;
                                p.y = y+6;
                                moves.append(p);

                                if(board[x][y+7] == nullptr)
                                {
                                    p.x = x;
                                    p.y = y+7;
                                    moves.append(p);
                                }
                            }
                        }
                    }
                }
            }
        }


        if (board[x][y-1] == nullptr)
        {
            p.x = x;
            p.y = y-1;
            moves.append(p);

            if(board[x][y-2] == nullptr)
            {
                p.x = x;
                p.y = y-2;
                moves.append(p);

                if(board[x][y-3] == nullptr)
                {
                    p.x = x;
                    p.y = y-3;
                    moves.append(p);

                    if(board[x][y-4] == nullptr)
                    {
                        p.x = x;
                        p.y = y-4;
                        moves.append(p);

                        if(board[x][y-5] == nullptr)
                        {
                            p.x = x;
                            p.y = y-5;
                            moves.append(p);

                            if(board[x][y-6] == nullptr)
                            {
                                p.x = x;
                                p.y = y-6;
                                moves.append(p);

                                if(board[x][y-7] == nullptr)
                                {
                                    p.x = x;
                                    p.y = y-7;
                                    moves.append(p);
                                }
                            }
                        }
                    }
                }
            }
        }

        //---------------------------------------------------------checks left and right:
        if (board[x+1][y] == nullptr)
        {
            p.x = x+1;
            p.y = y;
            moves.append(p);

            if(board[x+2][y] == nullptr)
            {
                p.x = x+2;
                p.y = y;
                moves.append(p);

                if(board[x+3][y] == nullptr)
                {
                    p.x = x+3;
                    p.y = y;
                    moves.append(p);

                    if(board[x+4][y] == nullptr)
                    {
                        p.x = x+4;
                        p.y = y;
                        moves.append(p);

                        if(board[x+5][y] == nullptr)
                        {
                            p.x = x+5;
                            p.y = y;
                            moves.append(p);

                            if(board[x+6][y] == nullptr)
                            {
                                p.x = x+6;
                                p.y = y;
                                moves.append(p);

                                if(board[x+7][y] == nullptr)
                                {
                                    p.x = x+7;
                                    p.y = y;
                                    moves.append(p);
                                }
                            }
                        }
                    }
                }
            }
        }


        if (board[x-1][y] == nullptr)
        {
            p.x = x-1;
            p.y = y;
            moves.append(p);

            if(board[x-2][y] == nullptr)
            {
                p.x = x-2;
                p.y = y;
                moves.append(p);

                if(board[x-3][y] == nullptr)
                {
                    p.x = x-3;
                    p.y = y;
                    moves.append(p);

                    if(board[x-4][y] == nullptr)
                    {
                        p.x = x-4;
                        p.y = y;
                        moves.append(p);

                        if(board[x-5][y] == nullptr)
                        {
                            p.x = x-5;
                            p.y = y;
                            moves.append(p);

                            if(board[x-6][y] == nullptr)
                            {
                                p.x = x-6;
                                p.y = y;
                                moves.append(p);

                                if(board[x-7][y] == nullptr)
                                {
                                    p.x = x-7;
                                    p.y = y;
                                    moves.append(p);
                                }
                            }
                        }
                    }
                }
            }
        }








//        if (board[x-1][y+1] && (board[x-1][y+1]->colour() == White))
//        {
//            p.x = x-1;
//            p.y = y+1;
//            moves.append(p);
//        }
//        if (board[x+1][y+1] && (board[x+1][y+1]->colour() == White))
//        {
//            p.x = x+1;
//            p.y = y+1;
//            moves.append(p);
//        }
//        if (timesMoved == 0)
//        {
//            if (board[x][y+2] == nullptr)
//            {
//                p.x = x;
//                p.y = y+2;
//                moves.append(p);
//            }
//            if (board[x-1][y+2] && (board[x-1][y+2]->colour() == White))
//            {
//                p.x = x-1;
//                p.y = y+2;
//                moves.append(p);
//            }
//            if (board[x+1][y+2] && (board[x+1][y+2]->colour() == White))
//            {
//                p.x = x+1;
//                p.y = y+2;
//                moves.append(p);
//            }
//        }


    return moves;
}
