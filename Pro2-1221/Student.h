#ifndef STUDENT_H
#define STUDENT_H
#include<QObject>
class Student:public QObject
{
    Q_OBJECT;
public:
    explicit Student(QObject *parent = nullptr);
    ~Student();
signals:

public slots:
    //公共槽函数，早期必须写在slots中，高版本可以写到public或全局函数
    //返回值 void
    //需要声明，也需要实现
    //可以有参数，可以重载
    void treat();
    void treat(QString foodname);
};

#endif // STUDENT_H
