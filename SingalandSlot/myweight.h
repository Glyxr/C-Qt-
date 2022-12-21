#ifndef MYWEIGHT_H
#define MYWEIGHT_H

#include <QMainWindow>

class myWeight : public QMainWindow
{
    Q_OBJECT

public:
    myWeight(QWidget *parent = nullptr);
    ~myWeight();

private:
    Ui::myWeight *ui;
};
#endif // MYWEIGHT_H
