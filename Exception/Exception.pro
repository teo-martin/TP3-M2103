TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -static

SOURCES += \
    Exception.cpp \
    testexception.cpp

HEADERS += \
    exception.h
