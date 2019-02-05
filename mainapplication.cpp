#include "mainapplication.h"


downloadmanager* MainApplication::DownloadManager=0;
myhistory* MainApplication::History=0;
networkaccessmanager* MainApplication::NetworkAccessManager=0;



MainApplication::MainApplication(int argc, char *argv[]):QApplication(argc,argv)
{
QCoreApplication::setApplicationName("Creation");
QCoreApplication::setOrganizationName("P");
QCoreApplication::setApplicationVersion("1.0");
History=new myhistory;
//qcursor
}

MainWindow* MainApplication::newmainwindow(){
    MainWindow *mainwindow=new MainWindow;
    mainwindows.prepend(mainwindow);
    mainwindow->show();
    return mainwindow;
}
downloadmanager* MainApplication::mainDownloadManager(){
    if(!DownloadManager){
        DownloadManager=new downloadmanager();
    }
        return DownloadManager;
}
networkaccessmanager* MainApplication::mainNetworkAccessManager(){
    if(!NetworkAccessManager){
        NetworkAccessManager=new networkaccessmanager;
        QNetworkCookieJar *coj=new QNetworkCookieJar();
        NetworkAccessManager->setCookieJar(coj);
    }
    return NetworkAccessManager;
}
