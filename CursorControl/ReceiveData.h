#ifndef RECEIVEDATAVIABLUETOOTH_H
#define RECEIVEDATAVIABLUETOOTH_H

#include <QObject>
#include <QtNetwork>
#include "DataProcessing.h"
class ReceiveData : public QObject
{
    Q_OBJECT
protected:
    QTcpSocket socket;
    DataProcessing *dataProcessing;
public:
    explicit ReceiveData(QObject *parent = 0);
private:

public slots:
   int connectToHost(QString ipAddress = "192.168.0.102");
   void receiveData();
};

#endif // RECEIVEDATAVIABLUETOOTH_H
