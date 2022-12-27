#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
using namespace std;
#include <QDebug>
#include <QCheckBox>
#include <QListWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置单选的按钮，男默认选中
    ui->radioButton->setChecked(true);
    //选择nv打印信息
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
       qDebug()<<"111";
//        cout<<"111";
    });
    //信号的参数要大于等于槽函数的参数，并且会把参数传递给槽函数
    //多选按钮 2 选中 1半选中 0未选中
//    connect(ui->cbox,&QCheckBox::stateChanged,[=](int state){

//    });
    //listWidget
    QListWidgetItem *itm = new QListWidgetItem("1");
    ui->listWidget->addItem(itm);
    itm->setTextAlignment(Qt::AlignHCenter);//ALignHCenter
    //QList[QString]
    QStringList list;
    list <<"1"<<"2"<<"3";
//    qDebug()<<list[1];
    ui->listWidget->addItems(list);//无法设置居中

}

MainWindow::~MainWindow()
{
    delete ui;
}

