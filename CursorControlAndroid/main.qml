import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {


    id: mainW
    visible: true
    width: maximumWidth
    height: maximumHeight
    color: "silver"
   Rectangle{
        id: mainCircle
        x: mainW.width/4
        y: mainW.height/4
        width: mainW.width/2
        height: mainW.width/2
        radius: width * 0.5
        color: "white"

    }
    Rectangle{
        id:cursorCircle
        x: mainCircle.x + mainCircle.x/2
        y: mainCircle.y + mainCircle.y/2
        width: mainCircle.width/2
        height: mainCircle.height/2
        radius: width * 0.5
        color: "#aaaaaa"

        MouseArea{
            anchors.fill: parent
            drag.target: cursorCircle
            drag.axis: Drag.XAndYAxis
            drag.minimumX: mainCircle.x
            drag.maximumX: cursorCircle.width + mainCircle.x
            drag.minimumY: mainCircle.y
            drag.maximumY: cursorCircle.height + mainCircle.y

            onContainsMouseChanged: {

                console.log(mainW.width/2)
                tcp.setCenterCoordinateX(mainCircle.x + cursorCircle.width/2)
                tcp.setCenterCoordinateY(mainCircle.y + cursorCircle.height/2)
                tcp.setCoordinateX(cursorCircle.x)
                tcp.setCoordinateY(cursorCircle.y)
                tcp.slotServerWrite()
            }
            onDoubleClicked: {
                tcp.setMouseClick("RightMouseB");
            }

            onPressAndHold: {
               tcp.setMouseClick("LeftMouseBt");
            }
          }
    }

}
