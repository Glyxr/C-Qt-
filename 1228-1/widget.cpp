#include "widget.h"
#include "ui_widget.h"
#include <QSpinBox>
#include <QSlider>
#include <ui_smallwidget.h>
#include <QPushButton>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        qDebug()<<ui->widget->GetNumber();
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->widget->SetNumber(50);
    });
}
//uic widget.ui -o ui_widget.h
Widget::~Widget()
{
    delete ui;
}
