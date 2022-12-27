#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTreeWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(600,600);
    //treewidget

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄简介");

    QTreeWidgetItem *item = new QTreeWidgetItem(QStringList()<<"力量");
    //加顶层节点
    ui->treeWidget->addTopLevelItem(item);
    QTreeWidgetItem *item1 = new QTreeWidgetItem(QStringList()<<"智力");
    //加顶层节点
    ui->treeWidget->addTopLevelItem(item1);
    QTreeWidgetItem *item2 = new QTreeWidgetItem(QStringList()<<"敏捷");
    //加顶层节点
    ui->treeWidget->addTopLevelItem(item2);
    //追加层节点
    QTreeWidgetItem *it1 = new QTreeWidgetItem(QStringList()<<"1");
    item->addChild(it1);
    QTreeWidgetItem *it2 = new QTreeWidgetItem(QStringList()<<"1");
    item1->addChild(it2);
    QTreeWidgetItem *it3 = new QTreeWidgetItem(QStringList()<<"1");
    item2->addChild(it3);
    QTreeWidgetItem *it11 = new QTreeWidgetItem(QStringList()<<"11");
    //再添加子节点
    it1->addChild(it11);
//    it1->addChildren(QList()<<it11);
}


MainWindow::~MainWindow()
{
    delete ui;
}

