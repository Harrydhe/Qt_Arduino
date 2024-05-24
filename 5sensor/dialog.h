#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void readSerial();
    void updateTemperature(QString);
    void updateHumidity(QString);
    void updatePhoto(QString);
    void updateRotary(QString);
    void updateDistance(QString);

private:
    Ui::Dialog *ui;

    QSerialPort *arduino;
    static const quint16 arduinoVendorId = 6790;
    static const quint16 arduinoProductId = 29987;
    QByteArray serialData;
    QString serialBuffer;
};
#endif // DIALOG_H
