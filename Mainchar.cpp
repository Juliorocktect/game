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
    label->move(coordinateX, coordinateY + 1);
    coordinateY += 1;
}
void Mainchar::jump()
{
    label->move(coordinateX, coordinateY - 50);
    coordinateY -= 50;
}