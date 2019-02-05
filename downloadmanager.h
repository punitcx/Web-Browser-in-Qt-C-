#ifndef DOWNLOADMANAGER_H
#define DOWNLOADMANAGER_H
#include<headers.h>


class downloaditem:public QWidget
{
Q_OBJECT
signals:
    void statusChanged();

public:
    downloaditem(QNetworkReply *reply = 0, bool requestFileName = false, QWidget *parent = 0);
    bool downloading() const;
    bool downloadedSuccessfully() const;

    QUrl url;
    QNetworkReply *reply;
//ui
    QPushButton *retrybut,*cancelbut,*openbutton;
    QLabel *filenamelabel;
    QProgressBar *myprogress;
public slots:
    void cancel();
    void retry();
    void open();

    void downloadReadyRead();
    void error(QNetworkReply::NetworkError code);
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void metaDataChanged();
    void finished();
    void initialize();

private:
    bool requestfilename;
    qint64 bytesreceived,bytestotal;
    QTime *downloadTime;
};




class downloadmanager:public QDialog
{
Q_OBJECT
public:
    downloadmanager(QWidget *parent = 0);
    int activeDownloads() const;
//ui
    QDialog *Downloads;
    QVBoxLayout *downloadslayout;


public slots:
    void download(const QNetworkRequest &request, bool requestFileName = false);
    void download(const QUrl &url, bool requestFileName = false);
    void handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false);
    void cleanup();

private slots:
    void save() const;

private:
    void addItem(downloaditem *item);
    void updateItemCount();
    void load();

    //QNetworkAccessManager *manager;
    QFileIconProvider *iconProvider;
    QList<downloaditem*> downloaditems;
};

#endif // DOWNLOADMANAGER_H
