#pragma once
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QString>

class arrow: public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    arrow();
public slots:
    void slotGameTimer(); // Слот, который отвечает за поворот стрелки
    void setAngle(int y); // слот  для скорости поворота
    void restartAngle(); // слот для рестарта стрелки
protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    int x=1; // инкремент для  градуса и внешних воздействий на него
    QPixmap *pm; //картинка стрелки
    qreal angle; // градус
};



