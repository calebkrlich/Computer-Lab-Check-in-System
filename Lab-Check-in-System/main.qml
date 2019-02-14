import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.4

Window {
    visible: true
    maximumHeight:  400
    maximumWidth: 400
    minimumHeight: 400
    minimumWidth: 400
    width:  400
    height: 400

    title: qsTr("Lab Sign-in Homepage")

    StackView
    {
        id: contentFrame
        anchors {
            top: parent.top
            left: parent.left
        }

        initialItem: "qrc:/HomePageViewForm.ui.qml"
    }
}
