#-------------------------------------------------
#
# Project created by QtCreator 2020-04-06T03:14:46
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = planewar
TEMPLATE = app


SOURCES += main.cpp\
        mainscene.cpp \
    map.cpp \
    heroplane.cpp \
    bullet.cpp \
    enemyplane.cpp \
    bomb.cpp

HEADERS  += mainscene.h \
    config.h \
    map.h \
    heroplane.h \
    bullet.h \
    enemyplane.h \
    bomb.h


