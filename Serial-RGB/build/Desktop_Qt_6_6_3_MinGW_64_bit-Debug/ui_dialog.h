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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *red_label;
    QLabel *green_label;
    QLabel *blue_label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QSlider *red_slider;
    QSlider *green_slider;
    QSlider *blue_slider;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *redvaluelabel;
    QLabel *green_value_label;
    QLabel *blue_value_label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(560, 160);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 30, 171, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        red_label = new QLabel(verticalLayoutWidget);
        red_label->setObjectName("red_label");

        verticalLayout_2->addWidget(red_label);

        green_label = new QLabel(verticalLayoutWidget);
        green_label->setObjectName("green_label");

        verticalLayout_2->addWidget(green_label);

        blue_label = new QLabel(verticalLayoutWidget);
        blue_label->setObjectName("blue_label");

        verticalLayout_2->addWidget(blue_label);

        verticalLayoutWidget_2 = new QWidget(Dialog);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(190, 30, 241, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        red_slider = new QSlider(verticalLayoutWidget_2);
        red_slider->setObjectName("red_slider");
        red_slider->setMaximum(255);
        red_slider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(red_slider);

        green_slider = new QSlider(verticalLayoutWidget_2);
        green_slider->setObjectName("green_slider");
        green_slider->setMaximum(255);
        green_slider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(green_slider);

        blue_slider = new QSlider(verticalLayoutWidget_2);
        blue_slider->setObjectName("blue_slider");
        blue_slider->setMaximum(255);
        blue_slider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(blue_slider);

        verticalLayoutWidget_3 = new QWidget(Dialog);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(440, 30, 161, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        redvaluelabel = new QLabel(verticalLayoutWidget_3);
        redvaluelabel->setObjectName("redvaluelabel");

        verticalLayout_4->addWidget(redvaluelabel);

        green_value_label = new QLabel(verticalLayoutWidget_3);
        green_value_label->setObjectName("green_value_label");

        verticalLayout_4->addWidget(green_value_label);

        blue_value_label = new QLabel(verticalLayoutWidget_3);
        blue_value_label->setObjectName("blue_value_label");

        verticalLayout_4->addWidget(blue_value_label);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        red_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt; font-weight:700; color:#f41501;\">Red LED</span></p></body></html>", nullptr));
        green_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt; font-weight:700; color:#52f90b;\">Green LED</span></p></body></html>", nullptr));
        blue_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt; font-weight:700; color:#016cf8;\">Blue LED</span></p></body></html>", nullptr));
        redvaluelabel->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        green_value_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        blue_value_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
