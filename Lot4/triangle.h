#pragma once
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include<QGraphicsDropShadowEffect>

class Lotery;
class Widget;

class Triangle : public QObject, public QGraphicsItem
{
 friend class Lotery;
 friend class Widget;
    Q_OBJECT
public:
    explicit Triangle(QObject *parent = 0);
    ~Triangle();

signals:

public slots:
    void slotPhysTimer(); // Слот, который отвечает за обработку перемещения треугольника

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:

    qreal angle;    // Угол поворота графического объекта
    qreal x_mem; // память прежнего фрейма по x
    qreal y_mem;// память прежнего фрейма по y
    static int id; // id
    static int prior;
    int ball_id=0; // присваивается конекретному объекту от итерации статического id

    QPainter *p;  // отрисовщик рендера

    QImage *resultImage;
    QImage *destinationImage;
    QImage *sourceImage;
    QImage *mask_of_shadow_Image;

   /// QGraphicsDropShadowEffect* effect;

    int temp =1;  // используется в прерывателе
    qreal x_inc=0.17; // для прокрутки анимации
    qreal y_inc=0.17;// для прокрутки анимации
    int angle_inc= 0; // для угла анимации
    qreal x_cord = 70; // для карты текстур
    qreal y_cord = 70; // для карты текстур
    int height = 70;    // ширина картинки
    int weight = 70;    // высота картинки
    int shadow_rad =5;
    int shadow_X =3;
    int shadow_Y = 3;
    bool win_move=0;
    bool once = 1;
    bool once2 = 0;
    int lotok_x=0;
     int lotok_y=205;
     int X_dist=0;
     int Y_dist=0;
     int  X_t_per_f=0;
    int  Y_t_per_f=0;
    bool end_menu=0;


 void loadImage(const QString &fileName, QImage *image);
 void recalculateResult();


 qreal p1 =16.50;          // значения паттернов поворота
 qreal p2 =12.50;          //
 qreal p3 =13.30;          //
 qreal p4 =14.30;          //
 qreal p5 =15.100;         //////

 qreal cfg_x_inc =0; // инкремент из конфига  X
 qreal cfg_y_inc =0; // инкремент из конфига  Y
 qreal physi = 4;    // параметр скорости перемещения шара по сфере



 bool push=false;
 qreal vectY = 1.5;
 qreal vectX = -1.5;

 bool if_colision =false;
 bool if_going = true;
 qreal speed=1;
 QMatrix matr;
};





