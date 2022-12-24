#include "widget.h"

#include"Teacher.h"
#include"Student.h"
#include"myPushButton.h"
#include <iostream>
#include <QDebug>
#include"window1.h"
using namespace std;
Widget::Widget(QWidget *parent):QWidget(parent)
{
//    Widget b;//
    //初始化老师学生对象
    this->t = new Teacher(this);
    this->s = new Student(this);
    //链接(无参)
//    connect(t,&Teacher::hungry,s,&Student::treat);
//    （有参）
    //解决同名冲突
    void (Teacher::*teachersignal)(QString) = &Teacher::hungry;
    void (Student::*Studentslot)(QString) = &Student::treat;
    connect(t,teachersignal,s,Studentslot);
//    this->classisover();
    //先练接在调用
    //点击下课按钮才下课
    //生成一个按钮
    this->btn = new myPushButton;
    btn->setText("下课");
    btn->setParent(this);
    void (Widget::*over)(void) = &Widget::classisover;
//    connect(btn,&QPushButton::clicked,this,&Widget::classisover);
    /*void (Teacher::*teachersignal)(void) = &Teacher::hungry;
    void (Student::*Studentslot)(void) = &Student::treat*/
    //connect(t,teachersignal,s,Studentslot);
    //connect(btn,&QPushButton::clicked,t,teachersignal);
    //connect(btn,&QPushButton::clicked,this,&Widget::close);
    //断开信号
    //disconnect(btn,&QPushButton::clicked,t,teachersignal);
    //拓展
    //1,信号是可以连接信号的
    //2，一个信号可以连接多个槽函数
    //3,多个信号可以连接同一个槽函数
    //4，信号和槽函数的参数类型需要一一对应
    //5，信号和槽函数的参数数目可以不一致，信号参数多余槽函数
    //Qt4版本以前连接的方式
    connect(t,SIGNAL(hungry()),s,SLOT(treat()));//优点直观，缺点：类型不做检测
//    this->classisover();
//    cout<<"nihao";
    QPushButton *btn2 = new QPushButton("2",this);
    btn2->move(20,40);
    int m = 0;
    //lambda表达式
    [=]() mutable {//mutable 修改拷贝
        m = 10;
        btn->setText("rrrr");
    }();//()调用函数
    //
    int ret = []()->int{return 1000;}();
    //
    this->btn3 = new QPushButton("打开",this);
    btn3->move(100,200);
//    int count = 0;
    connect(btn3,&QPushButton::clicked,this,[=](){
//        this->close();
        //可以调用更多的东西，比如有参槽函数
//        emit t->hungry();
//       btn3->change();
        change();
//        emit t->hungry("haocide");
    });
    btn4 = new QPushButton("close",this);
    btn4->move(400,200);
    connect(btn4,&QPushButton::released,this,[=](){
//     this->close();
        //可以调用更多的东西，比如有参槽函数
        //emit t->hungry();
        btn4->setText("close");
        //emit t->hungry("haocide");
       // win->close();
    });
    connect(btn4,&QPushButton::pressed,this,[=](){
//     this->close();
        //可以调用更多的东西，比如有参槽函数
       // emit t->hungry();
        btn4->setText("open");
        //emit t->hungry("haocide");
        //win->show();
    });
    //打开一个窗口
    win = new window1;
//    win->show();
    win->setWindowTitle("2");
    win->move(1000,300);
    win->resize(200,100);
    //connect(t,SINGAL(),s,SLOT());
}
void Widget::classisover()
{
    emit t->hungry();
}
//void Widget::classisover(QString q)
//{
//    //调用就代表下课
//    emit t->hungry(q);
//    //emit-调用
//    return;
//}
int count1 = 0;
void Widget::change()
{
    if(count1%2 == 0)
    {
        btn3->setText("关闭");
        win->show();
    }
    else
    {
        btn3->setText("打开");
        win->close();
    }
    count1++;
}
Widget::~Widget()
{
}

