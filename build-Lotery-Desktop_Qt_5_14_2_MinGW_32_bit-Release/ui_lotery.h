/********************************************************************************
** Form generated from reading UI file 'lotery.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTERY_H
#define UI_LOTERY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lotery
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QLabel *back;
    QLabel *logo;
    QPushButton *luck_btn;
    QGraphicsView *graphicsView;
    QLabel *win_lable;
    QLabel *win_ball_1;
    QLabel *win_ball_2;
    QLabel *win_ball_3;
    QLabel *win_ball_4;
    QLabel *win_ball_5;
    QLabel *win_ball_6;
    QPushButton *win_btn_logo;
    QPushButton *idiot_lock;
    QPushButton *speed;
    QLabel *jack;
    QLabel *money;
    QLabel *exit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *dep_6;
    QLabel *dep_5;
    QLabel *dep_4;
    QLabel *dep_3;
    QLabel *dep_2;
    QLabel *dep_1;
    QLabel *balance;
    QLabel *trys;
    QLabel *trys_logo;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *try_1;
    QLabel *try_2;
    QLabel *try_3;
    QPushButton *exit_btn;
    QLabel *X_table;
    QLabel *X_up;
    QLabel *X_down;
    QLabel *X_table_x;
    QLabel *X_table_number;
    QLabel *Name;
    QPushButton *X_up_btn;
    QPushButton *X_down_btn;
    QLabel *table_score;
    QLabel *player_choes_table;
    QLabel *player_ball_2;
    QLabel *player_ball_1;
    QLabel *player_ball_5;
    QLabel *player_ball_3;
    QLabel *player_ball_4;
    QLabel *player_ball_6;
    QLabel *movie_anim;
    QLabel *win_logo;

    void setupUi(QMainWindow *Lotery)
    {
        if (Lotery->objectName().isEmpty())
            Lotery->setObjectName(QString::fromUtf8("Lotery"));
        Lotery->resize(1280, 1024);
        Lotery->setMinimumSize(QSize(1280, 1024));
        Lotery->setMaximumSize(QSize(1280, 1024));
        Lotery->setStyleSheet(QString::fromUtf8("#Lotery{\n"
"\n"
"border-image: url(\"resurce/fon.jpg\") 0 0 0 0 stretch stretch\n"
"\n"
"}"));
        centralWidget = new QWidget(Lotery);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(757, 340, 434, 434));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(65, 65));
        pushButton->setMaximumSize(QSize(65, 65));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resurce/btn/btn_off_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("resurce/btn/btn_on_1.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(65, 65));
        pushButton->setCheckable(true);
        pushButton->setChecked(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(65, 65));
        pushButton_2->setMaximumSize(QSize(65, 65));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resurce/btn/btn_off_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8("resurce/btn/btn_on_2.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(65, 65));
        pushButton_2->setCheckable(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(65, 65));
        pushButton_3->setMaximumSize(QSize(65, 65));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("resurce/btn/btn_off_3.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8("resurce/btn/btn_on_3.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(65, 65));
        pushButton_3->setCheckable(true);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(65, 65));
        pushButton_4->setMaximumSize(QSize(65, 65));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("resurce/btn/btn_off_4.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8("resurce/btn/btn_on_4.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(65, 65));
        pushButton_4->setCheckable(true);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(65, 65));
        pushButton_5->setMaximumSize(QSize(65, 65));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("resurce/btn/btn_off_5.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8("resurce/btn/btn_on_5.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(65, 65));
        pushButton_5->setCheckable(true);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(65, 65));
        pushButton_6->setMaximumSize(QSize(65, 65));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("resurce/btn/btn_off_6.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8("resurce/btn/btn_on_6.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(65, 65));
        pushButton_6->setCheckable(true);

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(65, 65));
        pushButton_7->setMaximumSize(QSize(65, 65));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("resurce/btn/btn_off_7.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8("resurce/btn/btn_on_7.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_7->setIcon(icon6);
        pushButton_7->setIconSize(QSize(65, 65));
        pushButton_7->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(65, 65));
        pushButton_8->setMaximumSize(QSize(65, 65));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("resurce/btn/btn_off_8.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8("resurce/btn/btn_on_8.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_8->setIcon(icon7);
        pushButton_8->setIconSize(QSize(65, 65));
        pushButton_8->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(65, 65));
        pushButton_9->setMaximumSize(QSize(65, 65));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("resurce/btn/btn_off_9.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8("resurce/btn/btn_on_9.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_9->setIcon(icon8);
        pushButton_9->setIconSize(QSize(65, 65));
        pushButton_9->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(65, 65));
        pushButton_10->setMaximumSize(QSize(65, 65));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("resurce/btn/btn_off_10.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8("resurce/btn/btn_on_10.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_10->setIcon(icon9);
        pushButton_10->setIconSize(QSize(65, 65));
        pushButton_10->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(65, 65));
        pushButton_11->setMaximumSize(QSize(65, 65));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("resurce/btn/btn_off_11.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8("resurce/btn/btn_on_11.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_11->setIcon(icon10);
        pushButton_11->setIconSize(QSize(65, 65));
        pushButton_11->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(65, 65));
        pushButton_12->setMaximumSize(QSize(65, 65));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("resurce/btn/btn_off_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8("resurce/btn/btn_on_12.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_12->setIcon(icon11);
        pushButton_12->setIconSize(QSize(65, 65));
        pushButton_12->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_12);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(65, 65));
        pushButton_13->setMaximumSize(QSize(65, 65));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("resurce/btn/btn_off_13.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon12.addFile(QString::fromUtf8("resurce/btn/btn_on_13.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_13->setIcon(icon12);
        pushButton_13->setIconSize(QSize(65, 65));
        pushButton_13->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(verticalLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(65, 65));
        pushButton_14->setMaximumSize(QSize(65, 65));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("resurce/btn/btn_off_14.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon13.addFile(QString::fromUtf8("resurce/btn/btn_on_14.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_14->setIcon(icon13);
        pushButton_14->setIconSize(QSize(65, 65));
        pushButton_14->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(verticalLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(65, 65));
        pushButton_15->setMaximumSize(QSize(65, 65));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("resurce/btn/btn_off_15.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon14.addFile(QString::fromUtf8("resurce/btn/btn_on_15.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_15->setIcon(icon14);
        pushButton_15->setIconSize(QSize(65, 65));
        pushButton_15->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(verticalLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(65, 65));
        pushButton_16->setMaximumSize(QSize(65, 65));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("resurce/btn/btn_off_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QString::fromUtf8("resurce/btn/btn_on_16.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_16->setIcon(icon15);
        pushButton_16->setIconSize(QSize(65, 65));
        pushButton_16->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(verticalLayoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(65, 65));
        pushButton_17->setMaximumSize(QSize(65, 65));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("resurce/btn/btn_off_17.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon16.addFile(QString::fromUtf8("resurce/btn/btn_on_17.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_17->setIcon(icon16);
        pushButton_17->setIconSize(QSize(65, 65));
        pushButton_17->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(verticalLayoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(65, 65));
        pushButton_18->setMaximumSize(QSize(65, 65));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("resurce/btn/btn_off_18.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon17.addFile(QString::fromUtf8("resurce/btn/btn_on_18.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_18->setIcon(icon17);
        pushButton_18->setIconSize(QSize(65, 65));
        pushButton_18->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_18);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_19 = new QPushButton(verticalLayoutWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(65, 65));
        pushButton_19->setMaximumSize(QSize(65, 65));
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("resurce/btn/btn_off_19.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon18.addFile(QString::fromUtf8("resurce/btn/btn_on_19.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_19->setIcon(icon18);
        pushButton_19->setIconSize(QSize(65, 65));
        pushButton_19->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(verticalLayoutWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setMinimumSize(QSize(65, 65));
        pushButton_20->setMaximumSize(QSize(65, 65));
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8("resurce/btn/btn_off_20.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QString::fromUtf8("resurce/btn/btn_on_20.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_20->setIcon(icon19);
        pushButton_20->setIconSize(QSize(65, 65));
        pushButton_20->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_20);

        pushButton_21 = new QPushButton(verticalLayoutWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setMinimumSize(QSize(65, 65));
        pushButton_21->setMaximumSize(QSize(65, 65));
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8("resurce/btn/btn_off_21.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon20.addFile(QString::fromUtf8("resurce/btn/btn_on_21.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_21->setIcon(icon20);
        pushButton_21->setIconSize(QSize(65, 65));
        pushButton_21->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(verticalLayoutWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setMinimumSize(QSize(65, 65));
        pushButton_22->setMaximumSize(QSize(65, 65));
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8("resurce/btn/btn_off_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon21.addFile(QString::fromUtf8("resurce/btn/btn_on_22.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_22->setIcon(icon21);
        pushButton_22->setIconSize(QSize(65, 65));
        pushButton_22->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_22);

        pushButton_23 = new QPushButton(verticalLayoutWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setMinimumSize(QSize(65, 65));
        pushButton_23->setMaximumSize(QSize(65, 65));
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8("resurce/btn/btn_off_23.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon22.addFile(QString::fromUtf8("resurce/btn/btn_on_23.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_23->setIcon(icon22);
        pushButton_23->setIconSize(QSize(65, 65));
        pushButton_23->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(verticalLayoutWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setMinimumSize(QSize(65, 65));
        pushButton_24->setMaximumSize(QSize(65, 65));
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8("resurce/btn/btn_off_24.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon23.addFile(QString::fromUtf8("resurce/btn/btn_on_24.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_24->setIcon(icon23);
        pushButton_24->setIconSize(QSize(65, 65));
        pushButton_24->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_24);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_25 = new QPushButton(verticalLayoutWidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setMinimumSize(QSize(65, 65));
        pushButton_25->setMaximumSize(QSize(65, 65));
        pushButton_25->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8("resurce/btn/btn_off_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon24.addFile(QString::fromUtf8("resurce/btn/btn_on_25.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_25->setIcon(icon24);
        pushButton_25->setIconSize(QSize(65, 65));
        pushButton_25->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_25);

        pushButton_26 = new QPushButton(verticalLayoutWidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setMinimumSize(QSize(61, 65));
        pushButton_26->setMaximumSize(QSize(65, 65));
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8("resurce/btn/btn_off_26.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon25.addFile(QString::fromUtf8("resurce/btn/btn_on_26.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_26->setIcon(icon25);
        pushButton_26->setIconSize(QSize(65, 65));
        pushButton_26->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_26);

        pushButton_27 = new QPushButton(verticalLayoutWidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setMinimumSize(QSize(65, 65));
        pushButton_27->setMaximumSize(QSize(65, 65));
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8("resurce/btn/btn_off_27.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon26.addFile(QString::fromUtf8("resurce/btn/btn_on_27.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_27->setIcon(icon26);
        pushButton_27->setIconSize(QSize(65, 65));
        pushButton_27->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_27);

        pushButton_28 = new QPushButton(verticalLayoutWidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setMinimumSize(QSize(65, 65));
        pushButton_28->setMaximumSize(QSize(65, 65));
        pushButton_28->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8("resurce/btn/btn_off_28.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon27.addFile(QString::fromUtf8("resurce/btn/btn_on_28.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_28->setIcon(icon27);
        pushButton_28->setIconSize(QSize(65, 65));
        pushButton_28->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_28);

        pushButton_29 = new QPushButton(verticalLayoutWidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setMinimumSize(QSize(65, 65));
        pushButton_29->setMaximumSize(QSize(65, 65));
        pushButton_29->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8("resurce/btn/btn_off_29.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon28.addFile(QString::fromUtf8("resurce/btn/btn_on_29.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_29->setIcon(icon28);
        pushButton_29->setIconSize(QSize(65, 65));
        pushButton_29->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_29);

        pushButton_30 = new QPushButton(verticalLayoutWidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setMinimumSize(QSize(65, 65));
        pushButton_30->setMaximumSize(QSize(65, 65));
        pushButton_30->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8("resurce/btn/btn_off_30.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon29.addFile(QString::fromUtf8("resurce/btn/btn_on_30.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_30->setIcon(icon29);
        pushButton_30->setIconSize(QSize(65, 65));
        pushButton_30->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_30);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_31 = new QPushButton(verticalLayoutWidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setMinimumSize(QSize(65, 65));
        pushButton_31->setMaximumSize(QSize(65, 65));
        pushButton_31->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8("resurce/btn/btn_off_31.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon30.addFile(QString::fromUtf8("resurce/btn/btn_on_31.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_31->setIcon(icon30);
        pushButton_31->setIconSize(QSize(65, 65));
        pushButton_31->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_31);

        pushButton_32 = new QPushButton(verticalLayoutWidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setMinimumSize(QSize(65, 65));
        pushButton_32->setMaximumSize(QSize(65, 65));
        pushButton_32->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8("resurce/btn/btn_off_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon31.addFile(QString::fromUtf8("resurce/btn/btn_on_32.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_32->setIcon(icon31);
        pushButton_32->setIconSize(QSize(65, 65));
        pushButton_32->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_32);

        pushButton_33 = new QPushButton(verticalLayoutWidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setMinimumSize(QSize(65, 65));
        pushButton_33->setMaximumSize(QSize(65, 65));
        pushButton_33->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8("resurce/btn/btn_off_33.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon32.addFile(QString::fromUtf8("resurce/btn/btn_on_33.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_33->setIcon(icon32);
        pushButton_33->setIconSize(QSize(65, 65));
        pushButton_33->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_33);

        pushButton_34 = new QPushButton(verticalLayoutWidget);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        pushButton_34->setMinimumSize(QSize(61, 65));
        pushButton_34->setMaximumSize(QSize(65, 65));
        pushButton_34->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8("resurce/btn/btn_off_34.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon33.addFile(QString::fromUtf8("resurce/btn/btn_on_34.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_34->setIcon(icon33);
        pushButton_34->setIconSize(QSize(65, 65));
        pushButton_34->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_34);

        pushButton_35 = new QPushButton(verticalLayoutWidget);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        pushButton_35->setMinimumSize(QSize(65, 65));
        pushButton_35->setMaximumSize(QSize(65, 65));
        pushButton_35->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8("resurce/btn/btn_off_35.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon34.addFile(QString::fromUtf8("resurce/btn/btn_on_35.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_35->setIcon(icon34);
        pushButton_35->setIconSize(QSize(65, 65));
        pushButton_35->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_35);

        pushButton_36 = new QPushButton(verticalLayoutWidget);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        pushButton_36->setMinimumSize(QSize(65, 65));
        pushButton_36->setMaximumSize(QSize(65, 65));
        pushButton_36->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8("resurce/btn/btn_off_36.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon35.addFile(QString::fromUtf8("resurce/btn/btn_on_36.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_36->setIcon(icon35);
        pushButton_36->setIconSize(QSize(65, 65));
        pushButton_36->setCheckable(true);

        horizontalLayout_6->addWidget(pushButton_36);


        verticalLayout->addLayout(horizontalLayout_6);

        back = new QLabel(centralWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(749, 270, 455, 571));
        back->setPixmap(QPixmap(QString::fromUtf8("resurce/fon_btn.png")));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(765, 280, 400, 60));
        logo->setPixmap(QPixmap(QString::fromUtf8("resurce/label.png")));
        luck_btn = new QPushButton(centralWidget);
        luck_btn->setObjectName(QString::fromUtf8("luck_btn"));
        luck_btn->setGeometry(QRect(772, 790, 410, 110));
        luck_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8("resurce/btn/random_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        luck_btn->setIcon(icon36);
        luck_btn->setIconSize(QSize(410, 100));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 220, 600, 600));
        win_lable = new QLabel(centralWidget);
        win_lable->setObjectName(QString::fromUtf8("win_lable"));
        win_lable->setGeometry(QRect(74, 795, 561, 110));
        win_lable->setPixmap(QPixmap(QString::fromUtf8("resurce/win_lable.png")));
        win_ball_1 = new QLabel(centralWidget);
        win_ball_1->setObjectName(QString::fromUtf8("win_ball_1"));
        win_ball_1->setGeometry(QRect(90, 810, 75, 75));
        win_ball_1->setMinimumSize(QSize(75, 75));
        win_ball_1->setMaximumSize(QSize(75, 75));
        win_ball_1->setLineWidth(-1);
        win_ball_1->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_1->setScaledContents(true);
        win_ball_2 = new QLabel(centralWidget);
        win_ball_2->setObjectName(QString::fromUtf8("win_ball_2"));
        win_ball_2->setGeometry(QRect(180, 810, 75, 75));
        win_ball_2->setMinimumSize(QSize(75, 75));
        win_ball_2->setMaximumSize(QSize(75, 75));
        win_ball_2->setLineWidth(-1);
        win_ball_2->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_2->setScaledContents(true);
        win_ball_3 = new QLabel(centralWidget);
        win_ball_3->setObjectName(QString::fromUtf8("win_ball_3"));
        win_ball_3->setGeometry(QRect(270, 810, 75, 75));
        win_ball_3->setMinimumSize(QSize(75, 75));
        win_ball_3->setMaximumSize(QSize(75, 75));
        win_ball_3->setLineWidth(-1);
        win_ball_3->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_3->setScaledContents(true);
        win_ball_4 = new QLabel(centralWidget);
        win_ball_4->setObjectName(QString::fromUtf8("win_ball_4"));
        win_ball_4->setGeometry(QRect(360, 810, 75, 75));
        win_ball_4->setMinimumSize(QSize(75, 75));
        win_ball_4->setMaximumSize(QSize(75, 75));
        win_ball_4->setLineWidth(-1);
        win_ball_4->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_4->setScaledContents(true);
        win_ball_5 = new QLabel(centralWidget);
        win_ball_5->setObjectName(QString::fromUtf8("win_ball_5"));
        win_ball_5->setGeometry(QRect(450, 810, 75, 75));
        win_ball_5->setMinimumSize(QSize(75, 75));
        win_ball_5->setMaximumSize(QSize(75, 75));
        win_ball_5->setLineWidth(-1);
        win_ball_5->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_5->setScaledContents(true);
        win_ball_6 = new QLabel(centralWidget);
        win_ball_6->setObjectName(QString::fromUtf8("win_ball_6"));
        win_ball_6->setGeometry(QRect(540, 810, 75, 75));
        win_ball_6->setMinimumSize(QSize(75, 75));
        win_ball_6->setMaximumSize(QSize(75, 75));
        win_ball_6->setLineWidth(-1);
        win_ball_6->setPixmap(QPixmap(QString::fromUtf8("resurce/res/unknown.png")));
        win_ball_6->setScaledContents(true);
        win_btn_logo = new QPushButton(centralWidget);
        win_btn_logo->setObjectName(QString::fromUtf8("win_btn_logo"));
        win_btn_logo->setGeometry(QRect(1111, 1111, 1300, 1024));
        win_btn_logo->setMinimumSize(QSize(1280, 1024));
        win_btn_logo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        win_btn_logo->setIconSize(QSize(0, 0));
        idiot_lock = new QPushButton(centralWidget);
        idiot_lock->setObjectName(QString::fromUtf8("idiot_lock"));
        idiot_lock->setGeometry(QRect(1111, 1111, 1300, 890));
        idiot_lock->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        speed = new QPushButton(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(850, 870, 261, 150));
        speed->setMinimumSize(QSize(150, 150));
        speed->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8("resurce/btn/x10_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        speed->setIcon(icon37);
        speed->setIconSize(QSize(150, 150));
        jack = new QLabel(centralWidget);
        jack->setObjectName(QString::fromUtf8("jack"));
        jack->setGeometry(QRect(370, -70, 571, 341));
        jack->setScaledContents(true);
        money = new QLabel(centralWidget);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(10, 10, 261, 81));
        money->setScaledContents(true);
        exit = new QLabel(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(10, 160, 261, 75));
        exit->setScaledContents(true);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 30, 161, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        dep_6 = new QLabel(horizontalLayoutWidget);
        dep_6->setObjectName(QString::fromUtf8("dep_6"));
        dep_6->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_6);

        dep_5 = new QLabel(horizontalLayoutWidget);
        dep_5->setObjectName(QString::fromUtf8("dep_5"));
        dep_5->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_5);

        dep_4 = new QLabel(horizontalLayoutWidget);
        dep_4->setObjectName(QString::fromUtf8("dep_4"));
        dep_4->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_4);

        dep_3 = new QLabel(horizontalLayoutWidget);
        dep_3->setObjectName(QString::fromUtf8("dep_3"));
        dep_3->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_3);

        dep_2 = new QLabel(horizontalLayoutWidget);
        dep_2->setObjectName(QString::fromUtf8("dep_2"));
        dep_2->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_2);

        dep_1 = new QLabel(horizontalLayoutWidget);
        dep_1->setObjectName(QString::fromUtf8("dep_1"));
        dep_1->setScaledContents(true);

        horizontalLayout_7->addWidget(dep_1);

        balance = new QLabel(centralWidget);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(17, 23, 81, 51));
        balance->setScaledContents(true);
        trys = new QLabel(centralWidget);
        trys->setObjectName(QString::fromUtf8("trys"));
        trys->setGeometry(QRect(-10, 87, 191, 51));
        trys->setScaledContents(true);
        trys_logo = new QLabel(centralWidget);
        trys_logo->setObjectName(QString::fromUtf8("trys_logo"));
        trys_logo->setGeometry(QRect(10, 70, 261, 81));
        trys_logo->setScaledContents(true);
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(190, 90, 71, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        try_1 = new QLabel(horizontalLayoutWidget_2);
        try_1->setObjectName(QString::fromUtf8("try_1"));
        try_1->setScaledContents(true);

        horizontalLayout_8->addWidget(try_1);

        try_2 = new QLabel(horizontalLayoutWidget_2);
        try_2->setObjectName(QString::fromUtf8("try_2"));
        try_2->setScaledContents(true);

        horizontalLayout_8->addWidget(try_2);

        try_3 = new QLabel(horizontalLayoutWidget_2);
        try_3->setObjectName(QString::fromUtf8("try_3"));
        try_3->setScaledContents(true);

        horizontalLayout_8->addWidget(try_3);

        exit_btn = new QPushButton(centralWidget);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setEnabled(true);
        exit_btn->setGeometry(QRect(10, 160, 261, 75));
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        X_table = new QLabel(centralWidget);
        X_table->setObjectName(QString::fromUtf8("X_table"));
        X_table->setGeometry(QRect(294, 55, 51, 51));
        X_table->setScaledContents(true);
        X_up = new QLabel(centralWidget);
        X_up->setObjectName(QString::fromUtf8("X_up"));
        X_up->setGeometry(QRect(294, 20, 51, 31));
        X_up->setScaledContents(true);
        X_down = new QLabel(centralWidget);
        X_down->setObjectName(QString::fromUtf8("X_down"));
        X_down->setGeometry(QRect(294, 110, 51, 31));
        X_down->setScaledContents(true);
        X_table_x = new QLabel(centralWidget);
        X_table_x->setObjectName(QString::fromUtf8("X_table_x"));
        X_table_x->setGeometry(QRect(300, 50, 20, 61));
        X_table_x->setScaledContents(true);
        X_table_number = new QLabel(centralWidget);
        X_table_number->setObjectName(QString::fromUtf8("X_table_number"));
        X_table_number->setGeometry(QRect(320, 60, 20, 41));
        X_table_number->setScaledContents(true);
        Name = new QLabel(centralWidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(0, 1000, 401, 21));
        Name->setScaledContents(true);
        X_up_btn = new QPushButton(centralWidget);
        X_up_btn->setObjectName(QString::fromUtf8("X_up_btn"));
        X_up_btn->setGeometry(QRect(290, 20, 51, 41));
        X_up_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        X_down_btn = new QPushButton(centralWidget);
        X_down_btn->setObjectName(QString::fromUtf8("X_down_btn"));
        X_down_btn->setGeometry(QRect(290, 100, 51, 41));
        X_down_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: transparent;\n"
"}\n"
""));
        table_score = new QLabel(centralWidget);
        table_score->setObjectName(QString::fromUtf8("table_score"));
        table_score->setGeometry(QRect(11111, 11111, 455, 571));
        table_score->setPixmap(QPixmap(QString::fromUtf8("resurce/fon_btn.png")));
        player_choes_table = new QLabel(centralWidget);
        player_choes_table->setObjectName(QString::fromUtf8("player_choes_table"));
        player_choes_table->setGeometry(QRect(11111, 15, 298, 250));
        player_choes_table->setScaledContents(true);
        player_ball_2 = new QLabel(centralWidget);
        player_ball_2->setObjectName(QString::fromUtf8("player_ball_2"));
        player_ball_2->setGeometry(QRect(11111, 25, 75, 75));
        player_ball_2->setScaledContents(true);
        player_ball_1 = new QLabel(centralWidget);
        player_ball_1->setObjectName(QString::fromUtf8("player_ball_1"));
        player_ball_1->setGeometry(QRect(11111, 25, 75, 75));
        player_ball_1->setScaledContents(true);
        player_ball_5 = new QLabel(centralWidget);
        player_ball_5->setObjectName(QString::fromUtf8("player_ball_5"));
        player_ball_5->setGeometry(QRect(11111, 103, 75, 75));
        player_ball_5->setScaledContents(true);
        player_ball_3 = new QLabel(centralWidget);
        player_ball_3->setObjectName(QString::fromUtf8("player_ball_3"));
        player_ball_3->setGeometry(QRect(11111, 25, 75, 75));
        player_ball_3->setScaledContents(true);
        player_ball_4 = new QLabel(centralWidget);
        player_ball_4->setObjectName(QString::fromUtf8("player_ball_4"));
        player_ball_4->setGeometry(QRect(11111, 103, 75, 75));
        player_ball_4->setScaledContents(true);
        player_ball_6 = new QLabel(centralWidget);
        player_ball_6->setObjectName(QString::fromUtf8("player_ball_6"));
        player_ball_6->setGeometry(QRect(11111, 103, 75, 75));
        player_ball_6->setScaledContents(true);
        movie_anim = new QLabel(centralWidget);
        movie_anim->setObjectName(QString::fromUtf8("movie_anim"));
        movie_anim->setGeometry(QRect(111111, 11111, 1280, 1024));
        movie_anim->setScaledContents(false);
        win_logo = new QLabel(centralWidget);
        win_logo->setObjectName(QString::fromUtf8("win_logo"));
        win_logo->setGeometry(QRect(111111, 111111, 1280, 1024));
        win_logo->setScaledContents(true);
        Lotery->setCentralWidget(centralWidget);
        trys_logo->raise();
        money->raise();
        exit->raise();
        jack->raise();
        win_lable->raise();
        back->raise();
        verticalLayoutWidget->raise();
        logo->raise();
        luck_btn->raise();
        graphicsView->raise();
        win_ball_1->raise();
        win_ball_2->raise();
        win_ball_3->raise();
        win_ball_4->raise();
        win_ball_5->raise();
        win_ball_6->raise();
        speed->raise();
        horizontalLayoutWidget->raise();
        balance->raise();
        trys->raise();
        horizontalLayoutWidget_2->raise();
        exit_btn->raise();
        X_table->raise();
        X_up->raise();
        X_down->raise();
        X_table_x->raise();
        X_table_number->raise();
        Name->raise();
        X_up_btn->raise();
        X_down_btn->raise();
        table_score->raise();
        player_choes_table->raise();
        idiot_lock->raise();
        player_ball_2->raise();
        player_ball_1->raise();
        player_ball_5->raise();
        player_ball_3->raise();
        player_ball_4->raise();
        player_ball_6->raise();
        win_logo->raise();
        movie_anim->raise();
        win_btn_logo->raise();

        retranslateUi(Lotery);

        QMetaObject::connectSlotsByName(Lotery);
    } // setupUi

    void retranslateUi(QMainWindow *Lotery)
    {
        Lotery->setWindowTitle(QCoreApplication::translate("Lotery", "Lotery", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        pushButton_23->setText(QString());
        pushButton_24->setText(QString());
        pushButton_25->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        pushButton_30->setText(QString());
        pushButton_31->setText(QString());
        pushButton_32->setText(QString());
        pushButton_33->setText(QString());
        pushButton_34->setText(QString());
        pushButton_35->setText(QString());
        pushButton_36->setText(QString());
        back->setText(QString());
        logo->setText(QString());
        luck_btn->setText(QString());
        win_lable->setText(QString());
        win_ball_1->setText(QString());
        win_ball_2->setText(QString());
        win_ball_3->setText(QString());
        win_ball_4->setText(QString());
        win_ball_5->setText(QString());
        win_ball_6->setText(QString());
        win_btn_logo->setText(QString());
        idiot_lock->setText(QString());
        speed->setText(QString());
        jack->setText(QString());
        money->setText(QString());
        exit->setText(QString());
        dep_6->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        dep_5->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        dep_4->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        dep_3->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        dep_2->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        dep_1->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        balance->setText(QString());
        trys->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        trys_logo->setText(QString());
        try_1->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        try_2->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        try_3->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        exit_btn->setText(QString());
        X_table->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        X_up->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        X_down->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        X_table_x->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        X_table_number->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        Name->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        X_up_btn->setText(QString());
        X_down_btn->setText(QString());
        table_score->setText(QString());
        player_choes_table->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_2->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_1->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_5->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_3->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_4->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        player_ball_6->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        movie_anim->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
        win_logo->setText(QCoreApplication::translate("Lotery", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lotery: public Ui_Lotery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTERY_H
