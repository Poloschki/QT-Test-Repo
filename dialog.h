#ifndef DIALOG_H
#define DIALOG_H

#include <QApplication>
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QDialog>
#include <QtGui>
#include <QtCore>
#include "rectangle.h"
<<<<<<< HEAD
#include "personnages.h"
=======
#include "player.h"
#include "bullet.h"
>>>>>>> 6eba9e97d8357582c4655f38c591939a8b01f6fe
#include <QRect>


namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();
private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;

    Rectangle *arbre;
    Rectangle *rocher;
 //   Personnages *joueur;
  //  Personnages *joueur2;

};

#endif // DIALOG_H
