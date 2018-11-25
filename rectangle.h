#ifndef RECTANGE_H
#define RECTANGE_H

#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QGraphicsItem>
#include <cstring>
#include <iostream>
#include <string>

#define ROCHER 1
#define ARBRE 2

class Rectangle : public QGraphicsItem
{
public:
    Rectangle();
    Rectangle(int i);


    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget * widget);
    bool Pressed;
    int objet;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // RECTANGE_H
