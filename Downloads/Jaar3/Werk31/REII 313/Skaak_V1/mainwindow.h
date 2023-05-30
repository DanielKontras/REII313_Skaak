#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QVector>

enum ChessPiece
{
    outside = 99,
    empty = 0,
    witpion = 1,
    swartpion = -1,
    witperd = 2,
    swartperd = -2,
    witloper = 3,
    swartloper = -3,
    witkasteel = 4,
    swartkasteel = -4,
    witkoningin = 5,
    swartkoningin = -5,
    witkoning = 6,
    swartkoning = -6
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QLabel *thelabel;
    QVector<QVector<ChessPiece> > bord;

    // display bord
    // for example:
    // QLabel* displayboard[8][8];

    void initBoard();

};

#endif // MAINWINDOW_H
