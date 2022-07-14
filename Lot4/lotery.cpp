#include "lotery.h"
#include "ui_lotery.h"
#include <QMessageBox>
#include <QSizePolicy>
#include<iostream>
#include "qrcodegen.hpp"
#include "qrcodegen.cpp"

using namespace qrcodegen;


Lotery::Lotery(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lotery)
{
    ui->setupUi(this);

    t_for_player = new QTimer();
    timer = new QTimer(); // инициализация таймера
    widg = new Widget(); // создаем сцену и итемы сцены (по факту класс- менеджер по сцене-объектам)
    anim_t = new QTimer();

    //com_thread=new QThread(this);
   // animation = new QMovie("./resurce/gif.gif");
   // animation->moveToThread(com_thread);
    //connect(com_thread,&QThread::started,animation,&QMovie::start,Qt::DirectConnection);
   // com_thread->start();

   // ui->movie_anim->setMovie(animation);

    arr_btn_init(vector_btn); // загрузка всех кнопок в вектор для удобства

    ui->graphicsView->setScene(widg->scene);  // Устанавливаем графическую сцену в graphicsView
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->graphicsView->setRenderHint(QPainter::SmoothPixmapTransform);    // Устанавливаем мыло
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // Отключаем скроллбар по вертикали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // Отключаем скроллбар по горизонтали
    ui->graphicsView->setStyleSheet("background-color: transparent");  // прозрачность для сцены
    ui->graphicsView->setFrameStyle(QFrame::NoFrame); // убираем рамку
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);  // сглаживание
    QApplication::setOverrideCursor(Qt::BlankCursor);
    ui->jack->setPixmap(QPixmap("./resurce/jack.png"));
    ui->money->setPixmap(QPixmap("./resurce/money.png"));
    ui->exit->setPixmap(QPixmap("./resurce/exit.png"));


    ui->dep_1->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->dep_2->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->dep_3->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->dep_4->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->dep_5->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->dep_6->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->balance->setPixmap(QPixmap("./resurce/schet.png"));
    ui->trys->setPixmap(QPixmap("./resurce/trys.png"));
    ui->trys_logo->setPixmap(QPixmap("./resurce/money.png"));

    //ui->w


    ui->try_1->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->try_2->setPixmap(QPixmap("./resurce/number/gold/0.png"));
    ui->try_3->setPixmap(QPixmap("./resurce/number/gold/0.png"));


    ui->X_table->setPixmap(QPixmap("./resurce/X_table.png"));
    ui->X_up->setPixmap(QPixmap("./resurce/X_up.png"));
    ui->X_down->setPixmap(QPixmap("./resurce/X_down.png"));
    ui->X_table_x->setPixmap(QPixmap("./resurce/X.png"));
    ui->X_table_number->setPixmap(QPixmap("./resurce/number/gold/1.png"));

    ui->Name->setPixmap(QPixmap("./resurce/name.png"));

    ui->table_score->setPixmap(QPixmap("./resurce/table_score1.png"));

    ui->player_choes_table->setPixmap(QPixmap("./resurce/choes.png"));


    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_01.png"));
    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_01.png"));
    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_01.png"));
    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_01.png"));
    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_01.png"));
    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_01.png"));


    for (int i = 0; i < 36; ++i) // подключение кнопок к логике проверки на количество нажатий
    {
        connect(vector_btn[i], &QPushButton::clicked, this, &Lotery::is_6_btn);
    }

    connect(ui->luck_btn , &QPushButton::clicked , this , &Lotery::luck_btn);  // кнопка "на удачу"
    connect(widg->start ,&start_btn::signal1, this , &Lotery::start_game);   // кнопка старт на сфере
    connect(ui->win_btn_logo ,&QPushButton::clicked, this , &Lotery::close_win_menu);   // меню победы


    m_fon = new QMediaPlayer(this);   // Инициализируем плеер
    m_playlist2 = new QMediaPlaylist(m_fon); // Создаём плейлист
    m_fon->setPlaylist(m_playlist2);  // Устанавливаем плейлист в плеер
    m_playlist2->addMedia(QUrl("qrc:/sound/fon.mp3")); // Добавляем аудио в плеер
    m_playlist2->setPlaybackMode(QMediaPlaylist::Loop); // Проигрываем один раз

    m_fon2 = new QMediaPlayer(this);   // Инициализируем плеер

    m_fon2->setPlaylist(m_playlist2);  // Устанавливаем плейлист в плеер







    m_fon2->setPosition(340);
    m_fon->play();
    m_fon2->play();


    m_fon->setVolume(40);
    m_fon2->setVolume(40);


    // таймер для фоновой музыки
    t_for_player->start(2000);
    connect(t_for_player, &QTimer::timeout,  this, &Lotery::playS);

    init_media(); //запускаем проигрыватели
    make_cfg(); // делаем конфиг
    get_cfg();  // загрузка конфига
    readme();   // создание ридми
    load_money(); // подгрузить дата файлы денег
    load_data();// подгрузить дата файлы количества игр

    com = new Com(); // инициализация порта



    connect(com,&Com::cash,this,&Lotery::set_cash);
    connect(com,&Com::cash,this,&Lotery::money_add_in_safe);
    connect(anim_t, &QTimer::timeout,  this, &Lotery::anim_slot);




}

