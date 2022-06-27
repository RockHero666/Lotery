#include "widget.h"
#include<QPixmap>
#include<QThread>



Widget::Widget(QWidget *parent) :
    QWidget(parent)
{

    scene = new QGraphicsScene();   // Инициализируем графическую сцену
    arr   = new arrow();// Инициализируем графические объекты
    start = new start_btn();// Инициализируем графические объекты
    spher = new sphere();// Инициализируем графические объекты
    slot_ = new slot();
    timer = new QTimer();

    scene->setSceneRect(-250,-250,500,500); // Устанавливаем область графической сцены

    int asd = -150;

    for (int i = 0; i < 36; ++i)  // инициализация всех график итемс
    {
        balls.push_back(new Triangle());

        scene->addItem(balls[i]);

        balls[i]->setPos(asd+=8,0);
        connect(timer, &QTimer::timeout,  balls[i], &Triangle::slotPhysTimer);
    }


    scene->addItem(arr); // добавляем итемы в сцену
    scene->addItem(spher);
    scene->addItem(start);
    scene->addItem(slot_);

    connect(timer, &QTimer::timeout,  arr, &arrow::slotGameTimer);  // включаем  таймер стрелки
    timer->start(1000 / frames);

}

Widget::~Widget()
{
}
