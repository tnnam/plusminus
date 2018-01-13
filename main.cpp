#include "plusminus.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plusminus w;
    w.show();

    return a.exec();
}
