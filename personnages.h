#ifndef PERSONNAGES_H
#define PERSONNAGES_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Personnages : public QGraphicsPixmapItem{
public:
    Personnages();
    void keyPressEvent(QKeyEvent *event);

};

#endif // PERSONNAGES_H
