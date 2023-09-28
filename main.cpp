#include "mainwindow.h"
#include "Mainchar.h"
#include <thread>
#include <QApplication>
#include "Background.h"
#include <thread>
#include <unistd.h>
#include "stone.h"

void grav(bool status, Mainchar *character)
{
    while (status)
    {
        character->moveDown();
        usleep(10000);
    }
}
void checkForCollision(Mainchar *character, Stone *stone)
{
    while (1)
    {
        if (character->getCoords().coordX == stone->getCoordinates().coordX)
        {
            character->deactivateGravity();
        }
        else
        {
            character->activateGravity();
        }
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Game");
    w.show();
    Mainchar character(&w, 0, 0);
    w.setCharacter(&character);
    std::thread t1(grav, character.isAlive(), &character);
    Stone stone1(&w, 100, 100);
    std::thread checker(checkForCollision, &character, &stone1);
    return a.exec();
}
