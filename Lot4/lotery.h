#pragma once

#include <QMainWindow>
#include "widget.h"
#include "com.h"
#include <QPushButton>
#include <vector>
#include <QRandomGenerator>
#include <algorithm>
#include <QLabel>
#include <QDebug>
#include <QByteArray>
#include <QFile>
#include <QSettings>
#include <QtMultimedia>
#include <QBuffer>
#include<QThread>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QDataStream>

class Com;

namespace Ui {
class Lotery;
}

class Lotery : public QMainWindow
{
     friend class Com;
    Q_OBJECT

public:
    explicit Lotery(QWidget *parent = nullptr);
    ~Lotery();
 Ui::Lotery *ui;
public slots:
    void is_6_btn();  // проверка количества нажатых кнопок
    void luck_btn(); // случайные кнопки
    void start_game(); // проверка на количество кнопок и начало игры
    void game(); //  игровой цикл
    void close_win_menu();  // уберает меню победы
    void playS(); // поочередно включает фон музыку

    void set_cash(int m); // денежный метод
    void money_add();
    void money_add_in_safe(int m);

protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
private slots:


    void on_speed_clicked();

    void on_exit_btn_clicked();

    void on_X_up_btn_clicked();

    void on_X_down_btn_clicked();

private:

    Com* com;
    std::vector<int> vect; // вектор победных чисел
    int time = 0; // итератор для задержки
    QTimer *timer;
    QTimer *t_for_player;

    Widget *widg;// виджет сцены и итемов
    std::vector<QPushButton*> vector_btn; // вектор всех кнопок
    std::vector<int> vector_check; // вектор нажатых кнопок
    bool speed=0; // переменная для проверки ускорения
    bool is_start=0;// проверка на запуск барабана
    int naeb=6;  // значение допустимого выигрыша
    int change = 50;
   // QThread * com_thread;
    QTimer *timer_com;
    long long int money=0;
    long long int money_in_safe =0;
    int X_scale =1;
    int N_of_game = 0;

    QMediaPlayer * m_next;
    QMediaPlayer * m_fon;
    QMediaPlayer * m_fon2;
    QMediaPlayer * m_win;
    QMediaPlayer * m_end;
    QMediaPlayer * m_start;
    QMediaPlayer * m_luck;
    QMediaPlaylist * m_playlist2;
    bool queue = false;

    void arr_btn_init(std::vector<QPushButton*> &vector_btn); // запихиваем кнопки из дизайнера в вектор
    void restart(); //  ну рестарт
    void winGame(); // функция отвечает за послеигровые действия

    void make_cfg(); // создает конфиг
    void get_cfg(); // подгружает конфиг
    void readme(); // создает ридми
    void init_media();
    void load_money();
    void save_data();
    void load_data();

};