Lotery::~Lotery()
{
    delete ui;
}

void Lotery::is_6_btn()
{

    int x=0;

    for (int i = 0; i < vector_btn.size(); ++i) //сколько включено кнопок
    {
        if(vector_btn[i]->isChecked())
            x++;
    }

    if(x==6)   // если 6 то запаминаем какие
    {
        for (int i = 0; i < vector_btn.size(); ++i)
        {
            if(vector_btn[i]->isChecked())
            {
                vector_check.push_back(i+1);
            }
        }
    }
    else if(x<6)  // меньше 6 очищаем память
    {
        vector_check.clear();
    }
    else if(x>6) // нажали 7 кнопку   востановим положение из памяти
    {
        for (int j = 0; j < vector_btn.size(); ++j)
        {
            vector_btn[j]->setChecked(false);
        }
        for (int g = 0; g < vector_check.size(); ++g)
        {
            vector_btn[vector_check[g]-1]->setChecked(true);
        }
    }
}

void Lotery::luck_btn()
{


    vector_check.clear(); // очищаем  знание о числах нажатых кнопках

    while(true)    // уникальный рандомизатор
    {
        int x = QRandomGenerator::global()->generate()%36+1;
        if(vector_check.end()==std::find(vector_check.begin(),vector_check.end(),x))
        {
            vector_check.push_back(x);
        }

        if(vector_check.size()==6)
            break;
    }

    for (int j = 0; j < vector_btn.size(); ++j)   // выставить все кнопки в вкл
    {
        vector_btn[j]->setChecked(false);
    }

    for (int g = 0; g < vector_check.size(); ++g) // включить нужные кнопки
    {
        vector_btn[vector_check[g]-1]->setChecked(true);
    }
    //m_luck->play();
}


void Lotery::start_game()
{
    //set_cash(50); // отладка
    if(vector_check.size() == 6 && money >= game_price*X_scale)  // проверка на нажатие 6 кнопок
    {
        N_of_game++;
        set_cash(-game_price*X_scale);

        m_start->play();
        is_start =1;
        timer->start(1000); // включаем таймер на 1 тик в секунду
        widg->scene->removeItem(widg->start);  // убераем кнопку старта
        connect(timer,&QTimer::timeout,this, &Lotery::game); // включаем слот для таймера
        // widg->arr->setAngle(3); // выставляем скорость вращения стрелки




        //element block

        ui->idiot_lock->setGeometry(0,0,1300,890);  // ставвим блок от идиота
        ui->table_score->setGeometry(749,270,455,571);
        ui->luck_btn->setGeometry(11111,11111,410,110);
        ui->player_choes_table->setGeometry(940,15,298,250);
        ui->player_ball_1->setGeometry(962,25,75,75);
        ui->player_ball_2->setGeometry(1050,25,75,75);
        ui->player_ball_3->setGeometry(1140,25,75,75);
        ui->player_ball_4->setGeometry(962,103,75,75);
        ui->player_ball_5->setGeometry(1050,103,75,75);
        ui->player_ball_6->setGeometry(1140,103,75,75);

        ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[0])+".png"));
        ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[1])+".png"));
        ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[2])+".png"));
        ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[3])+".png"));
        ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[4])+".png"));
        ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ball_"+QString::number(vector_check[5])+".png"));


    }
}


