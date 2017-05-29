#ifndef COORDINATES_H
#define COORDINATES_H

#include <QObject>
#include <QDebug>

class Coordinates : public QObject
{
    Q_OBJECT
public:
    explicit Coordinates(QObject *parent = 0);
private:
    int XCoordinate;
    int YCoordinate;
    int XCoordinateCenter;
    int YCoordinateCenter;
    QString MouseClick;
private:
    QString XYnumberOfConversion(int Coordinate);

protected:
    QString getCoordinateX();
    QString getCoordinateY();
    QString getMouseClick();
    void ClearMouseClick();
public slots:
    void setCoordinateX(int x);
    void setCoordinateY(int y);
    void setCenterCoordinateX(int x);
    void setCenterCoordinateY(int y);
    void setMouseClick(QString Click);
};

#endif // COORDINATES_H
