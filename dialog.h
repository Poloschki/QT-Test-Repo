#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include "rectangle.h"
#include <QRect>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *arbre;
    QGraphicsRectItem *rocher;

    Rectangle *rect;

};

#endif // DIALOG_H
