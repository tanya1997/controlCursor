#include "PreparingFileToBeSent.h"


PreparingFileToBeSent::PreparingFileToBeSent()
{

}

void PreparingFileToBeSent::CreateFileName()
{
    CoordinatesCircleFile.setFileName("Coordinate.txt");
    CoordinatesCircleFile.open(QIODevice::WriteOnly);
}

void PreparingFileToBeSent::WriteDataToAFile()
{
  //  QTextStream DataCoordinates();
 //   DataCoordinates << getCoordinateX() << endl << getCoordinateY()\
             //       << endl<< getCenterCoordinateX() << endl << getCenterCoordinateY();
   // CoordinatesCircleFile.close();
}

void PreparingFileToBeSent::CreateFile()
{
    CreateFileName();
    WriteDataToAFile();
}


