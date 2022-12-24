#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QDebug>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>//浮动窗口
#include<QTextEdit>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    this->resize(400,600);
    //菜单栏创建(最多只能有一个)
    QMenuBar *bar = menuBar();//自动放入对象树
    //将菜单栏放入到窗口中
    setMenuBar(bar);
    //创建文件菜单
    QMenu *menu1 = bar->addMenu("wenjian");
    QMenu *menu2 = bar->addMenu("caidan");
    //菜单项
//    menu1->addSeparator();
    QAction *act = menu1->addAction("新建");
    menu1->addSeparator();
    menu1->addAction("打开");
    menu1->addSeparator();//分隔符
    menu1->addAction("1");
    menu2->addAction("2");
    //工具栏（可以有多个）
    QToolBar *toolbar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolbar);
    //后期设置只允许左右停靠
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
//    toolbar->setAllowedAreas(Qt::RightToolBarArea);
    //设置浮动
    toolbar->setFloatable(false);
    //设置移动
    toolbar->setMovable(true);
    //工具栏上可以设置内容
    toolbar->addAction("1deuer");
    toolbar->addSeparator();
    toolbar->addAction(act);
    //工具栏中添加控件
    QPushButton *btn1 = new QPushButton("test1",this);
    toolbar->addWidget(btn1);
//    menu1->addWidget(btn1);

    //状态栏，也只能有一个
    QStatusBar *sbar =  statusBar();
    //设置到状态栏中
    setStatusBar(sbar);
//  放标签的框架
    QLabel *label = new QLabel("提示信息",this);
    sbar->addWidget(label);
    //标签从右侧显示
    QLabel *label2 = new QLabel("右侧提示信息",this);
    sbar->addPermanentWidget(label2);
    //铆接部件
    QDockWidget *dock = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dock);
    //设置中心部件只能有一个
    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);
    //设置停靠
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

}

MainWindow::~MainWindow()
{
}

