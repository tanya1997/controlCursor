#include <QString>
#include <QtTest>
#include <QCoreApplication>

class TestReceiveDataTest : public QObject
{
    Q_OBJECT

public:
    TestReceiveDataTest();

private Q_SLOTS:
    void testCase1();
};

TestReceiveDataTest::TestReceiveDataTest()
{
}

void TestReceiveDataTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(TestReceiveDataTest)

#include "tst_testreceivedatatest.moc"
