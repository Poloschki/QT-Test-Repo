#ifndef RECTANGE_H
#define RECTANGE_H

#include <cstring>
#include <iostream>
#include <string>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QGraphicsItem>
#define ARBRE 1
#define ROCHER 2



class Rectangle : public QGraphicsItem
{
public:
    Rectangle();
    Rectangle(int type);
    ~Rectangle(){}
    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget * widget);
    bool Pressed;
    int typeObj;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // RECTANGE_H
