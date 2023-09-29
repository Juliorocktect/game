#pragma once
#include <QLabel>
#include <QRect>

namespace mycode
{
    void gravity();
    bool checkForCollision(QLabel *label1, QLabel *label2);
};