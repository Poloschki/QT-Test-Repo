#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    //Pour avoir le fond en gris foncé
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::darkGray, Qt::SolidPattern));


//     rect  = new Rectangle();       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
//     scene->addItem(rect);


}

Dialog::~Dialog()
{
    delete ui;
}


//arbre
void Dialog::on_pushButton_pressed()
{

    QBrush greenBrush(Qt::darkGreen); //les arbres/ arbustes
    QPen blackpen(Qt::black);          // le contour des rectangles
    blackpen.setWidth(1);

    // Ajout de 1 "arbre"
        arbre = scene->addRect(45,45,45,45,blackpen,greenBrush);
        arbre->setFlag(QGraphicsItem::ItemIsMovable);

}

//rocher
void Dialog::on_pushButton_2_pressed()
{
    QBrush greyBrush(Qt::gray);       //les rochers
    QPen blackpen(Qt::black);          // le contour des rectangles
    blackpen.setWidth(1);


    // Ajout de 1 "rocher" qu'on peut déplacer
        rocher = scene->addRect(0,0,45,45,blackpen,greyBrush);
        rocher->setFlag(QGraphicsItem::ItemIsMovable);

}
