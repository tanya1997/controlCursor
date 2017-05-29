#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T09:43:40
#
#-------------------------------------------------

QT       += testlib

QT += core
QT += gui
QT += network

TARGET = tst_testreceivedatatest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += \
    ../../CursorControl/ReceiveData.cpp \
    ../../CursorControl/DataProcessing.cpp \
    ../../CursorControl/MoveTheCursor.cpp \
    main.cpp \
    testReceiveData.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../../CursorControl/ReceiveData.h \
    ../../CursorControl/DataProcessing.h \
    ../../CursorControl/MoveTheCursor.h \
    testReceiveData.h
#DESTDIR = ../../../
