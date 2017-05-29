#ifndef TESTRECEIVEDATA_H
#define TESTRECEIVEDATA_H

#include <QObject>
#include <QtTest>
#include "../../CursorControl/ReceiveData.h"
#include "../../CursorControlAndroid/SendData.h"
#include "../../CursorControlAndroid/Coordinates.h"
#include <QTimer>

class ReceiveDataAnd : public ReceiveData
{
    Q_OBJECT
public:
    explicit ReceiveDataAnd(QObject *parent = 0);

    QString SendDataTest();



};

class testReceiveDataTest :public QObject
{
    Q_OBJECT

public:
    explicit testReceiveDataTest(QObject *parent = 0);
private:
    ReceiveDataAnd *receiveDataAnd;
    SendData *sendData;
    ReceiveData *receiveData;
    Coordinates *coordinates;
private Q_SLOTS:
    void testData();
    void testReceiveData();
};


#endif // TESTRECEIVEDATA_H
