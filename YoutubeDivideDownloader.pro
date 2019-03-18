#-------------------------------------------------
#
# Project created by QtCreator 2019-03-12T16:54:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = YoutubeDivideDownloader
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
        mainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    selectwindow.cpp \
    listwidget.cpp \
    YoutubeDownloadLibrary/demo.cpp \
    settingwindow.cpp

HEADERS += \
        mainwindow.h \
    mainwindow.h \
    mainwindow.h \
    mainwindow.h \
    selectwindow.h \
    listwidget.h \
    settingwindow.h

FORMS += \
        mainwindow.ui \
    selectwindow.ui \
    listwidget.ui \
    settingwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    resources/add.png \
    add.png

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/YoutubeDownloadLibrary/release/ -lYouTubeDownloadLibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/YoutubeDownloadLibrary/debug/ -lYouTubeDownloadLibrary

INCLUDEPATH += $$PWD/YoutubeDownloadLibrary/debug
DEPENDPATH += $$PWD/YoutubeDownloadLibrary/debug

INCLUDEPATH += $$PWD/YoutubeDownloadLibrary
LIBS += -L$$PWD/-llibeay32
LIBS += -L$$PWD/-lssleay32
LIBS += -L$$PWD/-lYouTubeDownloadLibrary
