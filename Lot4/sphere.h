#pragma once
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QString>

class sphere: public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    sphere();

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QPixmap *pm; // картинка сферы
};
