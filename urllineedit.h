#ifndef URLLINEEDIT_H
#define URLLINEEDIT_H
#include<headers.h>
#include<webview.h>


class urllineedit:public QLineEdit
{
 Q_OBJECT

 public:
    urllineedit(QWidget* parent=0);
    void setWebView(WebView* webview);
    //QLineEdit *lineedit;

protected:
//    void focusInEvent(QFocusEvent *event);
//       void focusOutEvent(QFocusEvent *event);
//       void keyPressEvent(QKeyEvent *event);
//       void paintEvent(QPaintEvent *event);
//       void resizeEvent(QResizeEvent *event);
//       void inputMethodEvent(QInputMethodEvent *event);
//       bool event(QEvent *event);
    WebView* webView;
    QWidget *leftwid;
private slots:
void webViewUrlChanged(const QUrl &url);
void webViewIconChanged();
};


#endif // URLLINEEDIT_H
