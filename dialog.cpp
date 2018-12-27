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
    ui->graphicsView->setFixedSize(910,700);
    ui->graphicsView->setMaximumSize(910,700);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    Player* play1 = new Player();
    play1->setPixmap(QPixmap(":/images/player.png"));
    play1->setX(0);//position initial
    play1->setY(630);//position initial
    scene->addItem(play1);
    play1->setFlag(QGraphicsItem::ItemIsFocusable);
    play1->setFocus();

    Player* play2 = new Player();
    play2->setPixmap(QPixmap(":/images/player.png"));
    play2->setX(855);//position initial
    play2->setY(0);//position initial
    scene->addItem(play2);
    play2->setFlag(QGraphicsItem::ItemIsFocusable);
    play2->setFocus();


    if((play1->tir == false))
    {
        printf("affiche le tir \n");
        Bullet * bullet = new Bullet();
        bullet->setPos(this->x(),this->y());
        scene->addItem(bullet);
    }
    play1->tir= false; play2->tir = false;

//    scene->addItem(joueur);
//    joueur->setFlag(QGraphicsItem::ItemIsFocusable);
//    joueur->setFocus();
  //  scene->addItem(joueur2);



    // Add the vertical lines first, paint them red
    for (int x=0; x<=900; x+=45)
        scene->addLine(x,0,x,675, QPen(Qt::yellow));

    // Now add the horizontal lines, paint them green
    for (int y=0; y<=700; y+=45)
        scene->addLine(0,y,900,y, QPen(Qt::green));

//    joueur = new Personnages();
////    joueur2 = new Personnages(PERSO2);

//    scene->addItem(joueur);
//    joueur->setFlag(QGraphicsItem::ItemIsFocusable);
//    joueur->setFocus();
  //  scene->addItem(joueur2);



    // Add the vertical lines first, paint them red
    for (int x=0; x<=900; x+=45)
        scene->addLine(x,0,x,675, QPen(Qt::yellow));

    // Now add the horizontal lines, paint them green
    for (int y=0; y<=700; y+=45)
        scene->addLine(0,y,900,y, QPen(Qt::green));

    ui->graphicsView->setScene(scene);

    //Pour avoir le fond en gris foncé dans QhraphicsView
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::black, Qt::SolidPattern));

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

    arbre->setFlag(QGraphicsItem::ItemIsFocusable);
    arbre->setFocus();

    printf("affiche le tir \n");
    Bullet * bullet = new Bullet();
    bullet->setPos(this->x(),this->y());
    scene->addItem(bullet);

//    joueur = new Personnages();
////    joueur2 = new Personnages(PERSO2);


//    joueur = new Personnages();
////    joueur2 = new Personnages(PERSO2);

//    scene->addItem(joueur);
//    joueur->setFlag(QGraphicsItem::ItemIsFocusable);
//    joueur->setFocus();

}

//  Bouton pour le rocher
void Dialog::on_pushButton_2_pressed()
{   //Même fonction que pour la création des arbres sauf que la couleur intérieur est différente

    rocher = new Rectangle(ROCHER);       //le rectangle en Cyan foncé qui devient rouge lorsqu'on appuie dessus
    scene->addItem(rocher);

    rocher->setFlag(QGraphicsItem::ItemIsFocusable);
    rocher->setFocus();


}
