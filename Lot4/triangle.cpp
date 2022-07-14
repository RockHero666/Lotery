#include "triangle.h"
#include<math.h>
#include<QRandomGenerator>

Triangle::Triangle(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
    angle = 0;     // Задаём угол поворота графического объекта
    setRotation(angle);     // Устанавилваем угол поворота графического объекта
    ball_id = ++id; // статическая переменная для выставки пути к шару
    QString path = "./texture/ball_patern"  +QString::number(id) + ".png" ;

   //pm = new QPixmap("./texture/ball.png");
   // pm = new QPixmap();
   // pm->load(path);

    resultImage = new QImage(QSize(70,70), QImage::Format_ARGB32_Premultiplied);
    destinationImage=new QImage(QSize(0,0), QImage::Format_ARGB32_Premultiplied);
    sourceImage=new QImage(QSize(0,0), QImage::Format_ARGB32_Premultiplied);
    mask_of_shadow_Image=new QImage(QSize(0,0), QImage::Format_ARGB32_Premultiplied);
    //effect = new QGraphicsDropShadowEffect();

  //  effect->setBlurRadius(shadow_rad); //Adjust accordingly
       // effect->setOffset(shadow_X,shadow_Y); //Adjust accordingly
      //  this->setGraphicsEffect(effect);
    p= new QPainter();
    p->begin(resultImage);

    loadImage(path, sourceImage);




     loadImage("./texture/mask1_mini.png", destinationImage);
    loadImage("./resurce/mask_of_shadow_Image.png", mask_of_shadow_Image);
    loadImage("./texture/mask_shadow.png", mask_of_shadow_Image);


}

Triangle::~Triangle()
{
}

QRectF Triangle::boundingRect() const
{
    return QRectF(-35,-35,70,70);
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{


    if(!end_menu)
    {
   temp++;
   if((temp+(ball_id*2))%2==0)
        recalculateResult();


    painter->drawImage(QRectF(-35,-35,70,70),*resultImage);

      //  painter->drawImage(QRectF(-35,-35,70,70),*mask_of_shadow_Image);


    }









        Q_UNUSED(option);
        Q_UNUSED(widget);
}


void Triangle::slotPhysTimer()
{

    if(!end_menu)
    {
    if(win_move)
      {
          if(once)
          {

              setPos(0,0);
              setRotation(0);
              x_cord=70;
              y_cord=70;
              once=false;
              setZValue(++prior);
              QString path_s = "./texture/ball_patern_S"  +QString::number(ball_id) + ".png" ;
              sourceImage->load(path_s);
          }

          if(this->y()<=220)
          setPos(mapToParent(0, 3.36));






      }
      else if(!win_move)
      {

        if(once2)
        {
         QString path_s = "./texture/ball_patern"  +QString::number(ball_id) + ".png" ;
         sourceImage->load(path_s);
            once2=false;
        }




          setPos(mapToParent(vectX, vectY)); // РіСЂР°РІРёС‚Р°С†РёСЏ



      ///РљРѕР»РёР·РёСЏ РєСЂСѓРіР°///
      if(sqrt( pow(this->x(),2) + pow(this->y(),2) )+45 > 250) //|| (this->x()>=-43-36 && this->x()<76 )&& this->y()>180-37) // РїСЂРѕРІРµСЂРєР° РЅР° РєРѕР»РёР·РёСЋ С‡РµСЂРµР· РґР»РёРЅСѓ РїСЂСЏРјРѕР№ РѕС‚ С†РµРЅС‚СЂР° РґРѕ РѕР±СЉРµРєС‚Р°
      {



              switch (QRandomGenerator::global()->generate()%5)
              {
              case 0:
              {
                  angle += 36 ;///+ (QRandomGenerator::global()->generate()%140);
                  y_inc=cfg_y_inc+0.25;
                  x_inc=cfg_x_inc+0.0;
                  break;
              case 1:
              {
                  angle += p1 ;///+ (QRandomGenerator::global()->generate()%140);
                  y_inc=cfg_y_inc+0.25;
                  x_inc=cfg_x_inc+0.25;
                  break;
              }
              case 2:
              {
                  angle -= p2 ;//- (QRandomGenerator::global()->generate()%140);
                  y_inc=cfg_y_inc+0.5;
                  x_inc=cfg_x_inc+0.5;
                  break;
              }
              case 3:
              {
                  angle += p3 ;//+ (QRandomGenerator::global()->generate()%140);
                  y_inc=cfg_y_inc+0.35;
                  x_inc=cfg_x_inc+0.35;
                  break;
              }
              case 4:
              {
                  angle -= p4 ;//- (QRandomGenerator::global()->generate()%140);
                  y_inc=cfg_y_inc+0.40;
                  x_inc=cfg_x_inc+0.40;
                  break;
              }
              case 5:
              {
                  angle += p5 ;//+ (QRandomGenerator::global()->generate()%80);
                  y_inc=cfg_y_inc+0.30;
                  x_inc=cfg_x_inc+0.30;
                  break;
              }
              }
              }
              setRotation(angle);




                            this->setY(y_mem);
                            this->setX(x_mem);



                  if(vectY>0)
                  {
                      vectY=-1.5;
                      vectX=1.5;
                  }
                  else
                  {
                      vectY = 1.5;
                      vectX= -1.5;
                  }



      }



      ///////Р±Р»РѕРє РїСЂРѕРєСЂСѓС‚РєРё Р°РЅРёРјР°С†РёРё///////

      x_cord+=x_inc;
      y_cord+=y_inc;

      if(x_cord>= 140||x_cord<=0)
          x_cord=70;

      if(y_cord>=140||y_cord<=0)
          y_cord=70;

      /////////////////////////////////////













      //РџР°РјСЏС‚СЊ//
      x_mem = this->x();// Р·Р°РїРѕРјРёРЅР°РµРј РїРѕР·РёС†РёСЋ РґР»СЏ РІРѕР·РІСЂР°С‚Р° РїСЂРё РєРѕР»РёР·РёРё
      y_mem = this->y();//

      }
    }

  }

  void Triangle::loadImage(const QString &fileName, QImage *image)
  {
      image->load(fileName);

  }

  void Triangle::recalculateResult()
  {




      p->fillRect(resultImage->rect(), Qt::transparent);
      p->setCompositionMode(QPainter::CompositionMode_SourceOver);
      p->drawImage(0, 0, *destinationImage);
      p->setCompositionMode(QPainter::CompositionMode_SourceOut);
      p->drawImage(0, 0, *sourceImage,x_cord,y_cord,weight,height);
//      if(win_move)
//      {
//      p->setCompositionMode(QPainter::CompositionMode_SourceOut);
//      p->drawImage(0, 0, *mask_of_shadow_Image,0,0,weight,height);
//       }
     // p->translate(35,35);
     // p->rotate(1);
     // p->translate(-35,-35);



}
