#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}
 void Student::treat()
 {
     qDebug()<<"牛逼666";
 }
 void Student::treat(QString foodname)
 {
     qDebug()<<"请老师牛逼"<<foodname.toUtf8().data();
 }
