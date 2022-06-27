#include "sphere.h"

sphere::sphere()
{
    pm = new QPixmap();
    pm->load("./resurce/sphere.png");
}

QRectF sphere::boundingRect() const
{
    return QRectF(-250,-250,500,500);
}

void sphere::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->drawPixmap(-250, -250,500,500,*pm);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}