void Lotery::game()
{

    time++; // итератор для задержки


    if(time==1)// уникальный рандомизатор для победных шаров   (добавлять валидацию для наебок сюда)
    {


        int temp_f_naeb = 0;

        if(N_of_game%w5==0)
        {
            vect.push_back(vector_check[0]);
            vect.push_back(vector_check[4]);
            vect.push_back(vector_check[2]);
            vect.push_back(vector_check[1]);
            vect.push_back(vector_check[3]);
            temp_f_naeb+=5;
            naeb=5;
            change=1;
        }
        else if(N_of_game%w4==0)
        {
            vect.push_back(vector_check[0]);
            vect.push_back(vector_check[4]);
            vect.push_back(vector_check[2]);
            vect.push_back(vector_check[5]);
            temp_f_naeb+=4;
            naeb=4;
            change=1;
        }
        else if(N_of_game%w3==0)
        {
            vect.push_back(vector_check[0]);
            vect.push_back(vector_check[4]);
            vect.push_back(vector_check[2]);
            temp_f_naeb+=3;
            naeb=3;
            change=1;
        }
        else if(N_of_game%w2==0)
        {
            vect.push_back(vector_check[1]);
            vect.push_back(vector_check[2]);
            temp_f_naeb+=2;
            naeb=2;
            change=1;
        }



        int x;

        if(change==0)
            naeb=0;


        while(true)
        {


            if(change>QRandomGenerator::global()->generate()%100)
                x=vector_check[QRandomGenerator::global()->generate()%6];
            else
            {
                x = QRandomGenerator::global()->generate()%36+1;
                auto it = std::find(vector_check.begin(),vector_check.end(),x);
                if(it != vector_check.end())
                    continue;
            }


            if( vect.end() == std::find(vect.begin(),vect.end(),x) )  // чек на повторение
            {
                auto it = std::find(vector_check.begin(),vector_check.end(),x); // поиск сопадений по выбранному массиву и случайным числам

                if(temp_f_naeb>=naeb) // года темп наеба переходит границу выиграть невозможно
                    if(it != vector_check.end()) //  чек на наеб
                        continue;

                vect.push_back(x); // запись в массив победных чисел

                if(it != vector_check.end()) // если число есть в победном массиве то темп увеличивается
                    temp_f_naeb++;
            }

            if(vect.size()==6)
                break;
        }

    }

    if(speed) //функцианал для кнопки ускорения
    {
        timer->start(100);
        speed = 0;
    }






    QString path = "./resurce/res/ball_";
    switch (time) // вставка картинки соответствующей выигрышу   от таймера
    {

    case 2:
    {

        widg->balls[vect[0]-1]->win_move=1;
        path +=QString::number(vect[0]) + ".png" ;

        ui->win_ball_1->setPixmap(path);

        for (int j = 0; j < 6; ++j)
        {
            if(vect[0] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_1->setPixmap( "./resurce/res/ballG_"+QString::number(vect[0])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[0])+".png"));
            }
        }
        m_next->play();
        break;
    }

    case 4:
    {
        widg->balls[vect[1]-1]->win_move=1;
        path +=QString::number(vect[1]) + ".png" ;
        ui->win_ball_2->setPixmap(path);

        for (int j = 0; j < 6; ++j)
        {
            if(vect[1] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_2->setPixmap( "./resurce/res/ballG_"+QString::number(vect[1])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[1])+".png"));
            }
        }
        m_next->play();
        break;
    }

    case 6:
    {
        widg->balls[vect[2]-1]->win_move=1;
        path +=QString::number(vect[2]) + ".png" ;
        ui->win_ball_3->setPixmap(path);

        for (int j = 0; j < 6; ++j)
        {
            if(vect[2] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_3->setPixmap( "./resurce/res/ballG_"+QString::number(vect[2])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[2])+".png"));
            }
        }
        m_next->play();
        break;
    }

    case 8:
    {
        widg->balls[vect[3]-1]->win_move=1;
        path +=QString::number(vect[3]) + ".png" ;
        ui->win_ball_4->setPixmap(path);
        for (int j = 0; j < 6; ++j)
        {
            if(vect[3] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_4->setPixmap( "./resurce/res/ballG_"+QString::number(vect[3])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[3])+".png"));
            }
        }
        m_next->play();
        break;
    }

    case 10:
    {
        widg->balls[vect[4]-1]->win_move=1;
        path +=QString::number(vect[4]) + ".png" ;
        ui->win_ball_5->setPixmap(path);
        for (int j = 0; j < 6; ++j)
        {
            if(vect[4] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_5->setPixmap( "./resurce/res/ballG_"+QString::number(vect[4])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[4])+".png"));
            }
        }
        m_next->play();
        break;
    }
    case 12:
    {
        widg->balls[vect[5]-1]->win_move=1;
        path +=QString::number(vect[5]) + ".png" ;
        ui->win_ball_6->setPixmap(path);
        for (int j = 0; j < 6; ++j)
        {
            if(vect[5] == vector_check[j])
            {
                m_win->play();
                ui->win_ball_6->setPixmap( "./resurce/res/ballG_"+QString::number(vect[5])+".png");


                if(j==0)
                    ui->player_ball_1->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
                else if(j==1)
                    ui->player_ball_2->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
                else if(j==2)
                    ui->player_ball_3->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
                else if(j==3)
                    ui->player_ball_4->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
                else if(j==4)
                    ui->player_ball_5->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
                else if(j==5)
                    ui->player_ball_6->setPixmap(QPixmap("./resurce/res/ballG_"+QString::number(vect[5])+".png"));
            }
        }
        m_next->play();
        break;
    }
    case 15:
    {
        winGame();  // подсчет выигрыша
          // возврат параметров в дефолт
        m_end->play();
        break;
    }

    }

}

