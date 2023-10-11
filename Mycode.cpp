#include "Mycode.h"

namespace mycode
{
    bool checkForCollision(QLabel *label1, QLabel *label2)
    {
        QRect rect1 = label1->geometry();
        QRect rect2 = label2->geometry();
        if (rect1.intersects(rect2))
        {
            return true;
        }
        return false;
    }
    bool isDead(MainWindow *w, Mainchar *character)
    {
        if (w->geometry().height() == character->getCoords().coordY)
        {
            return true;
        }
        return false;
    }
}
