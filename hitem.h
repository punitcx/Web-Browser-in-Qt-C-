#ifndef HITEM_H
#define HITEM_H
#include<headers.h>

class hitem:public QLabel{
    Q_OBJECT
public:
    hitem(QWidget *parent=0);
signals:
    void clicked();
protected:
    void mouseReleaseEvent(QMouseEvent* event);
    void enterEvent(QEvent *ev) override
       {
           setStyleSheet("QLabel { background-color : lightgray; }");
       }

       void leaveEvent(QEvent *ev) override
       {
           setStyleSheet("QLabel { background-color : normal; }");
       }
};

#endif // HITEM_H
