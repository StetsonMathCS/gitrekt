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
    wrapper/wrapper.cpp

HEADERS  += mainwindow.h \
    wrapper/wrapper.h \
    global.h

FORMS    += mainwindow.ui
