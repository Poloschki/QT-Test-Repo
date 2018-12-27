#-------------------------------------------------
#
# Project created by QtCreator 2018-11-06T21:01:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graphique
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    rectangle.cpp \
    dialog.cpp \
<<<<<<< HEAD
    personnages.cpp
=======
    player.cpp \
    bullet.cpp
>>>>>>> 6eba9e97d8357582c4655f38c591939a8b01f6fe

HEADERS += \
    rectangle.h \
    dialog.h \
<<<<<<< HEAD
    personnages.h
=======
    player.h \
    bullet.h
>>>>>>> 6eba9e97d8357582c4655f38c591939a8b01f6fe

FORMS += \
        dialog.ui

RESOURCES += \
    res.qrc
