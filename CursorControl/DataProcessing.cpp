#include "DataProcessing.h"

DataProcessing::DataProcessing(QObject *parent) : QObject(parent)
{
    XCoordinate = 0;
    YCoordinate = 0;
    moveTheCursor = new MoveTheCursor();
}

void DataProcessing::LineTreatment(QString reciveString)
{
    XCoordinate = ObtainingCoordinates(reciveString.section(';', 0,0));
    YCoordinate = ObtainingCoordinates(reciveString.section(';', 1,1));
    CursorPositionChange();
}

int DataProcessing::ObtainingCoordinates(QString PartString)
{
    return PartString.section(':', 1,1).toInt();
}

int DataProcessing::getXCoordinate()
{
    return XCoordinate;
}

int DataProcessing::getYCoordinate()
{
    return YCoordinate;
}

void DataProcessing::CursorPositionChange()
{
     moveTheCursor->CursorMovement(getXCoordinate(), getYCoordinate());
}

void DataProcessing::getTheString(QString reciveString)
{
    if (reciveString == "RightMouseB")
        moveTheCursor->PressingRightMouseButton();
    else
        if (reciveString == "LeftMouseBt")
                moveTheCursor->PressingLeftMouseButton();
         else
                LineTreatment(reciveString);
}
