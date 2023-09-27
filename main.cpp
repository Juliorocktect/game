#include "mainwindow.h"
#include "Mainchar.h"
#include <thread>
#include <QApplication>
#include "Background.h"
#include <thread>
#include <unistd.h>

void grav(bool status, Mainchar *character)
{
    while (status)
    {
        character->moveDown();
        usleep(10000);
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Game");
    w.show();
    Mainchar character(&w, 0, 0);
    bool active = true;
    w.setCharacter(&character);
    std::thread t1(grav, active, &character);
    return a.exec();
}
