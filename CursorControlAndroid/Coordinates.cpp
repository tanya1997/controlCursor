#include "Coordinates.h"


Coordinates::Coordinates(QObject *parent) : QObject(parent)
{

}


void Coordinates::setCoordinateX(int x)
{
    XCoordinate = x - XCoordinateCenter;
}

void Coordinates::setCoordinateY(int y)
{
    YCoordinate = y - YCoordinateCenter;
}

void Coordinates::setCenterCoordinateX(int x)
{
    XCoordinateCenter = x;
}

void Coordinates::setCenterCoordinateY(int y)
{
    YCoordinateCenter = y;
}

void Coordinates::setMouseClick(QString Click)
{
    MouseClick = Click;
}
QString Coordinates::getCoordinateX()
{  
    return XYnumberOfConversion(XCoordinate);
}

QString Coordinates::getCoordinateY()
{
    return XYnumberOfConversion(-YCoordinate);
}

QString Coordinates::getMouseClick()
{
    return MouseClick;
}

void Coordinates::ClearMouseClick()
{
    MouseClick.clear();
}

QString Coordinates::XYnumberOfConversion(int Coordinate)
{
    return  QString("%1").arg(Coordinate,3);
}
