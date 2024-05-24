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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *button0;
    QPushButton *button45;
    QPushButton *button90;
    QPushButton *button135;
    QPushButton *button180;
    QSlider *verticalSlider;
    QLabel *label;
    QLabel *angle;
    QLabel *label_2;
    QLabel *range;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1275, 617);
        button0 = new QPushButton(Dialog);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(20, 50, 83, 29));
        button45 = new QPushButton(Dialog);
        button45->setObjectName("button45");
        button45->setGeometry(QRect(20, 90, 83, 29));
        button90 = new QPushButton(Dialog);
        button90->setObjectName("button90");
        button90->setGeometry(QRect(20, 130, 83, 29));
        button135 = new QPushButton(Dialog);
        button135->setObjectName("button135");
        button135->setGeometry(QRect(20, 170, 83, 29));
        button180 = new QPushButton(Dialog);
        button180->setObjectName("button180");
        button180->setGeometry(QRect(20, 210, 83, 29));
        verticalSlider = new QSlider(Dialog);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(140, 50, 21, 191));
        verticalSlider->setOrientation(Qt::Vertical);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 250, 61, 31));
        angle = new QLabel(Dialog);
        angle->setObjectName("angle");
        angle->setGeometry(QRect(60, 270, 61, 41));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 320, 71, 31));
        range = new QLabel(Dialog);
        range->setObjectName("range");
        range->setGeometry(QRect(60, 340, 61, 41));
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(180, 54, 1000, 505));
        graphicsView->setMaximumSize(QSize(1000, 515));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        button0->setText(QCoreApplication::translate("Dialog", "180", nullptr));
        button45->setText(QCoreApplication::translate("Dialog", "135", nullptr));
        button90->setText(QCoreApplication::translate("Dialog", "90", nullptr));
        button135->setText(QCoreApplication::translate("Dialog", "45", nullptr));
        button180->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Angle</span></p></body></html>", nullptr));
        angle->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Range</span></p></body></html>", nullptr));
        range->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
