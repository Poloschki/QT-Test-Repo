#include "rectangle.h"
/*
 * Classe Rectangle pour crée un objet de type Rectangle
 * Si on ne veut pas utiliser les rectangles prédéfinis de Qt
 * ou si on veut avoir plus d'option sur l'objet (comme le fait qu'il change de couleur
 * lorsqu'on appuie dessus, je n'ai pas testé si ça marche avec les autres
 * Problèmes :
 * - faut générer la mémoire et la destruction des objets qui ne
 * se fait pas tout seul
 *
 */


Rectangle::Rectangle(int obj)
{
    //attributs d'un Rectangle

    Pressed = false; // Utiliser pour lui faire changer de couleur lorsqu'on appuie dessus
    setFlag(ItemIsMovable); // Permet de déplacer librement le rectangle

    //Enregistrement de quel type d'objet il s'agit
    if (obj == ARBRE) objet=ARBRE;
    if (obj == ROCHER)objet= ROCHER;

}

QRectF Rectangle::boundingRect() const
{
    //position (10,10) du Rectangle 45*45
    return QRect(10,10,45,45);
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //création du rectangle 45*45 à la position (10,10)
    QRectF rec = boundingRect();

    //couleur initial, utilisé pour changer en fonction de l'objet
    QBrush brush (Qt::white);

    //couleur de l'intérieur du Rectangle
    if(objet == ROCHER) brush.setColor(Qt::gray);
    if(objet == ARBRE)  brush.setColor(Qt::darkGreen);

    // le rectangle change de couleur lorsqu'on appuie dessus
    if(Pressed)
    {
       brush.setColor(Qt::red);
    }

    //On affiche le Rectangle ici
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
