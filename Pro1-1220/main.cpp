#include "mywidget.h"

#include <QApplication>//应用程序类的头文件`
#include <QLocale>
//#include <QTranslator>

int main(int argc, char *argv[])//argc-命令行变量的数量，argv-命令行变量的数组（键盘，鼠标）
{
    QApplication a(argc, argv);//a应用程序对象，有且必有一个
    //QApplication b;
  /*  QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Pro1-1220_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }*/
    //父类-》Qweight
    myWidget w;
    w.show();
    return a.exec();//让a进入消息循环机制
}
