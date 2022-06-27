#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include <QShortcut>
#include <QTimer>
#include <vector>
#include <triangle.h>
#include <arrow.h>
#include <start_btn.h>
#include <sphere.h>
#include <slot.h>
#include <QDebug>
#include <QTimerEvent>

class Lotery;

class Widget : public QWidget
{
    friend class Lotery;
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    sphere * spher;  // объект сферы
    start_btn *start;  // объект кнопки старта
    arrow *arr;         // объект стрелочки барабана
    slot *slot_;
    std::vector<Triangle*> balls;  // вектор шаров
    QGraphicsScene  *scene;  // объект сцены
    QTimer          *timer;  // таймер сцены
    int frames = 150;  // попытка стандартизировать фреймы
};

// Класс менеджер всей QGraphicsScene
