#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;//有且只有一个
//    Widget b;
//    b.show();
    w.show();
    return a.exec();
}
