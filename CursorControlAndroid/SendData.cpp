#include "SendData.h"

SendData::SendData(Coordinates *parent) : Coordinates(parent)
{

    mTcpServer = new QTcpServer(this);

        connect(mTcpServer, &QTcpServer::newConnection, this, &SendData::slotNewConnection);

        if(!mTcpServer->listen(QHostAddress::Any, 2424)){
            qDebug() << "server is not started";
        } else {
            qDebug() << "server is started";
        }
}

void SendData::slotNewConnection()
{
    mTcpSocket = mTcpServer->nextPendingConnection();
    connect(mTcpSocket, &QTcpSocket::connected, this, &SendData::slotServerWrite);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &SendData::slotClientDisconnected);
}

void SendData::slotServerWrite()
{
    qDebug()<< getMouseClick();
    if ((getMouseClick() != "LeftMouseBt")&&(getMouseClick() != "RightMouseB"))
        mTcpSocket->write("X:" +getCoordinateX().toLatin1()+ ";Y:" + getCoordinateY().toLatin1());
    else{
        mTcpSocket->write(getMouseClick().toLatin1());
        ClearMouseClick();
    }
}

void SendData::slotClientDisconnected()
{
    mTcpSocket->disconnect();
}


