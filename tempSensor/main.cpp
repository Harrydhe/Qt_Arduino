#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setFixedSize(433,122);
    w.setWindowTitle("Display Temperature Sensor");
    w.show();
    return a.exec();
}
