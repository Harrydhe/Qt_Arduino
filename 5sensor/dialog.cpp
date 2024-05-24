#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tempLcdNumber_2->display("------");
    arduino = new QSerialPort(this);
    serialBuffer = "";

    bool arduinoIsAvailable = false;
    QString arduinoPortName = "COM3";

    // foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
    //     if(serialPortInfo.hasProductIdentifier() && serialPortInfo.hasVendorIdentifier()) {
    //         if(serialPortInfo.productIdentifier() == arduinoProductId && serialPortInfo.vendorIdentifier() == arduinoVendorId) {
    //             arduinoIsAvailable = true;
    //             arduinoPortName = serialPortInfo.portName();
    //         }
    //     }
    // }

    // if(arduinoIsAvailable) {
    qDebug() << "Found the arduino port...\n";
    arduino->setPortName(arduinoPortName);
    arduino->open(QSerialPort::ReadOnly);
    arduino->setBaudRate(QSerialPort::Baud9600);
    arduino->setDataBits(QSerialPort::Data8);
    arduino->setFlowControl(QSerialPort::NoFlowControl);
    arduino->setParity(QSerialPort::NoParity);
    arduino->setStopBits(QSerialPort::OneStop);
    QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readSerial()));
    // } else {
    // qDebug() << "Couldn't find the correct port for the arduino.\n";
    // QMessageBox::information(this, "Serial Port Error", "Couldn't open serial port to arduino.");
    // }
}

Dialog::~Dialog()
{
    if(arduino->isOpen()) {
        arduino->close();
    }
    delete ui;
}

void Dialog::readSerial()
{
    QStringList bufferSplit = serialBuffer.split(",");

    if(bufferSplit.length() < 3) {
        serialData = arduino->readAll();
        serialBuffer = serialBuffer + QString::fromStdString(serialData.toStdString());
        serialData.clear();
    } else {
        serialBuffer = "";
        QStringList serialPrint = bufferSplit[1].split("-");
        QString tempString = serialPrint[0];
        QString humidityString = serialPrint[1];
        QString photoString = serialPrint[2];
        QString rotaryString = serialPrint[3];
        QString distanceString = serialPrint[4];
        tempString = QString::number(tempString.toDouble(), 'g', 4);
        humidityString = QString::number(humidityString.toDouble(), 'g', 4);
        photoString = QString::number(photoString.toDouble(), 'g', 4);
        rotaryString = QString::number(rotaryString.toDouble(), 'g', 4);
        distanceString = QString::number(distanceString.toDouble(), 'g', 4);
        Dialog::updateTemperature(tempString);
        Dialog::updateHumidity(humidityString);
        Dialog::updatePhoto(photoString);
        Dialog::updateRotary(rotaryString);
        Dialog::updateDistance(distanceString);
    }
}

void Dialog::updateTemperature(QString sensorReading)
{
    ui->tempLcdNumber_2->display(sensorReading);
}

void Dialog::updateHumidity(QString sensorReading)
{
    ui->humidityLcdNumber_2->display(sensorReading);
}

void Dialog::updatePhoto(QString sensorReading)
{
    ui->photoLcdNumber_2->display(sensorReading);
}

void Dialog::updateRotary(QString sensorReading)
{
    ui->rotaryLcdNumber_2->display(sensorReading);
}

void Dialog::updateDistance(QString sensorReading)
{
    ui->distanceLcdNumber_2->display(sensorReading);
}
