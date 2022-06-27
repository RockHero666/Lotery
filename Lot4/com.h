#ifndef COM_H
#define COM_H

#include <QObject>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include <QTimer>


QT_BEGIN_NAMESPACE

QT_END_NAMESPACE

class Com : public QObject
{

    Q_OBJECT





public:
    Com(QObject *parent = nullptr);
    ~Com();
signals:

    void cash(int);




public slots:
    void serialReciever();
    //void pulltime();

private:
    QString st;
     QString result;

    QSerialPort *pSerial;
    int count =0;
    int money_time=0;
    bool  once=1;
 QTimer          *timer;

 QByteArray Cashcode_poll;
 QByteArray CashCode_reset;
   QByteArray Cashcode_enable;
    QByteArray Cashcode_ack;
    int start =0;
    int end = 8;
};
#endif // COM_H
