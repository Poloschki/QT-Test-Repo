#include "bullet.h"

Bullet::Bullet()
{
    this->setRect(0,0,10,30);

    QTimer * timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(tir()));
    timer->start(50);

    timer->stop();

}

void Bullet::tir()
{
    setPos(x(),y()-10);
}
