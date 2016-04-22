#-------------------------------------------------
#
# Project created by QtCreator 2016-04-10T17:06:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gitrekt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wrapper.cpp

HEADERS  += mainwindow.h \
    wrapper.h \
    global.h \
    git2.h

FORMS    += mainwindow.ui
