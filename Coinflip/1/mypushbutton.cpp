#include "mypushbutton.h"
#include <QPushButton>
#include <QDebug>
#include <QPropertyAnimation>
Mypushbutton::Mypushbutton(QString normalImg,QString pressImg)
{
    this->normalImgPath = normalImg;
    this->pressImgPath = pressImg;
    QPixmap pix;
    bool ret = pix.load(normalImgPath);
    if(!ret)
    {
        qDebug()<<"error1";
        return;
    }
    //set pix size
    this->setFixedSize(pix.width(),pix.height());

    //set irregular image styles
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));


}

Mypushbutton::~Mypushbutton()
{

}

void Mypushbutton::zoom1()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this,"geometry");
    //设置时间间隔
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

void Mypushbutton::zoom2()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this,"geometry");
    //设置时间间隔
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}


