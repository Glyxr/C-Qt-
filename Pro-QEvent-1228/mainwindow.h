#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimerEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timerEvent(QTimerEvent *);//定时器事件
    int id_time;
    int id_time1;
    bool eventFilter(QObject * obj,QEvent * ev);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
