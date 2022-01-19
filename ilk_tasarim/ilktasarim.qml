import QtQuick
import QtQuick.Controls
import UntitledProject1
import QtQuick3D 6.2

Rectangle {
    id: rectangle
    x: 0
    width: Constants.width
    height: Constants.height
    color: "#701120"
    layer.format: ShaderEffectSource.RGBA

    Text {
        width: 76
        height: 112
        text: "pod 2"
        anchors.verticalCenterOffset: -174
        anchors.horizontalCenterOffset: -321
        anchors.centerIn: parent
        font.family: Constants.font.family
    }

    Text {
        id: text1
        x: 473
        y: 310
        width: 131
        height: 16
        text: qsTr("pod 1")
        font.pixelSize: 12
    }

    Text {
        id: text2
        x: 938
        y: 310
        width: 219
        height: 9
        text: qsTr("pod 4")
        font.pixelSize: 12
    }

    Text {
        id: text3
        x: 774
        y: 310
        text: qsTr("pod 3")
        font.pixelSize: 12
    }

    Image {
        id: image
        x: 443
        y: 381
        width: 100
        height: 100
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: image1
        x: 582
        y: 381
        width: 100
        height: 100
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: image2
        x: 739
        y: 381
        width: 100
        height: 100
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: image3
        x: 921
        y: 381
        width: 100
        height: 100
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    Text {
        id: text4
        x: 443
        y: 509
        width: 55
        height: 16
        text: qsTr("score:")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput
        x: 484
        y: 509
        width: 80
        height: 20
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    Text {
        id: text5
        x: 576
        y: 508
        width: 51
        height: 18
        text: qsTr("score:")
        font.pixelSize: 12

        TextInput {
            id: textInput1
            x: 48
            y: 0
            width: 80
            height: 20
            text: qsTr("Text Input")
            font.pixelSize: 12
        }
    }

    Text {
        id: text6
        x: 745
        y: 509
        text: qsTr("score:")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput2
        x: 791
        y: 508
        width: 80
        height: 20
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    Text {
        id: text7
        x: 921
        y: 509
        text: qsTr("score:")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput3
        x: 967
        y: 508
        width: 80
        height: 20
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    RoundButton {
        id: roundButton
        x: 473
        y: 549
        text: "+"
    }

    RoundButton {
        id: roundButton1
        x: 601
        y: 554
        width: 47
        height: 32
        text: "+"
        layer.enabled: false
        layer.format: ShaderEffectSource.RGB
        transformOrigin: Item.Center
    }

    RoundButton {
        id: roundButton2
        x: 774
        y: 554
        text: "+"
    }

    RoundButton {
        id: roundButton3
        x: 955
        y: 549
        text: "+"
    }

    TextArea {
        id: textArea
        x: 484
        y: 652
        width: 182
        height: 191
        color: "#0d0d0d"
        placeholderTextColor: "#99ffffff"
        font.bold: true
        placeholderText: qsTr("Text Area")
    }

    Image {
        id: image4
        x: 725
        y: 652
        width: 154
        height: 191
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    RoundButton {
        id: roundButton4
        x: 991
        y: 669
        text: "+"
    }

    Text {
        id: text8
        x: 1048
        y: 677
        width: 131
        height: 59
        text: qsTr("TAKE CARD")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 1260
        y: 704
        width: 180
        height: 32
        text: qsTr("FINISH GAME")
        font.bold: true
    }

    Button {
        id: button1
        x: 1260
        y: 787
        width: 180
        height: 32
        text: qsTr("LEADERBOARD")
        font.bold: true
    }

    TextInput {
        id: textInput4
        x: 1260
        y: 350
        width: 80
        height: 20
        color: "#000000"
        font.pixelSize: 19
        selectionColor: "#616161"
    }

    Text {
        id: text9
        x: 732
        y: 643
        width: 147
        height: 16
        text: qsTr("NEXT CARD")
        font.pixelSize: 12
    }

    Label {
        id: label
        x: 1252
        y: 324
        width: 70
        height: 20
        text: qsTr("TIME")
    }

    Text {
        id: text10
        x: 1180
        y: 324
        width: 58
        height: 20
        text: qsTr("TIME")
        font.pixelSize: 12
    }
}
