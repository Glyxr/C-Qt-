#include "widget.h"
#include "./ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QPen>
#include <QImage>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    //pixmap绘图设备
//    //做了优化
//    QPixmap pix(300,300);
//    QPainter painter(&pix);
//    pix.fill(Qt::white);
//    painter.setPen(Qt::green);
//    painter.drawEllipse(QPoint(100,100),10,10);
//    //baochun1`
//    pix.save("C:\\Users\\27197\\Desktop\\pix.png");
    //QImage 绘图设备
//    QImage img(300,300,QImage::Format_ARGB32);
//    img.fill(Qt::white);
//    //对每个像素点进行访问

//    QPainter painter(this);
//    painter.setPen(Qt::green);
//    painter.drawEllipse(QPoint(100,100),10,10);
//    //baochun1`
//    img.save("C:\\Users\\27197\\Desktop\\pix1.png");
//      update();
    QPainter painter(this);
    painter.drawEllipse(10,20,20,30);
    painter.drawPixmap(0,0,QPixmap("D:\\qt\\Pro-1220-painterDe\\8591019.jpg"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent * ev)
{
    //修改图片的像素，QImage
    QImage img;
    img.load(":/8591019.jpg");
    QPainter painter(this);
    painter.drawImage(0,0,img);
    //修改像素点
    for(int i = 50;i<=100;i++)
    {
        for(int j = 50;j<=100;j++)
        {
            QRgb value = qRgb(255,0,0);
            img.setPixel(i,j,value);
        }
    }
    painter.drawPixmap(0,0,QPixmap(":/8591019.jpg"));
    painter.drawImage(10,10,img);
    QPainter painter1(this);
    painter1.drawEllipse(10,20,20,30);
}












