import QtQuick 2.4

Item {
    x: 0
    width: 400
    height: 400
    scale: 1
    antialiasing: false

    Image {
        id: image
        x: 38
        y: 8
        width: 325
        height: 100
        fillMode: Image.PreserveAspectFit
        source: "logo_1.png.jpg"
    }

    Text {
        id: text1
        x: 177
        y: 144
        width: 47
        height: 24
        text: qsTr("Login")
        lineHeight: 1
        font.pixelSize: 20
    }

    TextInput {
        id: textInput
        x: 161
        y: 181
        width: 80
        height: 20
        text: qsTr("ID: GOES HERE")
        font.family: "Courier"
        font.pixelSize: 12
    }
}

/*##^## Designer {
    D{i:0;height:400;width:400}
}
 ##^##*/
