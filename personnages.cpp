//#include "personnages.h"


//Personnages::Personnages()
//{
//    this->perso = perso;
//    setFlag(ItemIsMovable);
//}

////QRectF Personnages::boundingPerso() const
////{
////   // if(this->perso==PERSO1)  return QRect(0,630,45,45);
////   // if(this->perso==PERSO2)  return QRect(855,0,45,45);
////    return QRect(855,0,45,45);
////}

//void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget * widget)
//{
//    QRectF perso = QRect(855,0,45,45);

//    //couleur de l'intérieur du Rectangle : cyan foncé
//    QBrush brush(Qt::white);

//    painter->fillRect(perso,brush);
//    painter->drawRect(perso);
//}

//void Personnages::keyPressEvent(QKeyEvent *event)
//{

//    switch (event->key()) {
//    case Qt::Key_Up:
//        this->setPos(this->x(),this->y()-10);
//        break;
//    case Qt::Key_Down:
//        if(this->y()+45<654)
//        this->setPos(this->x(),this->y()+45);
//        break;
//    case Qt::Key_Right:
//        if(this->x()+45<900)
//        this->setPos(this->x()+45,this->y());
//        break;
//    case Qt::Key_Left:
//        this->setPos(this->x()-10,this->y());
//        break;
//    default:
//        break;
//    }

//}

