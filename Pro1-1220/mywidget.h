#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>//父类
//快捷键
//注释 ctrl+/
//运行 ctrl+r
//编译 ctrl+b
//字体缩放 ctrl+鼠标
//查找 ctrl+f
//整行移动 ctrl+shift+上
//帮助文档 F1
//自动对齐 ctrl+i
//同名.cpp和.h之间的切换 F4
class myWidget : public QWidget
{
    Q_OBJECT//宏，允许使用信号和槽的机制

public:
    myWidget(QWidget *parent = nullptr);//构造函数
    ~myWidget();
};
#endif // MYWIDGET_H
