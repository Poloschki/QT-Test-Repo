#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
class Bullet : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
    ~Bullet(){ }

public slots:
    void tir();
};

#endif // BULLET_H
