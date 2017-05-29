#ifndef SENDAFILEVIABLUETOOTH_H
#define SENDAFILEVIABLUETOOTH_H

#include <QObject>
#include "PreparingFileToBeSent.h"
#include <QtNetwork>
#include "Coordinates.h"
#include <QDebug>

class SendData: public Coordinates
{
    Q_OBJECT

public:
  explicit SendData(Coordinates *parent = 0);
    void openServer();

private:
    QTcpServer * mTcpServer;
    QTcpSocket * mTcpSocket;

signals:

public slots:
     void slotNewConnection();
     void slotServerWrite();
     void slotClientDisconnected();
};

#endif // SENDAFILEVIABLUETOOTH_H
