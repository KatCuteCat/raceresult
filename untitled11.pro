
QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_PSQL
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated
# (the exact warnings depend on your compiler).
# Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000  # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    tables.cpp

HEADERS += \
    connection.h \
    mainwindow.h \
    connection.h \
    tables.h

FORMS += \
    mainwindow.ui \
    tables.ui

RESOURCES += \
    img.qrc \
    img1.qrc

DISTFILES +=
