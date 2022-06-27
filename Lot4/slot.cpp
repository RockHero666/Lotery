#include "slot.h"

slot::slot()
{
    pm = new QPixmap();
    pm->load("./resurce/lotok.png");
}

QRectF slot::boundingRect() const
{
    return QRectF(-43,175,86,120);
}

void slot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->drawPixmap(-43,175,86,120,*pm);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}


