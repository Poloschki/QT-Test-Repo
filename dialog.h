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
#include "personnages.h"
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
//    Personnages *play1;
//    Personnages *play2;

};

#endif // DIALOG_H
