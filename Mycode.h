#pragma once
#include <QLabel>
#include <QRect>
#include "mainwindow.h"
#include "Mainchar.h"

namespace mycode
{
    void gravity();
    bool checkForCollision(QLabel *label1, QLabel *label2);
    bool isDead(MainWindow *w, Mainchar *character);
};