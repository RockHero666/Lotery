#pragma once

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>


class Lotery;




/* Чтобы работали СЛОТЫ и СИГНАЛЫ, наследуемся от QOBJECT,
 * */
class start_btn : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit start_btn(QObject *parent = 0);
    ~start_btn();

signals:
    /* Сигнал, который будет посылаться в том случае,
     * если произошел клик мышью по объекту
     * */
    void signal1();

protected:
    /* Перегружаем метод нажатия мышью, для его перехвата
     * */
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    /* Данные методы виртуальные, поэтому их необходимо реализовать
     * в случае наследования от QGraphicsItem
     * */
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QPixmap *pm; // картинка кругляшка старта
};

