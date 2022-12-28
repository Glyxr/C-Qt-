#include "mylabel.h"
#include "QDebug"
#include "QLabel"
#include "QMouseEvent"
myLabel::myLabel(QWidget *parent):QLabel{parent}
{
//设置鼠标追踪
    setMouseTracking(true);
}
void myLabel::enterEvent(QEnterEvent *evnet)
{
    qDebug()<<"鼠标进入";
}
void myLabel::leaveEvent(QEvent*)
{
    qDebug()<<"鼠标退出";
}

void myLabel::mousePressEvent(QMouseEvent *ev)
{
    //当鼠标左键时打印
    if(ev->button() == Qt::LeftButton){
    QString str = QString("鼠标按下了，x = %1,y = %2,global y = %3,global x = %4").arg(ev->x()).arg(ev->y()).arg(ev->globalY()).arg(ev->globalX());
    qDebug()<<str;
    }
}
void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
     qDebug()<<"2";
}
void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
//    if(ev->buttons() & Qt::LeftButton){
     qDebug()<<"3";
//    }
}
