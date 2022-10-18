#ifndef MY_PUSHBUTTON_H
#define MY_PUSHBUTTON_H

#include <QPushButton>

class My_PushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit My_PushButton(QWidget *parent = nullptr);
        ~My_PushButton();

signals:

};

#endif // MY_PUSHBUTTON_H
