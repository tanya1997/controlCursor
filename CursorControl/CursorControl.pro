QT += core
QT += gui
QT += network

CONFIG += c++11

TARGET = CursorControl
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

#QMAKE_POST_LINK =../../tst_testreceivedatatest.exe

SOURCES += main.cpp \
    MoveTheCursor.cpp \
    ReceiveData.cpp \
    DataProcessing.cpp

HEADERS += \
    MoveTheCursor.h \
    ReceiveData.h \
    DataProcessing.h