void Lotery::close_win_menu()
{
    ui->win_btn_logo->setGeometry(11111,11111,1300,750); // убрать винлого куда подальше
    ui->movie_anim->setGeometry(11111,11111,1280,1024);
    ui->win_logo->setGeometry(11111,11111,1280,1024);
    //animation->stop();
     anim_t->stop();
    restart();
}

void Lotery::restart()
{
    disconnect(timer,&QTimer::timeout,this, &Lotery::game); // отключение таймера и остановка цикла game()
    timer->stop();// остановка таймера
    time = 0; // сброс таймера для последующего запуска
    widg->scene->addItem(widg->start); // возврат на сцену кнопки start
    // widg->arr->restartAngle(); // сброс положения стрелки

    for (int j = 0; j < vector_btn.size(); ++j) // цикл дефолтит в анчек все кнопки
    {
        vector_btn[j]->setChecked(false);
    }
    int asd =-150;
    for(int j = 0; j < vector_btn.size(); ++j)
    {
        widg->balls[j]->setPos(asd+=8,0);
        widg->balls[j]->win_move =false;
        widg->balls[j]->once=true;
        widg->balls[j]->once2=true;
        widg->balls[j]->setZValue(0);
        widg->balls[j]->end_menu=0;
    }
    Triangle::prior=0;
    vector_check.clear(); // очищает детектор количества кнопок

    ui->win_ball_1->setPixmap(QPixmap("./resurce/res/unknown.png"));  // сброс картинок выигрыша до неизвестности
    ui->win_ball_2->setPixmap(QPixmap("./resurce/res/unknown.png"));
    ui->win_ball_3->setPixmap(QPixmap("./resurce/res/unknown.png"));
    ui->win_ball_4->setPixmap(QPixmap("./resurce/res/unknown.png"));
    ui->win_ball_5->setPixmap(QPixmap("./resurce/res/unknown.png"));
    ui->win_ball_6->setPixmap(QPixmap("./resurce/res/unknown.png"));
    widg->timer->start(1000/200); // возврат на 100 фпс
    speed = 0;   // сброс ускорения
    vect.clear(); // сброс вектора с выигрышными числами
    is_start =0;  // сброс старта на выключение
    save_data();
    get_cfg();
}

void Lotery::winGame()
{
    int howWin=0;

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) // О(n^2)
        {
            if(vect[i] == vector_check[j])
                howWin++;
        }
    }

    for(int j = 0; j < vector_btn.size(); ++j)
    {
    widg->balls[j]->end_menu=1;
    }
    QString path = "./resurce/win/win_btn" + QString::number(howWin) +"_"+QString::number(QRandomGenerator::global()->generate()%3+1) +".png" ;;
    ui->movie_anim->setGeometry(0,0,1280,1024);
    //animation->start();
    anim_t->start(41);
     ui->win_logo->setPixmap(path);
    ui->win_logo->setGeometry(0,0,1280,1024);
   // ui->win_btn_logo->setIcon(QIcon(path)); // выставляем картинку победы равную выигрышу
    ui->idiot_lock->setGeometry(11111,11111,1300,750);  // убераем защиту от дурака с кнопок
    ui->table_score->setGeometry(11111,11111,1300,750);
    ui->win_btn_logo->setGeometry(0,0,1280,1024);        // ставим вин лого
    ui->luck_btn->setGeometry(772,790,410,110);

    ui->player_choes_table->setGeometry(11111,11111,231,151);
    ui->player_ball_1->setGeometry(11111,25,75,75);
    ui->player_ball_2->setGeometry(11111,25,75,75);
    ui->player_ball_3->setGeometry(11111,25,75,75);
    ui->player_ball_4->setGeometry(11111,103,75,75);
    ui->player_ball_5->setGeometry(11111,103,75,75);
    ui->player_ball_6->setGeometry(11111,103,75,75);


    switch(howWin)
    {
    case 1:
    {
        set_cash(ball_price_1*X_scale);
        break;
    }
    case 2:
    {
        set_cash(ball_price_2*X_scale);
        break;
    }
    case 3:
    {
        set_cash(ball_price_3*X_scale);
        break;
    }
    case 4:
    {
        set_cash(ball_price_4*X_scale);
        break;
    }
    case 5:
    {
        set_cash(ball_price_5*X_scale);
        break;
    }
    case 6:
    {
        set_cash(ball_price_6*X_scale);
        break;
    }
    default:
    {
        break;
    }
    }






}

