#include "com.h"
#include<QtDebug>
#include<qmath.h>
#include "windows.h"


Com::Com(QObject *parent)
    : QObject(parent)

{
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Com::serialReciever);


    pSerial = new QSerialPort(this);
    pSerial->setPortName("com3");
    pSerial->setBaudRate(QSerialPort::Baud9600);
    pSerial->setDataBits(QSerialPort::Data8);
    pSerial->setParity(QSerialPort::NoParity);
    pSerial->setStopBits(QSerialPort::OneStop);
    pSerial->setFlowControl(QSerialPort::NoFlowControl);
    pSerial->open(QIODevice::ReadWrite);


    CashCode_reset.resize(6);
    CashCode_reset.append(0x02);
    CashCode_reset.append(0x03);
    CashCode_reset.append(0x06);
    CashCode_reset.append(0x30);
    CashCode_reset.append(0x41);
    CashCode_reset.append(0xB3);


    Cashcode_enable.resize(12);
    Cashcode_enable.append(0x02);
    Cashcode_enable.append(0x03);
    Cashcode_enable.append(0x0C);
    Cashcode_enable.append(0x34);
    Cashcode_enable.append(0xFF);
    Cashcode_enable.append(0xFF);
    Cashcode_enable.append(0xFF);
    Cashcode_enable.append((char)0x00);
    Cashcode_enable.append((char)0x00);
    Cashcode_enable.append((char)0x00);
    Cashcode_enable.append(0xB5);
    Cashcode_enable.append(0xC1);




    Cashcode_poll.resize(6);
    Cashcode_poll.append(0x02);
    Cashcode_poll.append(0x03);
    Cashcode_poll.append(0x06);
    Cashcode_poll.append(0x33);
    Cashcode_poll.append(0xDA);
    Cashcode_poll.append(0x81);



   Cashcode_ack.resize(6);
   Cashcode_ack.append(0x02);
   Cashcode_ack.append(0x03);
   Cashcode_ack.append(0x06);
   Cashcode_ack.append((char)0x00);
   Cashcode_ack.append(0xC2);
   Cashcode_ack.append(0x82);






   pSerial->write(CashCode_reset);
   Sleep(5000);
   pSerial->write(Cashcode_enable);
   Sleep(3000);



    QByteArray ba;
     ba = pSerial->readAll();

    timer->start(150);

}

Com::~Com()
{

   // pSerial->close();
   // delete pSerial;
}

void Com::serialReciever()
{
  //forever
  {


      if(once)
      {
         emit cash(500);


          once=false;
      }







      pSerial->write(Cashcode_poll);
      Sleep(10);

      QByteArray byte_data;
      byte_data = pSerial->readAll();



//      QByteArray byte_data;
//      byte_data.resize(6);

//      if(pSerial->bytesAvailable())
//      {

//          byte_data.append( pSerial->read(1));
//          byte_data.append( pSerial->read(1));
//          byte_data.append( pSerial->read(1));
//          if( (byte_data[0] == (char)0x02) && (byte_data[1] == (char)0x03) )
//          {
//              byte_data.append( pSerial->read(1));
//              byte_data.append( pSerial->read(1));
//              byte_data.append( pSerial->read(1));
//          }

//          if(pSerial->bytesAvailable())
//          {

//              QByteArray ba;
//              ba = pSerial->readAll();
//          }



          // режим ждет купюру ------
       //   if( !(byte_data[3] == (char)0x14))
          //    money_time++;

          // корректно прочитали купюру
          if( byte_data[3] == (char)0x81 )
          {
              pSerial->write(Cashcode_ack);


              if(byte_data[4] == (char)0x02)
              {
                  emit cash(10);
              }
              if(byte_data[4] == (char)0x03)
              {
                  emit cash(50);
              }
              if(byte_data[4] == (char)0x04)
              {
                  emit cash(100);
              }
              if(byte_data[4] == (char)0x05)
              {
                  emit cash(500);
              }
              if(byte_data[4] == (char)0x06)
              {
                  emit cash(1000);
              }
              if(byte_data[4] == (char)0x07)
              {
                  emit cash(5000);
              }







          }
//          else if ((byte_data[3] == (char)0x10) ||
//                   (byte_data [3] == (char)0x11) ||
//                   (byte_data[3] == (char)0x12) ||
//                   (byte_data[3] == (char)0x46) )
//          {

//              pSerial->write(CashCode_reset);
//              Sleep(5000);
//              pSerial->write(Cashcode_enable);
//              Sleep(3000);
//              pSerial->write(Cashcode_poll);
//          }
          else
          {
              QByteArray ba;
              ba = pSerial->readAll();

          }


      }

      pSerial->write(Cashcode_ack);

     // Sleep(150);

      if(money_time==8)
      {
          pSerial->write(CashCode_reset);
          Sleep(5000);
          pSerial->write(Cashcode_enable);
          Sleep(3000);
          pSerial->write(Cashcode_poll);
          money_time=0;
      }



 }
//}
