#ifndef RECTANGE_H
#define RECTANGE_H

#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QGraphicsItem>


class Rectangle : public QGraphicsItem
{
public:
    Rectangle();

    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget * widget);
    bool Pressed;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // RECTANGE_H
