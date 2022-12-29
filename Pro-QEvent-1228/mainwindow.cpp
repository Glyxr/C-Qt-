#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //启动定时器
    id_time = startTimer(1000);//单位是毫秒
    id_time1 = startTimer(2000);
    //第二种方法
    QTimer *timer = new QTimer(this);
    //启动定时器
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
        static int num4 = 1;
        ui->label_4->setText(QString::number(num4++));
    });
   //点btn然后暂停计时器
    connect(ui->btn,&QPushButton::clicked,[=](){
        timer->stop();
    });
    //geilabel安装一个事件过滤器
    //步骤一
    ui->label->installEventFilter(this);
    //步骤二，从写过滤器事件
//    bool eventFilter()

}
//uic ().ui -o ui_().h
bool MainWindow::eventFilter(QObject * obj,QEvent * ev)
{
    if(obj == ui->label)
    {
        if(ev->type() == QEvent::MouseButtonPress)
        {
           QMouseEvent *de = static_cast<QMouseEvent *>(ev);
           QString str = QString("filter鼠标按下了，x = %1,y = %2,global y = %3,global x = %4").arg(de->x()).arg(de->y()).arg(de->globalY()).arg(de->globalX());
           qDebug()<<str;
        }

    }
        //qitamorenchuli
//    return QWidget::evnetFilter(obj,ev);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerEvent(QTimerEvent * ev)
{
    if(ev->timerId() == id_time){
    static int num = 1;
    ui->label_2->setText(QString::number(num++));
    }
    if(ev->timerId() == id_time1){
    static int num1 = 1;
    ui->label_3->setText(QString::number(num1 ++));
    }
}

