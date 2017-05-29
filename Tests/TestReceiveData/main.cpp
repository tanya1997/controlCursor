#include <QString>
#include <QtTest>
#include <QtCore>

#include "testReceiveData.h"

#define TEST(C) { \
        C UnitTest; \
        if (QTest::qExec(&UnitTest)) return 1; \
        }

int main()
{
    TEST(testReceiveDataTest);

return 0;
}
