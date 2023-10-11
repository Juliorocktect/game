#include "mainwindow.h"
#include "Mainchar.h"
#include <thread>
#include <QApplication>
#include <thread>
#include <unistd.h>
#include "stone.h"
#include <QRect>
#include "Mycode.h"
#include <QMessageBox>

void grav(bool status, Mainchar *character)
{
    while (status)
    {
        character->moveDown();
        usleep(10000);
    }
}
void checkForCollision(QLabel *l1, QLabel *l2, Mainchar *character, MainWindow *w)
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
        if (mycode::isDead(w, character))
        {
            QMessageBox box;
            box.setWindowTitle("Game over");
            box.setText("Du bist ins void gefallen");
            box.setStandardButtons(QMessageBox::Close);
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
    Stone stone1(&w, 100, 400);
    Stone stone2(&w, 90, 90);
    Stone stone3(&w, 10, 100);
    std::thread checker(checkForCollision, character.getLabel(), stone1.getLabel(), &character, &w);
    return a.exec();
}
