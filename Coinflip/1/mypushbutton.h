#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
class Mypushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Mypushbutton(QString normalImg,QString pressImg = "");

    //成员属性，保证用户传入的默认显示路径，以及按下后显示的图片路径
    QString normalImgPath;
    QString pressImgPath;
    ~Mypushbutton();
    void zoom1();
    void zoom2();
signals:

};

#endif // MYPUSHBUTTON_H
