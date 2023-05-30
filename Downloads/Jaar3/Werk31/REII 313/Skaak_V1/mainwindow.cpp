#include "mainwindow.h"
#include <QDebug>

ChessBoard::ChessBoard(QWidget *parent)
    : QMainWindow(parent)
{
    bord.resize(12);
    for (int i = 0; i < 12; ++i)
        bord[i].resize(12);

    initBoard();
    printBoard(bord);

    swartPion = new QLabel(this);
    swartPion->setPixmap(QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/swartPion.png").scaled(80, 80)); ///
    swartPion->setFixedSize(swartPion->pixmap()->height(), swartPion->pixmap()->width());
    swartPion->move(0, 50);
    setFixedSize(500, 500);
}

ChessBoard::~ChessBoard()
{

}

void ChessBoard::initBoard()
{
    // frame top bottom
    for (int i = 0; i < 12; ++i)
    {
        bord[0][i] = outside;
        bord[1][i] = outside;
        bord[10][i] = outside;
        bord[11][i] = outside;
    }
    // frame sides
    for (int j = 2; j < 10; ++j)
    {
        bord[j][0] = outside;
        bord[j][1] = outside;
        bord[j][10] = outside;
        bord[j][11] = outside;
    }
    // empty space in middle
    for (int i = 2; i < 10; ++i)
    {
        bord[3][i] = swartpion;
        bord[4][i] = empty;
        bord[5][i] = empty;
        bord[6][i] = empty;
        bord[7][i] = empty;
        bord[8][i] = witpion;
    }
    // last two rows pieces
    bord[2][2] = swartkasteel;
    bord[2][3] = swartperd;
    bord[2][4] = swartloper;
    bord[2][5] = swartkoningin;
    bord[2][6] = swartkoning;
    bord[2][7] = swartloper;
    bord[2][8] = swartperd;
    bord[2][9] = swartkasteel;

    bord[9][2] = witkasteel;
    bord[9][3] = witperd;
    bord[9][4] = witloper;
    bord[9][5] = witkoningin;
    bord[9][6] = witkoning;
    bord[9][7] = witloper;
    bord[9][8] = witperd;
    bord[9][9] = witkasteel;




    for (int x = 0; x < 12; ++x)
    {
        for (int y = 0; y < 12; ++y)
        {
            qDebug() << bord[x][y] << " ";
        }
        qDebug() << "\n";
    }

}

void ChessBoard::printBoard(QVector<QVector<ChessPiece> > bord)
{
    const int boardSize = bord.size();

//        QWidget *window = new QWidget();
        QGridLayout *gridLayout = new QGridLayout(window);

        for (int row = 0; row < boardSize; ++row) {
            for (int col = 0; col < boardSize; ++col) {
                QLabel *label = new QLabel();
                label->setAlignment(Qt::AlignCenter);

                ChessPiece piece = bord[row][col];
                QString pieceText;

                switch (piece) {
                    case empty:
                        pieceText = "E";
                        break;
                    case swartkasteel:
                        pieceText = "K";
                        break;
                    case swartperd:
                        pieceText = "P";
                        break;
                    case swartloper:
                        pieceText = "L";
                        break;
                    case swartkoningin:
                        pieceText = "Q";
                        break;
                    case swartkoning:
                        pieceText = "K";
                        break;
                    case swartpion:
                        pieceText = "P";
                        break;



                    case witkasteel:
                        pieceText = "K";
                        break;
                    case witperd:
                        pieceText = "Q";
                        break;
                    case witloper:
                        pieceText = "R";
                        break;
                    case witkoningin:
                        pieceText = "B";
                        break;
                    case witkoning:
                        pieceText = "N";
                        break;
                    case witpion:
                        pieceText = "P";
                        break;

                case outside:

                    break;


                }

                label->setText(pieceText);
                gridLayout->addWidget(label, row, col);
            }
        }

//        window->setLayout(gridLayout);
//        window->show();
    }