void Lotery::arr_btn_init(std::vector<QPushButton*> &vector_btn)
{
    vector_btn.push_back(ui->pushButton);vector_btn.push_back(ui->pushButton_2);vector_btn.push_back(ui->pushButton_3);vector_btn.push_back(ui->pushButton_4);vector_btn.push_back(ui->pushButton_5);vector_btn.push_back(ui->pushButton_6);vector_btn.push_back(ui->pushButton_7);vector_btn.push_back(ui->pushButton_8);vector_btn.push_back(ui->pushButton_9);vector_btn.push_back(ui->pushButton_10);vector_btn.push_back(ui->pushButton_11);vector_btn.push_back(ui->pushButton_12);vector_btn.push_back(ui->pushButton_13);vector_btn.push_back(ui->pushButton_14);vector_btn.push_back(ui->pushButton_15);vector_btn.push_back(ui->pushButton_16);vector_btn.push_back(ui->pushButton_17);vector_btn.push_back(ui->pushButton_18);vector_btn.push_back(ui->pushButton_19);vector_btn.push_back(ui->pushButton_20);vector_btn.push_back(ui->pushButton_21);vector_btn.push_back(ui->pushButton_22);vector_btn.push_back(ui->pushButton_23);vector_btn.push_back(ui->pushButton_24);vector_btn.push_back(ui->pushButton_25);vector_btn.push_back(ui->pushButton_26);vector_btn.push_back(ui->pushButton_27);vector_btn.push_back(ui->pushButton_28);vector_btn.push_back(ui->pushButton_29);vector_btn.push_back(ui->pushButton_30);vector_btn.push_back(ui->pushButton_31);vector_btn.push_back(ui->pushButton_32);vector_btn.push_back(ui->pushButton_33);vector_btn.push_back(ui->pushButton_34);vector_btn.push_back(ui->pushButton_35);vector_btn.push_back(ui->pushButton_36);
}



void Lotery::on_speed_clicked()
{
    if(!is_start)
        start_game();

    if(vector_check.size() == 6 && is_start ==1)
    {
        widg->timer->start(1000/1000);
        speed =1;
    }
}



void Lotery::make_cfg()
{
    QFile cfg("settings.ini");

    if(!cfg.exists())
    {
        QSettings settings("settings.ini",QSettings::IniFormat);
        settings.beginGroup("Settings");
        settings.setValue("predel","2");
        settings.setValue("change","20");
       settings.setValue("w2","10");
       settings.setValue("w3","100");
       settings.setValue("w4","1000");
       settings.setValue("w5","10000");
        settings.setValue("game_price","25");
        settings.setValue("ball_price_1","15");
          settings.setValue("ball_price_2","25");
            settings.setValue("ball_price_3","50");
              settings.setValue("ball_price_4","100");
                settings.setValue("ball_price_5","250");
                  settings.setValue("ball_price_6","500");

        settings.endGroup();
    }
}



void Lotery::get_cfg()
{
    QSettings settings ("settings.ini",QSettings::IniFormat);
    settings.beginGroup("Settings");


    naeb=settings.value("predel").toFloat();
    change =  settings.value("change").toInt();
    w2 =    settings.value("w2").toInt();
    w3 =    settings.value("w3").toInt();
    w4 =    settings.value("w4").toInt();
    w5 =    settings.value("w5").toInt();
    game_price =settings.value("game_price").toInt();
    ball_price_1 =    settings.value("ball_price_1").toInt();
     ball_price_2 =    settings.value("ball_price_2").toInt();
     ball_price_3 =    settings.value("ball_price_3").toInt();
     ball_price_4 =    settings.value("ball_price_4").toInt();
     ball_price_5 =    settings.value("ball_price_5").toInt();
     ball_price_6 =    settings.value("ball_price_6").toInt();



    settings.endGroup();
}

void Lotery::readme()
{
    QFile readme("Readme.txt");
    if(!readme.exists())
        if(readme.open(QIODevice::WriteOnly))
        {
            QString setting("Вся настройка происходит в settings.ini\r\n");
            QString setting1(              "predel верхний предел возможного выигрыша  ( по стандарту 2    то есть больше чем 2 совпадения невозможно) ( принимает значения от 0-6   ДРУГИЕ НЕ СТАВИТЬ)\r\n");
            QString setting2(              "change отвечает за шанс выпадения на каждый шар от 0 до 100 \r\n");
            QString setting3(              "w2,w3,w4,w5 отвечают за то сколько надо сыграть игр для выпадения гарантированного выигрыша, цифры после w означают сколько выпадет шаров\r\n");
            QString setting4(              "game prace  выставляет цену одной игры при x1 множителе\r\n");
            QString setting5(              "ball_price_1 и прочие отвечают за выигрыш при совпадении шаров   цифра обозначает количество совпадений\r\n");
            QString setting6(              "Если все поламалось и нечего не работает  - удалить settings.ini\r\n");

            QTextStream writeStream(&readme);
            writeStream<<setting<<setting1<<setting2<<setting3<<setting4<<setting5<<setting6;
            readme.close();
        }
}

