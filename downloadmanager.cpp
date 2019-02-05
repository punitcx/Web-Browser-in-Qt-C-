#include "downloadmanager.h"


downloaditem::downloaditem(QNetworkReply *dreply, bool requestFileName, QWidget *parent):QWidget(parent)
,reply(dreply)
,requestfilename(requestFileName)
,bytesreceived(0)
{
    cancelbut=new QPushButton("Cancel");
    openbutton=new QPushButton("Open");
    retrybut=new QPushButton("Retry");
filenamelabel=new QLabel("Requesting Filename..");
myprogress= new QProgressBar;

initialize();
}
void downloaditem::initialize(){

    if(!reply)
        return;
    reply->setParent(this);
    connect(reply,SIGNAL(readyRead()),this,SLOT(downloadReadyRead()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(downloadProgress(qint64,qint64)));
    connect(reply,SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(error(QNetworkReply::NetworkError)));
    connect(reply,SIGNAL(finished()),this,SLOT(finished()));
    connect(reply,SIGNAL(metaDataChanged()),this,SLOT(metaDataChanged()));
    connect(cancelbut,SIGNAL(clicked(bool)),this,SLOT(cancel()));
    connect(retrybut,SIGNAL(clicked(bool)),this,SLOT(retry()));
    connect(openbutton,SIGNAL(clicked(bool)),this,SLOT(open()));
   downloadTime=new QTime();
    myprogress->setValue(50);
    filenamelabel->clear();
    downloadTime->start();

    if(reply->error()!=QNetworkReply::NoError)
    error(reply->error());
    finished();
}

bool downloaditem::downloading() const{

}
bool downloaditem::downloadedSuccessfully() const{

}


void downloaditem::cancel(){

}

void downloaditem::retry(){

}

void downloaditem::open(){

}

void downloaditem::downloadReadyRead(){
filenamelabel->setText("DownloadReadyRead");
}

void downloaditem::error(QNetworkReply::NetworkError code){
QNetworkReply::NetworkError err=code;
    filenamelabel->setText("err");
}

void downloaditem::downloadProgress(qint64 bytesReceived, qint64 bytestotal){
filenamelabel->setText(QString::number(bytesReceived)+"/"+QString::number(bytestotal));
}

void downloaditem::metaDataChanged(){
filenamelabel->setText("metadata");
}

void downloaditem::finished(){

}





downloadmanager::downloadmanager(QWidget *parent):QDialog(parent)
//,manager(MainApplication::mainNetworkAccessManager()->NetworkAccessManager)
{


}

void downloadmanager::download(const QUrl &url, bool requestFileName)

{

    //Downloads=new QDialog;
    downloadslayout=new QVBoxLayout;
    //Downloads->show();
    download(QNetworkRequest(url),requestFileName);
}


void downloadmanager::download(const QNetworkRequest &request, bool requestFileName){
    if(request.url().isEmpty())
        return;
QNetworkAccessManager *manager=new QNetworkAccessManager;
    handleUnsupportedContent(manager->get(request),requestFileName);
}

void downloadmanager::handleUnsupportedContent(QNetworkReply *reply, bool requestFileName ){

    downloaditem *item=new downloaditem(reply,requestFileName,this);
//    downloaditems.prepend(item);
//Downloads->show();
}


void downloadmanager::cleanup(){

}
void downloadmanager::save() const{

}
void downloadmanager::addItem(downloaditem *item){



}

void downloadmanager::updateItemCount(){

}



