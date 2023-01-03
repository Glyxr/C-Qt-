#include "widget.h"
#include "./ui_widget.h"
#include <QFile>
#include <QFileDialog>
//#include <QTextCodecl>
#include <QFileInfo>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击选取文件，弹出对话框
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString path = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\27197\\Desktop");
        ui->lineEdit->setText(path);

        //读取内容
        //Qfile 默认utf8//现在可以读取gbk,buyaozai用QTextCodel
        QFile file(path);//要读取文件的路径
        //shezhi打开方式
        file.open(QIODevice::ReadOnly);
//        QByteArray array = file.readAll();
        QByteArray array;
        while(!file.atEnd())
        {
            array += file.readLine();
        }
        //
        ui->textEdit->setText(array);
        //duquGBK
        //编码格式类
//        QTextCodec *code = QTextCodec::codecForname("gbk");
//        ui->textEdit->setText(codec->toUnicode(array));
//       file.close();
       //写文件

//       file.open(QIODevice::Append);
//       file.write("\n");//换行
//       file.write("nihao");
//       file.close();


//        QFileInfo 文件信息类
        QFileInfo info(path);

        qDebug()<<"daxioa"<<info.size()<<"后缀名"<<info.suffix()<<info.filePath();
        qDebug()<<info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
        qDebug()<<info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
    });
}

Widget::~Widget()
{
    delete ui;
}

