#include "arrow.h"

arrow::arrow()
{
    angle = 0;     // Задаём угол поворота графического объекта
    setRotation(angle);     // Устанавилваем угол поворота графического объекта
    pm = new QPixmap();
    pm->load("./resurce/arrow.png");

}




QRectF arrow::boundingRect() const
{
    return QRectF(-250,-15,500,30);
}

void arrow::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->drawPixmap(-250, -15,500,30,*pm);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}

void arrow::slotGameTimer()
{
    angle += x;     // Задаём угол поворота графического объекта
    setRotation(angle);     // Устанавилваем угол поворота графического объекта
}

void arrow::setAngle(int y) // скорость вращения
{
    x=y;
}
void arrow::restartAngle()  // для остановки
{
   x=0;
   angle=0;
}



