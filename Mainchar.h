#pragma once

#include <QLabel>
#include <QPixmap>
#include <QMainWindow>
class Mainchar
{
private:
    int health, amountOfAmmo, coordinateX, coordinateY;
    QLabel *label;
    QPixmap pixmap;
    bool alive;

public:
    Mainchar(QMainWindow *window, int coordX, int coordY);
    void show();
    void hit();
    void moveRight();
    void moveLeft();
    void activateGravity();
    void jump();
    void moveDown();
};