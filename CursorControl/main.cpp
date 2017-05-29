#include <QCoreApplication>
#include "ReceiveData.h"
#include <QTimer>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ReceiveData h;
    h.connectToHost();
    return a.exec();
}
