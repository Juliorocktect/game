#include "stone.h"

Stone::Stone(QMainWindow *window, int coordX, int coordY)
{
    label = new QLabel(window);
    this->coordX = coordX;
    this->coordY = coordY;
    pixmap = QPixmap("/home/julio/Bilder/25.jpg");
    label->move(coordX, coordY);
    label->setPixmap(pixmap);
    label->setGeometry(32, 32, 32, 32);
    label->show();
}

Coords Stone::getCoordinates()
{
    Coords coords;
    coords.coordX = coordX;
    coords.coordY = coordY;
    return coords;
}