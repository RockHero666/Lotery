#include "lotery.h"
#include <QApplication>


int Triangle::id = 0; // выдает ид шарам
int Triangle::prior = 0; // нужно для управления приоритетом шаров в слоте
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lotery w;
    w.show();

    return a.exec();
}
