#include "mywidget.h"
#include <QPushButton>//按钮

myWidget::myWidget(QWidget *parent):QWidget(parent)//拷贝
{
    QPushButton *btn = new QPushButton;
    //btn->show();//顶层弹出
    btn->setParent(this);//依附显示(对象树)
    btn->setText("Please");//文本，""转化
    //按照矿建显示（限制）
    QPushButton *btn2  = new QPushButton("2",this);
    //移动按钮
    btn2->move(100,200);
    //重置窗口大小
    resize(500,400);
    btn2->resize(30,20);
    //设置窗口标题
    this->setWindowTitle("1");
    //设置固定窗口大小
    this->setFixedSize(500,400);
    //对象树机制，不用担心析构--简化内存回收机制
    //点击please 关闭窗口
    //信号槽的优点，松散耦合（信号发送端和接收端本身没什么关联，通过connect将两端连接器来）
    connect(btn,&QPushButton::clicked,this,&myWidget::close);
    //connect(btn,&QPushButton::clicked,this,&QWidget::close);

}


myWidget::~myWidget()
{

}

