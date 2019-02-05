#include "urllineedit.h"
#include<mainapplication.h>


urllineedit::urllineedit(QWidget* parent):
//lineedit(new QLineEdit(this))
leftwid(new QWidget(this))
,webView(new WebView(this))
{
leftwid->setMinimumWidth(1000);
setClearButtonEnabled(true);
setEnabled(true);
}

void urllineedit::setWebView(WebView *webview){
    connect(webview,SIGNAL(urlChanged(QUrl)),this,SLOT(webViewUrlChanged(QUrl)));
    connect(webview,SIGNAL(iconChanged()),this,SLOT(webViewIconChanged()));
    connect(webview,SIGNAL(loadFinished(bool)),this,SLOT(webViewIconChanged()));
}
void urllineedit::webViewUrlChanged(const QUrl &url){
setText(QString::fromUtf8(url.toEncoded()));
setCursorPosition(0);
((QStringListModel*)(completer()->model()))->setStringList(MainApplication::History->s);
//lineedit->setText(QString::fromUtf8(url.toEncoded()));

}

void urllineedit::webViewIconChanged(){

}
//void urllineedit::focusInEvent(QFocusEvent *event){
//    lineedit->event(event);
//    QWidget::focusInEvent(event);
//}
//   void urllineedit::focusOutEvent(QFocusEvent *event){
//    lineedit->event(event);
//    QWidget::focusOutEvent(event);
//}
//   void urllineedit::keyPressEvent(QKeyEvent *event){
//    lineedit->event(event);
//}
//   void urllineedit::paintEvent(QPaintEvent *event){
//    //lineedit->event(event);
//}
//   void urllineedit::resizeEvent(QResizeEvent *event){
//    QWidget::resizeEvent(event);
//}
//   void urllineedit::inputMethodEvent(QInputMethodEvent *event){
//    lineedit->event(event);
//}
//   bool urllineedit::event(QEvent *event){
//    //lineedit->event(event);
//       QWidget::event(event);
//}
