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

bool myLabel::event(QEvent *ev)
{
    //如果鼠标按下，再event中做拦截操作
     if(ev->type() == QEvent::MouseButtonPress)
     {
         //静态类型转化
         QMouseEvent *ev1 = static_cast<QMouseEvent *>(ev);
        QString str = QString("Event鼠标按下了，x = %1,y = %2,global y = %3,global x = %4").arg(ev1->x()).arg(ev1->y()).arg(ev1->globalY()).arg(ev1->globalX());
        qDebug()<<str;
        return true;//代表用户自己处理
     }
     //其他事件交给父类处理(默认处理方式)
     return QLabel::event(ev);

}
