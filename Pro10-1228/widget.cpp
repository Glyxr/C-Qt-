#include "widget.h"
#include "./ui_widget.h"
#include <QPushButton>
#include <QComboBox>
#include <QMovie>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //栈容器的使用
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    //设置默认值
    ui->stackedWidget->setCurrentIndex(0);
    //下拉框
    ui->comboBox->addItem("111");
    ui->comboBox->addItem("1111");
    ui->comboBox->addItem("112121");
    //
    connect(ui->pushButton,&QPushButton::clicked,[=](){
       ui->comboBox->setCurrentIndex(2);
//       ui->comboBox->setCurrentText("9080");
    });
    //利用QLabel显示图片
    ui->label->setPixmap(QPixmap(":/8591019.jpg") );
    //利用Qlabel显示动图
//    QMovie * movie = new Movie("filename");
//    ui->label->setMovie(movie);
    //播放
//    movie->start();
}

Widget::~Widget()
{
    delete ui;
}

