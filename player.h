#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include "bullet.h"

class Personnages : public QGraphicsPixmapItem{
public:
    Personnages();
    void keyPressEvent(QKeyEvent *event);
    bool tir = false;
};

#endif // PLAYER_H
