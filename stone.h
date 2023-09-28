#pragma once
#include <QLabel>
#include <QMainWindow>
#include <QPixmap>

struct Coords
{
    int coordX, coordY;
};

class Stone
{
private:
    int coordX, coordY;
    QLabel *label;
    QPixmap pixmap;

public:
    Stone(QMainWindow *window, int coodX, int coordY);
    Coords getCoordinates();
};