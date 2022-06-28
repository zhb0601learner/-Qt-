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
        main.cpp \
    mymainwindow.cpp \
    mainwindow.cpp \
    pekinguniveastgate.cpp \
    config.cpp \
    textread.cpp \
    zhongguancun.cpp \
    huilongguan.cpp \
    introdution.cpp \
    haidianhuangzhuang.cpp \
    zhichunlu.cpp \
    wudaokou.cpp \
    xizhimen.cpp \
    dongsi.cpp \
    forestparksouthgate.cpp \
    jishuitan.cpp \
    nanluoguxiang.cpp \
    dongzhimen.cpp \
    dongsishitiao.cpp

HEADERS += \
    mymainwindow.h \
    mainwindow.h \
    config.h \
    pekinguniveastgate.h \
    textread.h \
    zhongguancun.h \
    huilongguan.h \
    introdution.h \
    haidianhuangzhuang.h \
    zhichunlu.h \
    wudaokou.h \
    xizhimen.h \
    dongsi.h \
    forestparksouthgate.h \
    jishuitan.h \
    nanluoguxiang.h \
    dongzhimen.h \
    dongsishitiao.h

FORMS += \
        mymainwindow.ui \
    mainwindow.ui \
    pekinguniveastgate.ui \
    textread.ui \
    zhongguancun.ui \
    huilongguan.ui \
    introdution.ui \
    haidianhuangzhuang.ui \
    zhichunlu.ui \
    wudaokou.ui \
    xizhimen.ui \
    dongsi.ui \
    forestparksouthgate.ui \
    jishuitan.ui \
    nanluoguxiang.ui \
    dongzhimen.ui \
    dongsishitiao.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
