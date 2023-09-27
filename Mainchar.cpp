#include "Mainchar.h"

Mainchar::Mainchar(QMainWindow *window, int coordX, int coordY)
{
    label = new QLabel(window);
    pixmap = QPixmap("/home/julio/Bilder/1.png");
    label->setPixmap(pixmap);
    label->show();
    health = 100;
    amountOfAmmo = 30;
    coordinateX = coordX;
    coordinateY = coordY;
    label->move(coordX, coordY);
    alive = true;
}
void Mainchar::moveRight()
{
    label->move(coordinateX + 20, coordinateY);
    coordinateX += 20;
}
void Mainchar::moveLeft()
{
    label->move(coordinateX - 20, coordinateY);
    coordinateX -= 20;
}
void Mainchar::moveDown()
{
    label->move(coordinateX, coordinateY - 2);
    coordinateY -= 2;
}
void Mainchar::activateGravity()
{
    while (alive)
    {
    }
}
