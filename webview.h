#ifndef WEBVIEW_H
#define WEBVIEW_H
#include<headers.h>

class WebView : public QWebView
{
Q_OBJECT
public:
    WebView(QWidget* parent=0);
    ~WebView();

signals:
    void bookmark();
    void saveas();
    void print();
    void copyaddress();
    void viewsource();
    void inspectelement();

private slots:
    void contextmenurequested(const QPoint &pos);



};

#endif // WEBVIEW_H
