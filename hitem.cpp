#include "hitem.h"

hitem::hitem(QWidget *parent)
{
setFixedHeight(15);

}

void hitem::mouseReleaseEvent(QMouseEvent *event){
    emit clicked();
}
