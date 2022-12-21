#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"Teacher.h"
#include"Student.h"
#include"myPushButton.h"

class Widget : public QWidget
{
    Q_OBJECT
private:
    Teacher *t;
    Student *s;
    myPushButton *btn;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
//    void classisover(QString q = "ni");
    void classisover();
public slots:
//    void over();
};
#endif // WIDGET_H
