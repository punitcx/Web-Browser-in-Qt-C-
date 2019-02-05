#-------------------------------------------------
#
# Project created by QtCreator 2017-11-27T02:35:00
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4):QT += webenginewidgets printsupport

TARGET = Aurora
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tabwidget.cpp \
    urllineedit.cpp \
    downloadmanager.cpp \
    mainapplication.cpp \
    networkaccessmanager.cpp \
    myhistory.cpp \
    webview.cpp \
    hitem.cpp

HEADERS  += mainwindow.h \
    tabwidget.h \
    headers.h \
    urllineedit.h \
    downloadmanager.h \
    mainapplication.h \
    networkaccessmanager.h \
    myhistory.h \
    webview.h \
    hitem.h

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
