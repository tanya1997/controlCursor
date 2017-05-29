import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    width: maximumWidth
    height: maximumHeight
    Rectangle{
        id: mainCircle
        x: maximumWidth/4
        y: maximumHeight/4
        width: maximumWidth/2
        height: maximumHeight/2
        radius: 100

    }
    Rectangle{
        id:cursorCircle
        x: mainCircle.x/4
        y: mainCircle.y/4
        width: mainCircle.width/2
        height: mainCircle.height/2
    }

}
