#include "rectangle.h"
/*
 * Classe Rectangle pour crée un objet de type Rectangle
 * Si on ne veut pas utiliser les rectangles prédéfinis de Qt
 * ou si on veut avoir plus d'option sur l'objet (comme le fait qu'il change de couleur
 * lorsqu'on appuie dessus, je n'ai pas testé si ça marche avec les autres
 * Problèmes :
 * - faut générer la mémoire et la destruction des objets qui ne
 * se fait pas tout seul
 * - Difficile de faire une boucle pour instancier N objet pour
 * qu'ils soient indépendants
 *
 *
 */


Rectangle::Rectangle()
{
    //attributs d'un Rectangle

    Pressed = false; // Utiliser pour lui faire changer de couleur lorsqu'on appuie dessus
    setFlag(ItemIsMovable); // Permet de déplacer librement le rectangle
}

Rectangle::Rectangle(int type)
{
    Pressed = false;
    this->typeObj = type;
    if(type == ROCHER || type == ARBRE)
        setFlag(ItemIsMovable);

}

QRectF Rectangle::boundingRect() const
{
  //  if(this->typeObj==JOUEUR1)  return QRect(0,630,45,45);
 //   if(this->typeObj==JOUEUR2)  return QRect(855,0,45,45);


    //position (10,10) du Rectangle 45*45
    return QRect(0,0,45,45);


}

//void Rectangle::keyPressEvent(QKeyEvent *event)
//{
//    // printf("%d \n",(int)rotation()%360);

//    switch (event->key()) {
//    case Qt::Key_S:
//        this->~Rectangle();
//        break;
//    case Qt::Key_Up:
//        this->setPos(this->x(),this->y()-10);

//        break;
//    case Qt::Key_Down:
//        if(this->y()+45<654)
//            this->setPos(this->x(),this->y()+45);
//        break;
//    case Qt::Key_Right:
//        if(this->x()+45<900)
//           this->setPos(this->x()+45,this->y());
//        break;
//    case Qt::Key_Left:
//        this->setPos(this->x()-10,this->y());
//        break;
//    case Qt::Key_Q:
//        this->setRotation(rotation()-10);
//        break;
//    case Qt::Key_D:
//        this->setRotation(rotation()+10);
//    default:
//        break;
//    }

//}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget * widget)
{
    //création du rectangle 45*45 à la position (10,10)
    QRectF rec = this->boundingRect();
    //couleur de l'intérieur du Rectangle : cyan foncé
    QBrush brush(Qt::white);

    switch (this->typeObj) {
    case ARBRE:
        brush.setColor(Qt::darkGreen);
        break;
     case ROCHER:
        brush.setColor(Qt::darkGray);
        break;
//    case JOUEUR1:
//    case JOUEUR2:
//        brush.setColor(Qt::white);
//        break;
    default:
        break;
    }

    // le rectangle change de couleur lorsqu'on appuie dessus
    if(Pressed)
    {
        if (this->typeObj == ARBRE || this->typeObj == ROCHER)
        {
            brush.setColor(Qt::red);
      //    printf("coordoné x %f, y : %f \n",this->x(),this->y());
        }
     }

   int tmpx = this->x();
   int tmpy  = this->y();
   if(this->x()-tmpx  > 0.5)
       tmpx++;
   if(this->y()-tmpy > 0.5)
       tmpy++;
   this->setX(this->x()- tmpx%45);
   this->setY(this->y()- tmpy%45);
    //On paint le Rectangle ici
    painter->fillRect(rec,brush);
    painter->drawRect(rec);

}

//Récupération des actions de la souris pour le changement de couleur

// Lorsqu'on appuie sur le Rectangle son attribut Pressed devient true
void Rectangle::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

//Lorsqu'on relache la souris
void Rectangle::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
