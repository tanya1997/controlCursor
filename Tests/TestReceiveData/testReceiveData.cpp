#include "testReceiveData.h"

testReceiveDataTest::testReceiveDataTest(QObject *parent) : QObject(parent)
{
    receiveDataAnd = new ReceiveDataAnd();
    receiveData = new ReceiveData();
    sendData = new SendData();
    coordinates = new Coordinates();
}


void testReceiveDataTest::testData()
{
    receiveData->connectToHost("127.0.0.1");
}

void testReceiveDataTest::testReceiveData()
{
   sendData->setMouseClick("LeftMouseBt");
   sendData->slotServerWrite();
   receiveDataAnd->connectToHost("127.0.0.1");
   QVERIFY (receiveDataAnd->SendDataTest() == "LeftMouseBt");
}

ReceiveDataAnd::ReceiveDataAnd(QObject *parent): ReceiveData(parent)
{

}

QString ReceiveDataAnd::SendDataTest()
{

    return socket.readLine(12);
}
