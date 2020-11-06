#include "mydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mydialog w;
    w.show();
    mydialog dg;
    dg.show();
    return a.exec();
}
