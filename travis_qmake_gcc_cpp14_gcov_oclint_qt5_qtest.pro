QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app

# Shared files
SOURCES += my_dialog.cpp
FORMS += my_dialog.ui
HEADERS += my_dialog.h
RESOURCES += travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest.qrc

# Unique files
SOURCES += qtmain.cpp

# C++14
CONFIG += c++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
QMAKE_CXXFLAGS += -std=c++14

# Thanks to Qt
QMAKE_CXXFLAGS += -Wno-unused-variable

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
