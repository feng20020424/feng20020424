#include "widget.h"
#include "ui_widget.h"
#include<student.h>
#include<teacher.h>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->ls=new Teacher(this);
    this->xs=new Student(this);

//    connect(ls,&Teacher::hungry,xs,&Student::treat);


    void (Teacher::*p_teacher)(QString)=&Teacher::hungry;
    void (Student::*p_student)(QString)=&Student::treat;
    connect(ls,p_teacher,xs,p_student);
    elm();

    QPushButton *bin=new QPushButton("饿了",this);
    this->resize(800,600);

    connect(bin,&QPushButton::click,this,&Widget::elm);

//    void (Teacher::*p_teacher2)(void)=&Teacher::hungry;
//    void (Student::*p_student2)(void)=&Student::treat;
//    connect(ls,p_teacher2,xs,p_student2);

//    connect(bin,&QPushButton::click,ls,p_teacher2);

}

void Widget::elm()
{
    emit ls->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}

