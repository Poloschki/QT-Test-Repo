#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->fitInView(400,400,300,300);
    ui->graphicsView->setScene(scene);
    //Pour avoir le fond en gris foncé
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::darkGray, Qt::SolidPattern));


    QBrush greenBrush(Qt::darkGreen); //les arbres/ arbustes
    QBrush greyBrush(Qt::gray);       //les rochers
    QPen blackpen(Qt::black);          // le contour des rectangles
    blackpen.setWidth(1);

     rect  = new Rectangle();       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
     scene->addItem(rect);

    // Ajout de 15 "arbres" et 15 "rochers" qu'on peut déplacer
    for(int i =0 ; i<15 ; i++){
        arbre = scene->addRect(-15,25,45,45,blackpen,greenBrush);
        arbre->setFlag(QGraphicsItem::ItemIsMovable);
        rocher = scene->addRect(25,25,45,45,blackpen,greyBrush);
        rocher->setFlag(QGraphicsItem::ItemIsMovable);


    }


}

Dialog::~Dialog()
{
    delete ui;
}


