#ifndef MYHISTORY_H
#define MYHISTORY_H

#include<headers.h>
#include<hitem.h>


class myhistory : public QWidget
{
    Q_OBJECT
public:
    explicit myhistory(QWidget *parent = 0);
QFormLayout *layoutitems;
QStringList s;
void addhistory( hitem *newh,const QUrl &url, const QString &title=QString());

};

#endif // MYHISTORY_H
