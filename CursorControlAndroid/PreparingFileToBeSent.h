#ifndef PREPARINGFILETOBESENT_H
#define PREPARINGFILETOBESENT_H

#include "Coordinates.h"
#include <QFile>
#include <QTextStream>
class PreparingFileToBeSent: public Coordinates
{
private:
    QFile CoordinatesCircleFile;
    QTextStream DataCoordinates;
    void CreateFileName();
    void WriteDataToAFile();
protected:
    void CreateFile();
public:
    PreparingFileToBeSent();

};

#endif // PREPARINGFILETOBESENT_H
