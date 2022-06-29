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
#include <QMovie>

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


    void on_speed_clicked(); //слот кнопки ускорения

    void on_exit_btn_clicked(); //слот кнопки выхода

    void on_X_up_btn_clicked(); //слот кнопки апскейла

    void on_X_down_btn_clicked(); //слот кнопки даунскейл

private:

    Com* com;
    std::vector<int> vect; // вектор победных чисел
    int time = 0; // итератор для задержки
    QTimer *timer;// таймер логики для отсчета времени игры
    QTimer *t_for_player; // таймер для фоновой музыки

    Widget *widg;// виджет сцены и итемов
    std::vector<QPushButton*> vector_btn; // вектор всех кнопок
    std::vector<int> vector_check; // вектор нажатых кнопок
    bool speed=0; // переменная для проверки ускорения
    bool is_start=0;// проверка на запуск барабана
    int naeb=6;  // значение допустимого выигрыша
    int change = 50;
   // QThread * com_thread;
    long long int money=0; // деньги текущей игры
    long long int money_in_safe =0; // все деньги сейфа
    int X_scale =1; // сколятор
    int N_of_game = 0; // какая по счету игра

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
    void init_media(); // подгрузка музыки
    void load_money(); // загрузка в память сколько в сейфе денег
    void save_data(); // сохранение прочих данных
    void load_data(); // загрузка прочих даных


    int w2 = 10;
    int w3 = 100;
    int w4 = 1000;
    int w5 = 10000;
    int game_price = 25;
    int ball_price_1 =15;
    int ball_price_2 =25;
    int ball_price_3 =50;
    int ball_price_4 =100;
    int ball_price_5 =250;
    int ball_price_6 =500;

    QMovie * animation;

};


