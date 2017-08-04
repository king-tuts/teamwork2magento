#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T11:06:46
#
#-------------------------------------------------

QT       += core gui
QT       += uitools

CONFIG   += c++11

RC_ICONS = images/appicon.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = teamwork2magento
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    export_obj.cpp \
    preview.cpp

HEADERS  += mainwindow.h \
    export_obj.h \
    preview.h

FORMS    += mainwindow.ui \
    dynamic_ui/tutorial.ui \
    dynamic_ui/dialog.ui \
    preview.ui

RESOURCES += \
    resources.qrc
