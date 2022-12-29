#include "widget.h"
#include "./ui_widget.h"
#include <QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //实现图片移动按钮
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        //如果手动调用绘图事件，用update
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent *)
{
//    QPainter painter(this);//this指定绘图设备

//    //设置画笔
//    QPen pen(QColor(250,0,0));
//    //让画家使用🖊
//    pen.setWidth(30);
//    pen.setStyle(Qt::DashLine);
//    painter.setPen(pen);

//    //设置画刷
//    QBrush brush(Qt::cyan);
//    brush.setStyle(Qt::Dense7Pattern);
//    painter.setBrush(brush);


//    //划线
//    painter.drawLine(QPoint(0,0),QPoint(600,100));
//    //画圆 椭圆
//    painter.drawEllipse(QPoint(400,100),100,100);
//    //矩形
//    painter.drawRect(QRect(QPoint(0,0),QPoint(100,100)));
//    painter.drawRect(QRect(20,20,40,50));
//    //画文字
//    painter.drawText(QRect(10,200,150,50),"nihaowoshiyuanxianrui");

    ////////////////////高级
//    QPainter painter(this);
//    painter.drawEllipse(QPoint(100,50),50,50);
//    //设置抗锯齿能力 效率低
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawEllipse(QPoint(200,50),50,50);
//    //矩形
//    painter.drawRect(QRect(20,20,50,50));
//    painter.translate(200,0);//移动画家的位置
//    //保存画家状态
//    painter.save();
//    painter.drawRect(QRect(20,20,50,50));
//    painter.translate(200,0);
//    //还原到上次保存的地方
//    painter.restore();
//    painter.drawRect(QRect(20,20,50,50));

      ////////////////////////利用画家画资源图片
//      QPainter painter(this);
//      move += 20;
//      painter.drawPixmap(move,0,QPixmap(":/8591019.jpg"));

//      //超出屏幕，然后重新到0
//      if(move>this->width())
//      {
//          move = -20;
//      }
}
