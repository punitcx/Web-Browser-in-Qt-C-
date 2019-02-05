#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <headers.h>

class networkaccessmanager : public QNetworkAccessManager
{
    Q_OBJECT
public:
    explicit networkaccessmanager(QWidget *parent = 0);

signals:

public slots:
public:
    QNetworkAccessManager *NetworkAccessManager;
};

#endif // NETWORKACCESSMANAGER_H
