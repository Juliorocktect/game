#include "mainwindow.h"
#include "Mainchar.h"
#include <thread>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Game");
    w.show();
    Mainchar character(&w, 0, 0);
    w.setCharacter(&character);
    return a.exec();
}
