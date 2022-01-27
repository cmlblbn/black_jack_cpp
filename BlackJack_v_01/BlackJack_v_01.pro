QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    card.cpp \
    database.cpp \
    deck.cpp \
    leaderboard.cpp \
    main.cpp \
    mainwindow.cpp \
    playedgame.cpp \
    pod.cpp \
    result.cpp

HEADERS += \
    card.h \
    database.h \
    deck.h \
    leaderboard.h \
    mainwindow.h \
    playedgame.h \
    pod.h \
    result.h

FORMS += \
    leaderboard.ui \
    mainwindow.ui \
    playedgame.ui \
    result.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
