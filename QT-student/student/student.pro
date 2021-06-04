#-------------------------------------------------
#
# Project created by QtCreator 2021-05-31T14:49:41
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = student
TEMPLATE = app


SOURCES += main.cpp\
        sign.cpp \
    registe.cpp \
    mainwindow.cpp \
    studentBase.cpp

HEADERS  += sign.h \
    registe.h \
    mainwindow.h \
    studentBase.h

FORMS    += sign.ui \
    registe.ui \
    mainwindow.ui

RESOURCES += \
    ico/ico.qrc

RC_ICONS = stu.ico
