#include "ReceiveData.h"
#include <QHostAddress>
#include <QNetworkProxy>
ReceiveData::ReceiveData(QObject *parent) : QObject(parent)
{
    dataProcessing = new DataProcessing();
    connect(&socket,SIGNAL(readyRead()),this,SLOT(receiveData()));
    connect(&socket,SIGNAL(disconnected()),this,SLOT(connectToHost()));

}

int ReceiveData::connectToHost(QString ipAddress)
{
    while(true)
    {
        socket.connectToHost(ipAddress, 2424);
        if (socket.waitForConnected(2000)) break;
        qDebug()<<"Connect failed";
        qApp->processEvents();
        return 1;
    }
    return 0;
    qDebug()<<"Connected";
}

void ReceiveData::receiveData()
{
   QString Buffer = socket.readLine(12);
   dataProcessing->getTheString(Buffer);
   qDebug() << Buffer;
}
