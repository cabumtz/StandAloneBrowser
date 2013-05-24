#-------------------------------------------------
#
# Project created by QtCreator 2013-05-19T12:18:46
#
#-------------------------------------------------

QT       += core gui webkit webkitwidgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StandAloneBrowser
TEMPLATE = app


SOURCES += main.cpp\
    mswebview.cpp \
    maindialog.cpp \
    appserverprocess.cpp \
    djangoappserverprocess.cpp \
    browserdialog.cpp \
    mswebpage.cpp

HEADERS  += \
    mswebview.h \
    maindialog.h \
    appserverprocess.h \
    djangoappserverprocess.h \
    browserdialog.h \
    mswebpage.h

FORMS    += \
    mswebview.ui \
    browserdialog.ui

RESOURCES += \
    backgroundImages.qrc
