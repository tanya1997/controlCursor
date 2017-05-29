#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include <../../CursorControl/DataProcessing.h>
#include <../../CursorControl/MoveTheCursor.h>
class TestDataProcessingTest : public QObject
{
    Q_OBJECT

public:
    TestDataProcessingTest();
private:
    DataProcessing *testDataProcessing;

private Q_SLOTS:
    void testObtainingTheNumberOfRowsWhenRowsItContainsCoordinates();
    void testObtainingTheNumberOfRows1();
    void testObtainingTheNumberOfRows2();
    void testObtainingTheNumberOfRows3();
};

TestDataProcessingTest::TestDataProcessingTest()
{
    testDataProcessing = new DataProcessing();
}

void TestDataProcessingTest::testObtainingTheNumberOfRows1()
{
    testDataProcessing->getTheString("X: -80;Y: 90");
    QVERIFY(testDataProcessing->getXCoordinate() == -80);
    QVERIFY(testDataProcessing->getYCoordinate() == 90);
}

void TestDataProcessingTest::testObtainingTheNumberOfRows2()
{
    testDataProcessing->getTheString("X:380;Y:  0");
    QVERIFY(testDataProcessing->getXCoordinate() == 380);
    QVERIFY(testDataProcessing->getYCoordinate() == 0);
}

void TestDataProcessingTest::testObtainingTheNumberOfRows3()
{
    testDataProcessing->getTheString("X:  0;Y:-60");
    QVERIFY(testDataProcessing->getXCoordinate() == 0);
    QVERIFY(testDataProcessing->getYCoordinate() == -60);
}

void TestDataProcessingTest::testObtainingTheNumberOfRowsWhenRowsItContainsCoordinates()
{
    testDataProcessing->getTheString("RightMouseB");
    QVERIFY(testDataProcessing->getXCoordinate() == 0);
    QVERIFY(testDataProcessing->getYCoordinate() == 0);
}

QTEST_MAIN(TestDataProcessingTest)

#include "tst_testdataprocessingtest.moc"
