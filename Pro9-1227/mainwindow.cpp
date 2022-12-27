#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //TabelWidget
    //设置列数
    ui->tableWidget->setColumnCount(3);
    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");

    //设置行数
    ui->tableWidget->setRowCount(5);
    //设置正文
//    ui->tableWidget->setItem(0,0,new QTableWidgetItem("yuanxianrui"));
    QStringList list;
    list <<"dwa"<<"dad"<<"1213"<<"13"<<"13e";
    QList<QString> list1;
    list1<<"nanw"<<"nanw"<<"nanw"<<"nanw"<<"nwan";
    for(int i = 0;i<5;i++)
    {
        int count = 0;
        ui->tableWidget->setItem(i,count++,new QTableWidgetItem(list[i]));
        ui->tableWidget->setItem(i,count++,new QTableWidgetItem(list1.at(i)));
        ui->tableWidget->setItem(i,count++,new QTableWidgetItem(QString::number(i+18)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

