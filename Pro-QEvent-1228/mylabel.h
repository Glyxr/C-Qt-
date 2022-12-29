#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QEvent>
#include <QLabel>
class myLabel : public QLabel{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);
    //鼠标进入
    void enterEvent(QEnterEvent *);

    void leaveEvent(QEvent*);
    ~myLabel(){}
    virtual void mousePressEvent(QMouseEvent *ev);
    virtual void mouseReleaseEvent(QMouseEvent *ev);
    virtual void mouseMoveEvent(QMouseEvent *ev);
    //通过event事件分发器，拦截鼠标按下事件
    bool event(QEvent *ev);
signals:

};

#endif // MYLABEL_H
