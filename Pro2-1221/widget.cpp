#include "widget.h"

#include"Teacher.h"
#include"Student.h"
#include"myPushButton.h"
Widget::Widget(QWidget *parent):QWidget(parent)
{
    //初始化老师学生对象
    this->t = new Teacher(this);
    this->s = new Student(this);
    //链接(无参)
//    connect(t,&Teacher::hungry,s,&Student::treat);
//    （有参）
    //解决同名冲突
//    void (Teacher::*teachersignal)(QString) = &Teacher::hungry;
//    void (Student::*Studentslot)(QString) = &Student::treat;
//    connect(t,teachersignal,s,Studentslot);
//    this->classisover("好吃的");
    //先练接在调用
    //点击下课按钮才下课
    //生成一个按钮
    this->btn = new myPushButton;
    btn->setText("下课");
    btn->setParent(this);
    void (Widget::*over)(void) = &Widget::classisover;
//    connect(btn,&QPushButton::clicked,this,&Widget::classisover);
    void (Teacher::*teachersignal)(void) = &Teacher::hungry;
    void (Student::*Studentslot)(void) = &Student::treat;
    connect(t,teachersignal,s,Studentslot);
    connect(btn,&QPushButton::clicked,t,teachersignal);
    //断开信号
    disconnect(btn,&QPushButton::clicked,t,teachersignal);
}
void Widget::classisover()
{
    emit t->hungry("111");
}
//void Widget::classisover(QString q)
//{
//    //调用就代表下课
//    emit t->hungry(q);
//    //emit-调用
//    return;
//}
Widget::~Widget()
{
}

