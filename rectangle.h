#ifndef RECTANGE_H
#define RECTANGE_H

#include <cstring>
#include <iostream>
#include <string>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QKeyEvent>
#include <QGraphicsItem>
#define ARBRE 1
#define ROCHER 2
//#define JOUEUR1 3
//#define JOUEUR2 4


class Rectangle : public QGraphicsItem
{
public:
    Rectangle();
    Rectangle(int type);
    ~Rectangle(){}
    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem *option,QWidget * widget);
    bool Pressed;
    int typeObj;
    int getX(){ return this->x();}
    int getY(){ return this->y();}
  //  void keyPressEvent(QKeyEvent *event);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // RECTANGE_H
