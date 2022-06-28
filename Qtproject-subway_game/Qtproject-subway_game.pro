#-------------------------------------------------
#
# Project created by QtCreator 2022-05-07T17:14:23
#
#-------------------------------------------------

QT       += core gui
QT += widgets
QT +=core
CONFIG+=resources_big
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qtproject-subway_game
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    beijingrailwaystation.cpp \
    fuxingmen.cpp \
        main.cpp \
    mymainwindow.cpp \
    mainwindow.cpp \
    pekinguniveastgate.cpp \
    config.cpp \
    textread.cpp \
    tiananmenwest.cpp \
    xidan.cpp \
    zhongguancun.cpp \
    huilongguan.cpp \
    introdution.cpp \
    haidianhuangzhuang.cpp \
    zhichunlu.cpp \
    wudaokou.cpp \
    xizhimen.cpp

HEADERS += \
    beijingrailwaystation.h \
    fuxingmen.h \
    mymainwindow.h \
    mainwindow.h \
    config.h \
    pekinguniveastgate.h \
    textread.h \
    tiananmenwest.h \
    xidan.h \
    zhongguancun.h \
    huilongguan.h \
    introdution.h \
    haidianhuangzhuang.h \
    zhichunlu.h \
    wudaokou.h \
    xizhimen.h

FORMS += \
    beijingrailwaystation.ui \
    fuxingmen.ui \
        mymainwindow.ui \
    mainwindow.ui \
    pekinguniveastgate.ui \
    textread.ui \
    tiananmenwest.ui \
    xidan.ui \
    zhongguancun.ui \
    huilongguan.ui \
    introdution.ui \
    haidianhuangzhuang.ui \
    zhichunlu.ui \
    wudaokou.ui \
    xizhimen.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
