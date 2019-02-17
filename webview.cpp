#include "webview.h"

WebView::WebView(QWidget *parent):QWebView(parent)
{

connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(contextmenurequested(QPoint)));
setContextMenuPolicy(Qt::CustomContextMenu);
//settings()->setAttribute(QWebSettings::JavascriptEnabled,true);

}

WebView::~WebView(){

}
void WebView::contextmenurequested(const QPoint &pos){
    QMenu right;
if(!childAt(pos)){    if(history()->canGoBack())
    {
        right.addAction("Back",this,SLOT(back()),QKeySequence::Back);
        right.addSeparator();
    }
    if(history()->canGoForward())
    {
        right.addAction("Forward",this,SLOT(forward()),QKeySequence::Forward);
        right.addSeparator();
    }
right.addAction("Reload",this,SLOT(reload()),QKeySequence::Refresh);
right.addSeparator();
right.addAction("Bookmark Page",this,SIGNAL(bookmark()),QKeySequence(Qt::CTRL+Qt::Key_B));
right.addSeparator();
//right.addAction("Save As",this,SIGNAL(saveas()),QKeySequence::Save);
//right.addSeparator();
right.addAction("Print",this,SIGNAL(print()),QKeySequence::Print);
right.addSeparator();
right.addAction("Copy Page Address",this,SIGNAL(copyaddress()));
right.addSeparator();
right.addAction("View Source",this,SIGNAL(viewsource()),QKeySequence(Qt::CTRL+Qt::Key_U));
right.addSeparator();
right.addAction("Inspect Element",this,SIGNAL(inspectelement()),QKeySequence(Qt::CTRL+Qt::SHIFT+Qt::Key_I));
right.addSeparator();
right.exec(QCursor::pos());}
//right menu
}

