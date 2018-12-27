#include "personnages.h"
#include "rectangle.h"


Personnages::Personnages()
{
    int tmpx = this->x();
    int tmpy  = this->y();
    if(this->x()-tmpx  > 0.5)
        tmpx++;
    if(this->y()-tmpy > 0.5)
        tmpy++;
    this->setX(this->x()- tmpx%45);
    this->setY(this->y()- tmpy%45);


}


void Personnages::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        setPixmap(QPixmap(":/images/player.png"));
        if(this->y()-40 >0 )
        this->setPos(this->x(),this->y()-45);
        break;
    case Qt::Key_Down:
        setPixmap(QPixmap(":/images/playerD.png"));
        if(this->y()+45<654)
        this->setPos(this->x(),this->y()+45);
        break;
    case Qt::Key_Right:
        setPixmap(QPixmap(":/images/playerR.png"));
        if(this->x()+45<900)
        this->setPos(this->x()+45,this->y());
        break;
    case Qt::Key_Left:
        setPixmap(QPixmap(":/images/playerL.png"));
        if (this->x()-40 >0)
        this->setPos(this->x()-45,this->y());
        break;
    default:
        break;
    }

}

