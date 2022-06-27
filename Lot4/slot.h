#pragma once
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QString>

class slot: public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    slot();
protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QPixmap *pm; //картинка стрелки
};



