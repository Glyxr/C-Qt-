#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->actionnew->setIcon(QIcon("C:/Users/27197/Pictures/联想锁屏壁纸/8591019.jpg"));
    ui->actionnew->setIcon(QIcon(":/8591019.jpg"));
    ui->actionopen->setIcon(QIcon(":/8591019.jpg"));
    //点击新建弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,this,[=](){
        //对话框分类，模态对话框，非模态对话框
        //非模态(可以对其他窗口进行操作)
        //模态
//        QDialog dlog(this);//存储在栈
//        dlog.resize(200,100);
//        qDebug()<<"1";
//        dlog.exec();
//        qDebug()<<"2";
//        //模态创建是阻塞的
        //非模态
//        QDialog *dlog2 = new QDialog(this);//存储在堆，防止对话框一闪而过
//        dlog2->resize(200,100);
//        qDebug()<<"1";
//        dlog2->show();
//        dlog2->setAttribute(Qt::WA_DeleteOnClose);//防止dlog一直被生成
//        qDebug()<<"2";
        //消息对话框
//        QMessageBox::critical(this,"critical","错误",(QMessageBox::Ok | QMessageBox::Close ));
//        QMessageBox::information(this,"inform","信息",(QMessageBox::Ok | QMessageBox::Close ));
//        if(QMessageBox::Ok == QMessageBox::question(this,"qus","12",(QMessageBox::Ok | QMessageBox::Close ),QMessageBox::Close))
//        {
//            qDebug()<<"选择的是ok";
//        }
//        QMessageBox::warning(this,"warn","1");
        //其他标准对话框

        //颜色对话框
//        QColor color = QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r = "<<color.red();
        //文件对话框
//        QString str = QFileDialog::getOpenFileName(this,"dakai","C:\\Users\\27197\\Desktop");
//        qDebug()<<str;
        //字体对话框
        bool flag;
        QFont font = QFontDialog::getFont(&flag,QFont("华文彩云",36));
        qDebug()<<"字体"<<font.family().toUtf8().data()<<"字号"<<font.pointSize()<<"是否加粗"<<font.bold()<<"倾斜"<<font.italic();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

