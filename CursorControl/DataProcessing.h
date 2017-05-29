#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H
#include "MoveTheCursor.h"
#include <QString>
#include <QRegExp>
#include <QDebug>
#include <QTimer>
#include <QObject>

class DataProcessing :public QObject
{
    Q_OBJECT
public:
     explicit DataProcessing(QObject *parent = 0);
private:
    MoveTheCursor *moveTheCursor;
    int XCoordinate;
    int YCoordinate;
    void LineTreatment(QString reciveString);
    int  ObtainingCoordinates(QString PartString);
    void CursorPositionChange();
public:
    int  getXCoordinate();
    int  getYCoordinate();
    void getTheString(QString reciveString);
};

#endif // DATAPROCESSING_H
