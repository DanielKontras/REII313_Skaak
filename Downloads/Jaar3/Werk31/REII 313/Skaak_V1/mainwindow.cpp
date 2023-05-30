#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    bord.resize(12);
    for (int i = 0; i < 12; ++i)
        bord[i].resize(12);

    initBoard();

    swartPion = new QLabel(this);
    swartPion->setPixmap(QPixmap("C:/Users/dnlkr/Downloads/Jaar3/Werk31/REII 313/PRAC2/swartPion.png").scaled(80, 80));
    swartPion->setFixedSize(swartPion->pixmap()->height(), swartPion->pixmap()->width());
    swartPion->move(0, 50);
    setFixedSize(500, 500);
}

MainWindow::~MainWindow()
{

}

void MainWindow::initBoard()
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
    // etc

    for (int x = 0; x < 12; ++x)
    {
        for (int y = 0; y < 12; ++y)
        {
            qDebug() << bord[x][y] << " ";
        }
        qDebug() << "\n";
    }

}
