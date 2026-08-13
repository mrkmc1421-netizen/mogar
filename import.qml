import QtQuick 2.0

Rectangle {
    width: 1920
    height: 1080
    color: "black"

    Column {
        anchors.centerIn: parent

        Text {
            text: "MOGAR SETTINGS"
            color: "white"
            font.pixelSize: 60
        }

        ComboBox {
            id: modeBox
            model: ["OLED", "QLED", "AMOLED"]
            onCurrentTextChanged: {
                console.log("Mode switched to: " + currentText)
            }
        }
    }
}
