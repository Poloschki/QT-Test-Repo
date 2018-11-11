#include "rectangle.h"

Rectangle::Rectangle()
{
    Pressed = false;
    setFlag(ItemIsMovable);
}

QRectF Rectangle::boundingRect() const
{
    //position du rectangle couleur Cyan
    return QRect(0,-30,45,45);
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::darkCyan);


    // le rectangle change de couleur lorsqu'on appuie dessus
    if(Pressed)
    {
        brush.setColor(Qt::red);

    }

    painter->fillRect(rec,brush);
    painter->drawRect(rec);



}

void Rectangle::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void Rectangle::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
