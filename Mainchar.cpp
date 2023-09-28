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
    gravity = 1;
}
Mainchar::~Mainchar()
{
    delete label, pixmap, health, coordinateX, coordinateY, alive, amountOfAmmo;
}
void Mainchar::moveRight()
{
    label->move(coordinateX + 40, coordinateY);
    coordinateX += 40;
}
void Mainchar::moveLeft()
{
    label->move(coordinateX - 40, coordinateY);
    coordinateX -= 40;
}
void Mainchar::moveDown()
{
    label->move(coordinateX, coordinateY + gravity);
    coordinateY += gravity;
    std::cout << coordinateX;
    std::cout << coordinateY;
}
void Mainchar::jump()
{
    label->move(coordinateX, coordinateY - 50);
    coordinateY -= 50;
}
void Mainchar::deactivateGravity()
{
    gravity = 0;
}
void Mainchar::activateGravity()
{
    gravity = 1;
}
bool Mainchar::isAlive() { return alive; }
Coords Mainchar::getCoords()
{
    Coords coords;
    coords.coordX = coordinateX;
    coords.coordY = coordinateY;
    return coords;
}