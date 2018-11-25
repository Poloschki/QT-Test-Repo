#include "dialog.h"
#include "ui_dialog.h"


dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rect)
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

}

dialog::~dialog()
{
    delete ui;
}

//  Bouton pour l'arbre
void dialog::on_pushButton_pressed()
{
    arbre = new Rectangle(ARBRE);
    scene->addItem(arbre);
}

//  Bouton pour le rocher
void dialog::on_pushButton_2_pressed()
{
    rocher = new Rectangle(ROCHER);
    scene->addItem(rocher);

}
