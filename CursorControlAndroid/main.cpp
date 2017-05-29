#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "SendData.h"
#include <QQmlContext>
#include "Coordinates.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    Coordinates *modelCoordinates = new Coordinates();
    engine.rootContext()->setContextProperty("coordinates", modelCoordinates);

    SendData *h = new SendData();

    engine.rootContext()->setContextProperty("tcp", h);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
