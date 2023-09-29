#pragma once

#include <QLabel>
#include <QPixmap>
#include <QMainWindow>
#include <unistd.h>
#include "stone.h"

class Mainchar
{
private:
    int health, amountOfAmmo, coordinateX, coordinateY;
    QLabel *label;
    QPixmap pixmap;
    bool alive;
    int gravity;

public:
    Mainchar(QMainWindow *window, int coordX, int coordY);
    ~Mainchar();
    void show();
    void hit();
    void moveRight();
    void moveLeft();
    void activateGravity();
    void jump();
    void moveDown();
    void deactivateGravity();
    bool isAlive();
    Coords getCoords();
    QLabel *getLabel();
};