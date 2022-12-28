#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);
    //QSpinbox动,QSLider动
    void (QSpinBox:: *singal)(int) = &QSpinBox::valueChanged;
    void (QSlider:: *slot)(int) = &QSlider::setValue;
    connect(ui->spinBox,singal,ui->horizontalSlider,slot);
    //反向
    void (QSlider:: *singal1)(int) = &QSlider::valueChanged;
    void (QSpinBox:: *slot1)(int) = &QSpinBox::setValue;
    connect(ui->horizontalSlider,singal1,ui->spinBox,slot1);
}

SmallWidget::~SmallWidget()
{
    delete ui;
}

void SmallWidget::SetNumber(int num)
{
    ui->spinBox->setValue(num);
}

int SmallWidget::GetNumber()
{
    return ui->spinBox->value();
}
