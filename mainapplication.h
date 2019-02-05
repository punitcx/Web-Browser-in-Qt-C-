#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include<headers.h>
#include<mainwindow.h>
#include<myhistory.h>
#include<downloadmanager.h>
#include<networkaccessmanager.h>







class MainApplication:public QApplication
{
public:
    MainApplication(int argc, char *argv[]);
static MainApplication* mainappobj(){return static_cast<MainApplication*>(QCoreApplication::instance());}
  MainWindow* newmainwindow();
  static myhistory* mainHistory();
  static downloadmanager* mainDownloadManager();
static networkaccessmanager* mainNetworkAccessManager();
public:
    QList<MainWindow*> mainwindows;
    static downloadmanager* DownloadManager;
    static networkaccessmanager* NetworkAccessManager;
    static myhistory* History;

};

#endif // MAINAPPLICATION_H
