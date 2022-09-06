#include <QTest>
#include "test_smart.h"
#include "smartq.h"

Test_Smart::Test_Smart(QObject *parent) :
    QObject(parent)
{
}

void Test_Smart::max()
{
    smartq a;
    QCOMPARE(a.max(1,   0), 1);
    QCOMPARE(a.max(-1,  1), 1);
    QCOMPARE(a.max(4,   8), 8);
    QCOMPARE(a.max(0,   0), 0);
    QCOMPARE(a.max(1,   1), 1);
    QCOMPARE(a.max(-10,-5), -5);
}
