#include "myweight.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWeight w;//有且只有一个
    w.show();
    return a.exec();
}
