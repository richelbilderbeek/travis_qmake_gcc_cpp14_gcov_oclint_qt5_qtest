#ifndef MY_DIALOG_TEST_H
#define MY_DIALOG_TEST_H

#include <QtTest/QtTest>

class my_dialog_test: public QObject
{
    Q_OBJECT //!OCLINT

private slots:
    //Works locally, but not on travis
    //void close_with_alt_c();

    //Works locally, but not on travis
    //void close_with_alt_f4();
    void close_with_escape();
    void default_construction();
};

#endif // MY_DIALOG_TEST_H
