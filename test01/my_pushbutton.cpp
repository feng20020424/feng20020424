#include "my_pushbutton.h"
#include<QDebug>
#include<my_pushbutton.h>
My_PushButton::My_PushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"我的按钮类构造调用";
}
My_PushButton::~My_PushButton()
{
    qDebug()<<"我的按钮类析构";
}
