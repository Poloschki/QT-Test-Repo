#include "player.h"

Player::Player()
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

void Player::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
//    case Qt::Key_S:
//        this->~Rectangle();
//        break;
    case Qt::Key_Up:
        if(this->y()-45>-1)
            this->setPos(this->x(),this->y()-45);
        break;
    case Qt::Key_Down:
        if(this->y()+45<654)
            this->setPos(this->x(),this->y()+45);
        break;
    case Qt::Key_Right:
        if(this->x()+45<900)
           this->setPos(this->x()+45,this->y());
        break;
    case Qt::Key_Left:
        if(this->x()-45>-1)
            this->setPos(this->x()-45,this->y());
        break;
    case Qt::Key_Q:
        this->setRotation(rotation()-10);
        break;
    case Qt::Key_D:
        this->setRotation(rotation()+10);
        break;
    case Qt::Key_Z:
        this->tir = true;
        printf("tir\n");
        break;
    default:
        break;
    }

}
