#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include "rectangle.h"
#include <QRect>

namespace Ui {
    class Rect;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

private:
    Ui::Rect *ui;
    QGraphicsScene *scene;

    Rectangle *arbre;
    Rectangle *rocher;
};

#endif // DIALOG_H
