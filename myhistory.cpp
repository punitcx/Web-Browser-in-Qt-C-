#include "myhistory.h"



myhistory::myhistory(QWidget *parent) : QWidget(parent)
{
    layoutitems=new QFormLayout;layoutitems->setSpacing(0);layoutitems->setContentsMargins(0,0,0,0);

}


void myhistory::addhistory(hitem* newh, const QUrl &url, const QString &title){

    newh->setText(QDate::currentDate().toString("dddd,dd MMM yyyy   ")+QTime::currentTime().toString("hh:mm:ss ap")+"         "+title);
    newh->setToolTip(title+"-"+url.toString());
    newh->setObjectName(url.toString());
    layoutitems->addWidget(newh);
    if(!s.contains(url.toString()))
    s<<url.toString();
}
