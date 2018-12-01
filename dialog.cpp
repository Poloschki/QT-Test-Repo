#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //création de graphicsView
    scene = new QGraphicsScene(this);
    //essaie de délimitation de la fenêtre GraphicsView
    ui->graphicsView->setFixedSize(800,600);
    ui->graphicsView->setMaximumSize(800,600);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    ui->graphicsView->setScene(scene);

    //Pour avoir le fond en gris foncé dans QhraphicsView
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::darkGray, Qt::SolidPattern));

//      Comment instancier le rectangle de la classe Rectangle
//    rect  = new Rectangle();       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
//    scene->addItem(rect);
}

Dialog::~Dialog()
{
    delete ui;
}

//  Bouton pour l'arbre
void Dialog::on_pushButton_pressed()
{
    arbre  = new Rectangle(ARBRE);       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
    scene->addItem(arbre);



//    //Donne la couleur à l'intérieur du rectangle : ici vert foncé
//    QBrush greenBrush(Qt::darkGreen); //les arbres/ arbustes
//    //Donne la couleur du conteur du rectangle : ici noir
//    QPen blackpen(Qt::black);          // le contour des rectangles
//    //Donne l'épaisseur du contour
//    blackpen.setWidth(1);

//    // Ajout de 1 "arbre" de 45*45 à la position (45,45)
//        arbre = scene->addRect(45,45,45,45,blackpen,greenBrush);
//     //Pour pouvoir déplacer le rectangle
//        arbre->setFlag(QGraphicsItem::ItemIsMovable);
}

//  Bouton pour le rocher
void Dialog::on_pushButton_2_pressed()
{   //Même fonction que pour la création des arbres sauf que la couleur intérieur est différente

    rocher = new Rectangle(ROCHER);       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
    scene->addItem(rocher);


//    QBrush greyBrush(Qt::gray);       //les rochers
//    QPen blackpen(Qt::black);          // le contour des rectangles
//    blackpen.setWidth(1);

//    // Ajout de 1 "rocher" de 45*45 à la position (0,0)
//        rocher = scene->addRect(0,0,45,45,blackpen,greyBrush);
//        // On peut déplacer le rectangle de type "Rocher"
//        rocher->setFlag(QGraphicsItem::ItemIsMovable);

}