void Lotery::init_media()
{

    m_next = new QMediaPlayer(this);   // Инициализируем плеер
    QMediaPlaylist * m_playlist = new QMediaPlaylist(m_next); // Создаём плейлист
    m_next->setPlaylist(m_playlist);  // Устанавливаем плейлист в плеер
    m_playlist->addMedia(QUrl("sound/next.mp3")); // Добавляем аудио в плеер
    m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Проигрываем один раз

    m_next->setVolume(40);

    m_win = new QMediaPlayer(this);   // Инициализируем плеер
    QMediaPlaylist * m_playlist1 = new QMediaPlaylist(m_win); // Создаём плейлист
    m_win->setPlaylist(m_playlist1);  // Устанавливаем плейлист в плеер
    m_playlist1->addMedia(QUrl("sound/win.mp3")); // Добавляем аудио в плеер
    m_playlist1->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Проигрываем один раз

    m_win->setVolume(40);

    //    m_fon = new QMediaPlayer(this);   // Инициализируем плеер
    //    m_playlist2 = new QMediaPlaylist(m_fon); // Создаём плейлист
    //    m_fon->setPlaylist(m_playlist2);  // Устанавливаем плейлист в плеер
    //    m_playlist2->addMedia(QUrl("qrc:/sound/fon.mp3")); // Добавляем аудио в плеер
    //    m_playlist2->setPlaybackMode(QMediaPlaylist::Loop); // Проигрываем один раз

    m_end = new QMediaPlayer(this);   // Инициализируем плеер
    QMediaPlaylist * m_playlist3 = new QMediaPlaylist(m_end); // Создаём плейлист
    m_end->setPlaylist(m_playlist3);  // Устанавливаем плейлист в плеер
    m_playlist3->addMedia(QUrl("sound/end.mp3")); // Добавляем аудио в плеер
    m_playlist3->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Проигрываем один раз

    m_end->setVolume(40);

    m_start = new QMediaPlayer(this);   // Инициализируем плеер
    QMediaPlaylist * m_playlist4 = new QMediaPlaylist(m_start); // Создаём плейлист
    m_start->setPlaylist(m_playlist4);  // Устанавливаем плейлист в плеер
    m_playlist4->addMedia(QUrl("sound/start.mp3")); // Добавляем аудио в плеер
    m_playlist4->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Проигрываем один раз

    m_start->setVolume(40);

    m_luck = new QMediaPlayer(this);   // Инициализируем плеер
    QMediaPlaylist * m_playlist5 = new QMediaPlaylist(m_luck); // Создаём плейлист
    m_luck->setPlaylist(m_playlist5);  // Устанавливаем плейлист в плеер
    m_playlist5->addMedia(QUrl("sound/luck.mp3")); // Добавляем аудио в плеер
    m_playlist5->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Проигрываем один раз

    m_luck->setVolume(20);

}
void Lotery::playS()
{

    if(queue)
    {
        m_fon->setPosition(20);
        queue = false;
    }
    else
    {
        m_fon2->setPosition(166);
        queue = true;
    }

   // bomb++;

   // if(bomb==1800)
       //qApp->quit();

}

void Lotery::set_cash(int m)
{
    if(m==0) // для конца игры после выдачи чека
    {
        money = 0;
    }
    else
        money+=m;



    QString money_str = QString::number(money);
    while(!(money_str.size()==6))
    {
        money_str = QString::number(0)+money_str;


        if(money_str.size()>6)
        {
            money_str = QString::number(999999);
            break;
        }
    }


    QString path_dep_6 = "./resurce/number/gold/";
    path_dep_6+=money_str[0] + ".png";
    ui->dep_6->setPixmap(QPixmap(path_dep_6));

    QString path_dep_5 = "./resurce/number/gold/";
    path_dep_5+=money_str[1] + ".png";
    ui->dep_5->setPixmap(QPixmap(path_dep_5));

    QString path_dep_4 = "./resurce/number/gold/";
    path_dep_4+=money_str[2] + ".png";
    ui->dep_4->setPixmap(QPixmap(path_dep_4));

    QString path_dep_3 = "./resurce/number/gold/";
    path_dep_3+=money_str[3] + ".png";
    ui->dep_3->setPixmap(QPixmap(path_dep_3));

    QString path_dep_2 = "./resurce/number/gold/";
    path_dep_2+=money_str[4] + ".png";
    ui->dep_2->setPixmap(QPixmap(path_dep_2));

    QString path_dep_1 = "./resurce/number/gold/";
    path_dep_1+=money_str[5] + ".png";
    ui->dep_1->setPixmap(QPixmap(path_dep_1));


    int trys1 = money/(game_price*X_scale);
    QString trys_str = QString::number(trys1);
    while(!(trys_str.size()==3))
    {
        trys_str = QString::number(0)+trys_str;

        if(trys_str.size()>3)
        {
            trys_str = QString::number(999);
            break;
        }
    }


    QString path_trys_1 = "./resurce/number/gold/";
    path_trys_1+=trys_str[0] + ".png";
    ui->try_1->setPixmap(QPixmap(path_trys_1));

    QString path_trys_2 = "./resurce/number/gold/";
    path_trys_2+=trys_str[1] + ".png";
    ui->try_2->setPixmap(QPixmap(path_trys_2));

    QString path_trys_3 = "./resurce/number/gold/";
    path_trys_3+=trys_str[2] + ".png";
    ui->try_3->setPixmap(QPixmap(path_trys_3));



}


