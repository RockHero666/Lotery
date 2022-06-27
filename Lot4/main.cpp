#include "lotery.h"
#include <QApplication>


int Triangle::id = 0;
int Triangle::prior = 0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lotery w;
    w.show();

    return a.exec();
}
