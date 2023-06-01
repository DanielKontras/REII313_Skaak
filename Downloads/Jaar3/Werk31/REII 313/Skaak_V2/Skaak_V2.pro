QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barrierpiece.cpp \
    bishoppiece.cpp \
    castlepiece.cpp \
    chessgame.cpp \
    chesspiece.cpp \
    horsepiece.cpp \
    kingpiece.cpp \
    main.cpp \
    mainwindow.cpp \
    pionpiece.cpp \
    queenpiece.cpp

HEADERS += \
    barrierpiece.h \
    bishoppiece.h \
    castlepiece.h \
    chessgame.h \
    chesspiece.h \
    horsepiece.h \
    kingpiece.h \
    mainwindow.h \
    pionpiece.h \
    queenpiece.h

FORMS += \
    mainwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