void Lotery::on_exit_btn_clicked()
{





    if(money!=0)
    {


        QString mData="https://www.youtube.com/watch?v=dQw4w9WgXcQ";


        std::vector<QrSegment> segs = QrSegment::makeSegments(mData.toLatin1());
        QrCode qrcode = QrCode::encodeSegments(segs, QrCode::Ecc::HIGH, 1, 40, 2, false);


        QImage qrImage = QImage(qrcode.getSize(), qrcode.getSize(), QImage::Format_RGB888);
        for (int y = 0; y < qrcode.getSize(); y++) {
            for (int x = 0; x < qrcode.getSize(); x++) {
                if(qrcode.getModule(x, y)==0)
                    qrImage.setPixel(x,y,qRgb(255,255,255));
                else
                    qrImage.setPixel(x,y,qRgb(0,0,0));
            }
        }






        // QPixmap qrcode = QPixmap::fromImage(qrImage);







        QString text =
                QString("Мгновенная Республиканская\n")+
                "Лотерея\n"+
                "Ваш выигрыш составил\n"+
                QString::number(money)+" рублей\n"+
                "\n"+
                "Спасибо за игру!\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "\n"+
                "                   \n";

        QPixmap monetki("./resurce/monetki.png");
        QPixmap zav("./resurce/zav.png");
        QPixmap zav_p("./resurce/zav_p.png");
        QPrinter printer(QPrinter::HighResolution);
        //printer.setOutputFileName("print.ps");
        //printer.setPaperSize(QSizeF(210, 1000), QPrinter::Millimeter);
        // printer.setPageMargins(200,100,500,700,QPrinter::Millimeter);
        QPainter painter;
        printer.setPageMargins(0, 0, 0, 0, QPrinter::Inch);
        painter.begin(&printer);

        painter.drawText(0, 175, 570, 1700, Qt::AlignHCenter|Qt::AlignTop, text);
        painter.drawImage(QRectF(90,480,400,400),qrImage);
        // painter.drawPixmap(50, 300,500,480,monetki);
        painter.drawPixmap(0, 0,570,150,zav);
        painter.drawPixmap(0, 900,570,150,zav_p);

        painter.end();
        restart();
        set_cash(0);
    }

}

void Lotery::money_add()
{
    QFile file( "moc.data" );
    QDataStream stream( &file );

    file.open( QIODevice::WriteOnly );
    stream <<money_in_safe;
    file.close();
}

void Lotery::save_data()
{
    QFile file( "ng.data" );
    QDataStream stream( &file );

    file.open( QIODevice::WriteOnly );
    stream <<N_of_game;
    file.close();
}

void Lotery::money_add_in_safe(int m)
{
    money_in_safe+=m;
    money_add();
}




void Lotery::load_money()
{
    QFile file( "moc.data" );
    QDataStream stream( &file );
    file.open( QIODevice::ReadOnly );
    stream >>money_in_safe>>N_of_game;
    file.close();
}


void Lotery::load_data()
{
    QFile file( "ng.data" );
    QDataStream stream( &file );
    file.open( QIODevice::ReadOnly );
    stream >>N_of_game;
    file.close();
}

