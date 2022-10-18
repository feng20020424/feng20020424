#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<my_pushbutton.h>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPushButton * bin=new QPushButton;
    bin->setParent(this);
    bin->setText("第一个");

    QPushButton*bin2=new QPushButton("第二个",this);

    bin2->move(100,200);//移动按钮

    bin2->resize(90,30);//设置按钮大小


    resize(500,800);
    setFixedSize(500,300);//固定窗口大小
    setWindowTitle("马牛逼发家录");

    My_PushButton*mybin=new My_PushButton;
    mybin->setParent(this);
    mybin->setText("我的");

    mybin->move(200,100);
    connect(mybin,&QPushButton::clicked,this,&QWidget::close);
}

Widget::~Widget()
{
    qDebug()<<"系统析构的调用";
}

