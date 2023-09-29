#include "mainwindow.h"
#include "Mainchar.h"
#include <thread>
#include <QApplication>
#include <thread>
#include <unistd.h>
#include "stone.h"
#include <QRect>
#include "Mycode.h"

void grav(bool status, Mainchar *character)
{
    while (status)
    {
        character->moveDown();
        usleep(10000);
    }
}
void checkForCollision(QLabel *l1, QLabel *l2, Mainchar *character)
{
    while (1)
    {
        if (mycode::checkForCollision(l1, l2))
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
    std::thread checker(checkForCollision, character.getLabel(), stone1.getLabel(), &character);
    return a.exec();
}
