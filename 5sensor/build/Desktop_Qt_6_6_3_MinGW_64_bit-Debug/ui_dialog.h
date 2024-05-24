/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLCDNumber *rotaryLcdNumber_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *tempLabel_2;
    QLCDNumber *distanceLcdNumber_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLCDNumber *humidityLcdNumber_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLCDNumber *tempLcdNumber_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLCDNumber *photoLcdNumber_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 100, 321, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        rotaryLcdNumber_2 = new QLCDNumber(layoutWidget);
        rotaryLcdNumber_2->setObjectName("rotaryLcdNumber_2");

        horizontalLayout_6->addWidget(rotaryLcdNumber_2);

        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 330, 331, 61));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        tempLabel_2 = new QLabel(layoutWidget_2);
        tempLabel_2->setObjectName("tempLabel_2");

        horizontalLayout_7->addWidget(tempLabel_2);

        distanceLcdNumber_2 = new QLCDNumber(layoutWidget_2);
        distanceLcdNumber_2->setObjectName("distanceLcdNumber_2");

        horizontalLayout_7->addWidget(distanceLcdNumber_2);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 250, 331, 61));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        humidityLcdNumber_2 = new QLCDNumber(layoutWidget_3);
        humidityLcdNumber_2->setObjectName("humidityLcdNumber_2");

        horizontalLayout_8->addWidget(humidityLcdNumber_2);

        layoutWidget_4 = new QWidget(Dialog);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(50, 170, 321, 61));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName("label_7");

        horizontalLayout_9->addWidget(label_7);

        tempLcdNumber_2 = new QLCDNumber(layoutWidget_4);
        tempLcdNumber_2->setObjectName("tempLcdNumber_2");

        horizontalLayout_9->addWidget(tempLcdNumber_2);

        layoutWidget_5 = new QWidget(Dialog);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(50, 30, 327, 55));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        photoLcdNumber_2 = new QLCDNumber(layoutWidget_5);
        photoLcdNumber_2->setObjectName("photoLcdNumber_2");

        horizontalLayout_10->addWidget(photoLcdNumber_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#ff0000;\">Rotary</span></p></body></html>", nullptr));
        tempLabel_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#ff0000;\">Distance</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#ff0000;\">Humidity</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#ff0000;\">Temperature</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#ff0000;\">Photoresistor</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
