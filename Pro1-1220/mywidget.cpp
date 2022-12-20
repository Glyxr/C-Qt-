#include "mywidget.h"
#include <QPushButton>//按钮

myWidget::myWidget(QWidget *parent):QWidget(parent)//拷贝
{
    QPushButton *btn = new QPushButton;
    //btn->show();//顶层弹出
    btn->setParent(this);//依附显示
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
}


myWidget::~myWidget()
{

}

