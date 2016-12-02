#-------------------------------------------------
#
# Project created by QtCreator 2016-10-30T16:11:40
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=gnu++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    testwindow.cpp \
    button1_window.cpp \
    testwindow3.cpp \
    product.cpp \
    inventory.cpp \
    company.cpp \
    store.cpp \
    employee.cpp \
    transaction.cpp \
    form_company.cpp \
    loginwindow.cpp \
    testwindow2.cpp \
    subject.cpp \
    listiterator.cpp \
    list.cpp \
    buttons.cpp

HEADERS  += mainwindow.h \
    testwindow.h \
    testwindow2.h \
    button1_window.h \
    testwindow3.h \
    product.h \
    inventory.h \
    company.h \
    store.h \
    employee.h \
    transaction.h \
    form_company.h \
    loginwindow.h \
    observer.h \
    subject.h \
    iterator.h \
    abstractaggregate.h \
    list.h \
    listiterator.h \
    buttons.h

FORMS    += mainwindow.ui \
    testwindow.ui \
    testwindow2.ui \
    button1_window.ui \
    testwindow3.ui \
    form_company.ui \
    loginwindow.ui
