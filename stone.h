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
    Stone(QMainWindow *window, int coordX, int coordY);
    Coords getCoordinates();
    QLabel *getLabel();
};