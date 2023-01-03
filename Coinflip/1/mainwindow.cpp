#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>
#include "mypushbutton.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(320,588);
    this->setWindowIcon(QPixmap(":/'/res/Coin0001.png"));
    this->setWindowTitle("CoinFilp");
    this->setWindowIcon(QPixmap(":/'/res/Coin0001.png"));
    connect(ui->actiontuic,&QAction::triggered,[=](){
        this->close();
    });
    Mypushbutton *btn = new Mypushbutton(":/'/res/MenuSceneStartButton.png");
    btn->setParent(this);
    btn->move(this->width()*0.5-btn->width()*0.5,this->height()*0.7);
    connect(btn,&QPushButton::clicked,[=](){
        //做特效
        btn->zoom1();
        btn->zoom2();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/'/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);//stretch background
    pix.load(":/'/res/Title.png");
//    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(20,30,pix.width(),pix.height(),pix);

}






