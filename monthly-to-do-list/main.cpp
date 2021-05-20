#include "list.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    list w;
    w.show();
    return a.exec();
}
