#include "start_btn.h"

start_btn::start_btn(QObject *parent)
    : QObject(parent), QGraphicsItem()
{
 pm = new QPixmap("./resurce/btn/start_btn.png");
}

start_btn::~start_btn()
{
}

QRectF start_btn::boundingRect() const
{
    /* возвращаем координаты расположения кнопки
     * по ним будет определяться нажатие кнопки
     * */
    return QRectF(-100,-100,200,200);
}

void start_btn::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->drawPixmap(-100,-100,200,200,*pm);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}

/* Переопределив метод перехвата события нажатия кнопки мыши,
 * добавляем посылку СИГНАЛА от объекта
 * */
void start_btn::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit signal1();
    // Вызываем родительскую функцию события нажатия кнопки мыши
    QGraphicsItem::mousePressEvent(event);
}