void Lotery::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_C )
    {
        QString money_str = QString::number(money_in_safe);
        while(!(money_str.size()==6))
        {
            money_str = QString::number(0)+money_str;


            if(money_str.size()>6)
            {
                money_str = QString::number(999999);
                break;
            }
        }


        QString path_dep_6 = "./resurce/number/gold/";
        path_dep_6+=money_str[0] + ".png";
        ui->dep_6->setPixmap(QPixmap(path_dep_6));

        QString path_dep_5 = "./resurce/number/gold/";
        path_dep_5+=money_str[1] + ".png";
        ui->dep_5->setPixmap(QPixmap(path_dep_5));

        QString path_dep_4 = "./resurce/number/gold/";
        path_dep_4+=money_str[2] + ".png";
        ui->dep_4->setPixmap(QPixmap(path_dep_4));

        QString path_dep_3 = "./resurce/number/gold/";
        path_dep_3+=money_str[3] + ".png";
        ui->dep_3->setPixmap(QPixmap(path_dep_3));

        QString path_dep_2 = "./resurce/number/gold/";
        path_dep_2+=money_str[4] + ".png";
        ui->dep_2->setPixmap(QPixmap(path_dep_2));

        QString path_dep_1 = "./resurce/number/gold/";
        path_dep_1+=money_str[5] + ".png";
        ui->dep_1->setPixmap(QPixmap(path_dep_1));
    }
    if(event->key() == Qt::Key_R)
    {
        restart();
    }


    if(event->key() == Qt::Key_G)
    {

                QString money_str = QString::number(N_of_game);
                while(!(money_str.size()==6))
                {
                    money_str = QString::number(0)+money_str;


                    if(money_str.size()>6)
                    {
                        money_str = QString::number(999999);
                        break;
                    }
                }


                QString path_dep_6 = "./resurce/number/gold/";
                path_dep_6+=money_str[0] + ".png";
                ui->dep_6->setPixmap(QPixmap(path_dep_6));

                QString path_dep_5 = "./resurce/number/gold/";
                path_dep_5+=money_str[1] + ".png";
                ui->dep_5->setPixmap(QPixmap(path_dep_5));

                QString path_dep_4 = "./resurce/number/gold/";
                path_dep_4+=money_str[2] + ".png";
                ui->dep_4->setPixmap(QPixmap(path_dep_4));

                QString path_dep_3 = "./resurce/number/gold/";
                path_dep_3+=money_str[3] + ".png";
                ui->dep_3->setPixmap(QPixmap(path_dep_3));

                QString path_dep_2 = "./resurce/number/gold/";
                path_dep_2+=money_str[4] + ".png";
                ui->dep_2->setPixmap(QPixmap(path_dep_2));

                QString path_dep_1 = "./resurce/number/gold/";
                path_dep_1+=money_str[5] + ".png";
                ui->dep_1->setPixmap(QPixmap(path_dep_1));
    }

}

void Lotery::on_X_up_btn_clicked()
{
    if(X_scale<4)
    {
        X_scale++;
        QString path = "./resurce/number/gold/";
        path +=QString::number(X_scale) + ".png" ;
        ui->X_table_number->setPixmap(path);

        int trys1 = money/(game_price*X_scale);
        QString trys_str = QString::number(trys1);
        while(!(trys_str.size()==3))
        {
            trys_str = QString::number(0)+trys_str;

            if(trys_str.size()>3)
            {
                trys_str = QString::number(999);
                break;
            }
        }


        QString path_trys_1 = "./resurce/number/gold/";
        path_trys_1+=trys_str[0] + ".png";
        ui->try_1->setPixmap(QPixmap(path_trys_1));

        QString path_trys_2 = "./resurce/number/gold/";
        path_trys_2+=trys_str[1] + ".png";
        ui->try_2->setPixmap(QPixmap(path_trys_2));

        QString path_trys_3 = "./resurce/number/gold/";
        path_trys_3+=trys_str[2] + ".png";
        ui->try_3->setPixmap(QPixmap(path_trys_3));

        ui->table_score->setPixmap(QPixmap("./resurce/table_score"+QString::number(X_scale)+".png"));
    }

}

void Lotery::on_X_down_btn_clicked()
{
    if(X_scale>1)
    {
        X_scale--;
        QString path = "./resurce/number/gold/";
        path +=QString::number(X_scale) + ".png" ;
        ui->X_table_number->setPixmap(path);

        int trys1 = money/(game_price*X_scale);
        QString trys_str = QString::number(trys1);
        while(!(trys_str.size()==3))
        {
            trys_str = QString::number(0)+trys_str;

            if(trys_str.size()>3)
            {
                trys_str = QString::number(999);
                break;
            }
        }


        QString path_trys_1 = "./resurce/number/gold/";
        path_trys_1+=trys_str[0] + ".png";
        ui->try_1->setPixmap(QPixmap(path_trys_1));

        QString path_trys_2 = "./resurce/number/gold/";
        path_trys_2+=trys_str[1] + ".png";
        ui->try_2->setPixmap(QPixmap(path_trys_2));

        QString path_trys_3 = "./resurce/number/gold/";
        path_trys_3+=trys_str[2] + ".png";
        ui->try_3->setPixmap(QPixmap(path_trys_3));

        ui->table_score->setPixmap(QPixmap("./resurce/table_score"+QString::number(X_scale)+".png"));
    }
}
void Lotery::anim_slot()
{
    if(anim_id==203)
        anim_id =1;


 QString path = "./resurce/an50/" + QString::number(anim_id) +".png";
 ui->movie_anim->setPixmap(path);
anim_id+=2;






}
