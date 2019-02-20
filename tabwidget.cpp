#include "tabwidget.h"
#include<mainapplication.h>
TabBar::TabBar(QWidget *parent)
{
connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(contextMenuRequested(QPoint)));
connect(this,SIGNAL(tabCloseRequested(int)),this,SIGNAL(closeTab(int)));
for(int i=1;i<=9;i++){
    QShortcut *s=new QShortcut(QKeySequence(QString("Ctrl+%1").arg(i)),this);
    tabshorts.append(s);
    connect(s,SIGNAL(activated()),this,SLOT(selectTabShortcuts()));

}

setAcceptDrops(true);
    setSelectionBehaviorOnRemove(QTabBar::SelectPreviousTab);
    setMovable(true);
    setTabsClosable(true);

}

void TabBar::mousePressEvent(QMouseEvent* event){
    if (event->button() == Qt::LeftButton)
           m_dragStartPos = event->pos();
       QTabBar::mousePressEvent(event);
}

void TabBar::mouseMoveEvent(QMouseEvent* event){

    if (event->buttons() == Qt::LeftButton) {
        int diffX = event->pos().x() - m_dragStartPos.x();
        int diffY = event->pos().y() - m_dragStartPos.y();
        if ((event->pos() - m_dragStartPos).manhattanLength() > QApplication::startDragDistance()
            && diffX < 3 && diffX > -3
            && diffY < -10) {
            QDrag *drag = new QDrag(this);
            QMimeData *mimeData = new QMimeData;
            QList<QUrl> urls;
            int index = tabAt(event->pos());
            QUrl url = tabData(index).toUrl();
            urls.append(url);
            mimeData->setUrls(urls);
            mimeData->setText(tabText(index));
            drag->setMimeData(mimeData);
            drag->exec();
        }
    }
    QTabBar::mouseMoveEvent(event);
}

void TabBar::selectTabShortcuts(){
if(QShortcut *s=qobject_cast<QShortcut*>(sender()))
{
    int i=tabshorts.indexOf(s);
    setCurrentIndex(i);
}
}

void TabBar:: cloneTab(){

   if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
    emit cloneTab(index);}

}

void TabBar::closeTab(){
    if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
   emit closeTab(index);}
}
void TabBar::closeLeftTabs(){
    if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
   emit closeLeftTabs(index);}
}

void TabBar::closeRightTabs(){
    if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
   emit closeRightTabs(index);}
}

void TabBar::closeOtherTabs(){
    if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
   emit closeOtherTabs(index);
    }

}

void TabBar::reloadTab(){
    if(QAction *a=qobject_cast<QAction*>(sender())){
    int index=a->data().toInt();
    emit reloadTab(index);
    }
}

void TabBar::contextMenuRequested(const QPoint &position){
    QMenu menu;
   int index=tabAt(position);
   menu.addAction("New Tab",this,SIGNAL(newTab()),QKeySequence::AddTab);
   if(index>=0)
    {
    QAction *a=menu.addAction("Reload",this,SLOT(reloadTab()),QKeySequence::Refresh);
    a->setData(index);
    menu.addSeparator();
    a=menu.addAction("Clone Tab",this,SLOT(cloneTab()));
    a->setData(index);
    menu.addSeparator();
    a=menu.addAction("Close Tab",this,SLOT(closeTab()),QKeySequence::Close);
    a->setData(index);
    menu.addSeparator();
    if(count()>1){
        a=menu.addAction("Close Other Tabs",this,SLOT(closeOtherTabs()));
        a->setData(index);
        menu.addSeparator();
    }
    if(index>0){
    a=menu.addAction("Close Tabs To The Left",this,SLOT(closeLeftTabs()));
    a->setData(index);
    menu.addSeparator();}
    if(count()-1>index){
    a=menu.addAction("Close Tabs To The Right",this,SLOT(closeRightTabs()));
    a->setData(index);
    menu.addSeparator();}

   }
    else{
     menu.addSeparator();
    }
   if(!recentlyclosedurls.isEmpty()){
   menu.addAction("Reopen Closed Tab",this,SIGNAL(reopenclosed()));
   menu.addSeparator();}
   menu.addAction("Reload All Tabs",this,SIGNAL(reloadAllTabs()));
   menu.exec(QCursor::pos());
}









tabwidget::tabwidget(QWidget *parent):
tabbar(new TabBar(this))
,urllineedits(0)
,lineeditcompleter(0)
{

connect(tabbar, SIGNAL(newTab()), this, SLOT(newTab()));
connect(tabbar, SIGNAL(closeTab(int)), this, SLOT(closeTab(int)));
connect(tabbar, SIGNAL(cloneTab(int)), this, SLOT(cloneTab(int)));
connect(tabbar, SIGNAL(closeLeftTabs(int)), this, SLOT(closeLeftTabs(int)));
connect(tabbar, SIGNAL(closeRightTabs(int)), this, SLOT(closeRightTabs(int)));
connect(tabbar, SIGNAL(closeOtherTabs(int)), this, SLOT(closeOtherTabs(int)));
connect(tabbar, SIGNAL(reloadTab(int)), this, SLOT(reloadTab(int)));
connect(tabbar, SIGNAL(reloadAllTabs()), this, SLOT(reloadAllTabs()));
connect(tabbar, SIGNAL(tabMoved(int,int)), this, SLOT(moveTab(int,int)));
connect(this,SIGNAL(currentChanged(int)),this,SLOT(currentChanged(int)));
connect(tabbar,SIGNAL(reopenclosed()),this,SLOT(reopenclosed()));
setTabBar(tabbar);
tabbar->setContextMenuPolicy(Qt::CustomContextMenu);

g=new QDialog(0);//

comodel=new QStringListModel(MainApplication::History->s,this);
lineeditcompleter=new QCompleter(comodel,this);
lineeditcompleter->setCaseSensitivity(Qt::CaseInsensitive);
//lineeditcompleter->setCompletionMode(QCompleter::InlineCompletion);
lineeditcompleter->setFilterMode(Qt::MatchContains);
lineeditcompleter->setMaxVisibleItems(10);
coj=new QNetworkCookieJar();
    nam=new QNetworkAccessManager();
    nam->setCookieJar(coj);
    urllineedits=new QStackedWidget;
}



WebView* tabwidget::newTab(bool makecurr, QUrl url){//newtab menu

urllineedit *ulineedit=new urllineedit;
QLineEdit *lineedit=qobject_cast<QLineEdit*>(ulineedit);
lineedit->setPlaceholderText("Enter an address");
lineedit->setCompleter(lineeditcompleter);
connect(lineedit,SIGNAL(returnPressed()),this,SLOT(lineEditReturnPressed()));
urllineedits->addWidget(ulineedit);
urllineedits->setSizePolicy(lineedit->sizePolicy());
//ulineedit->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Fixed);
QWidget *tab=new QWidget;tab->setContentsMargins(0,0,0,0);
QGridLayout *lay=new QGridLayout(tab);lay->setContentsMargins(0,0,0,0);
WebView *webw=new WebView;webw->setContentsMargins(0,0,0,0);
lay->addWidget(webw);
ulineedit->setWebView(webw);
ulineedit->setFocus();ulineedit->setEnabled(true);
webw->page()->setNetworkAccessManager(nam);
//webw->page()->setNetworkAccessManager(MainApplication::mainNetworkAccessManager()->NetworkAccessManager);

    // bk=new QPushButton(); bk=new QPushButton( tab); bk->setIcon(QIcon(":/backp.png")); bk->setObjectName("bk"); bk->setMaximumSize(QSize(32,32)); bk->setIconSize(QSize(32,32)); bk->setStyleSheet("border:none;outline:none;border-radius:16px;border-width:1px;border-color:#ffffff" "margin: 1px;""border-style: outset;");
// fw=new QPushButton(); fw=new QPushButton( tab); fw->setIcon(QIcon(":/forwardp.png")); fw->setObjectName("fw"); fw->setMaximumSize(QSize(32,32)); fw->setIconSize(QSize(32,32)); fw->setStyleSheet("border:none;outline:none;border-radius:16px;border-width:1px;border-color:#ffffff" "margin: 1px;""border-style: outset;");
// urlbox=new QLineEdit(); urlbox=new QLineEdit( tab); urlbox->setObjectName("urlbox"); urlbox->setFixedHeight(32);urlbox->setClearButtonEnabled(true);
// reload=new QPushButton();reload=new QPushButton( tab);reload->setIcon(QIcon(":/refreshp.png"));reload->setObjectName("reload");reload->setMaximumSize(QSize(32,32));reload->setIconSize(QSize(32,32));reload->setStyleSheet("border:none;outline:none;border-radius:16px;border-width:1px;border-color:#ffffff" "margin: 1px;""border-style: outset;");
//gl->addWidget( bk,0,0,1,1);
//gl->addWidget( fw,0,1,1,1);
//gl->addWidget( urlbox,0,2,1,1);
//gl->addWidget(reload,0,3,1,1);
//connect( bk,SIGNAL(clicked(bool)), this,SLOT(bkclicked(bool)));
//connect( fw,SIGNAL(clicked(bool)), this,SLOT(fwclicked(bool)));
//connect( urlbox,SIGNAL(returnPressed()),this,SLOT(returnpressed()));
//connect(reload,SIGNAL(clicked(bool)), this,SLOT(reloadclicked(bool)));
//connect(go[webw.count()-1],SIGNAL(pressed()),this,SLOT(gopressed()));

connect(webw,SIGNAL(bookmark()),this,SIGNAL(bookmark()));
connect(webw,SIGNAL(saveas()),this,SIGNAL(saveas()));
connect(webw,SIGNAL(print()),this,SIGNAL(print()));
connect(webw,SIGNAL(viewsource()),this,SIGNAL(viewsource()));
connect(webw,SIGNAL(copyaddress()),this,SIGNAL(copyaddress()));
connect(webw,SIGNAL(inspectelement()),this,SIGNAL(inspectelement()));

connect( webw,SIGNAL(urlChanged(QUrl)),this,SLOT(webViewUrlChanged(QUrl)));
connect( webw,SIGNAL(loadProgress(int)),this,SLOT(setvalue(int)));
connect( webw,SIGNAL(loadFinished(bool)),this,SLOT(webViewIconChanged()));
connect( webw,SIGNAL(loadFinished(bool)),this,SLOT(webViewLoadFinished()));
connect( webw,SIGNAL(loadStarted()),this,SLOT(webViewLoadStarted()));
connect( webw,SIGNAL(titleChanged(QString)), this,SLOT(webViewTitleChanged(QString)));
connect( webw,SIGNAL(iconChanged()),this,SLOT(webViewIconChanged()));
connect( webw->page(),SIGNAL(linkHovered(QString,QString,QString)),this,SIGNAL(tlinkhovered(QString,QString,QString)));
connect( webw,SIGNAL(statusBarMessage(QString)),this,SIGNAL(tstatusmessage(QString)));
//connect(webw, SIGNAL(windowCloseRequested()),this, SLOT(windowCloseRequested()));
//connect(webw, SIGNAL(geometryChangeRequested(QRect)),this, SIGNAL(geometryChangeRequested(QRect)));
//connect(webw, SIGNAL(printRequested(QWebFrame*)),this, SIGNAL(printRequested(QWebFrame*)));
//connect(webw, SIGNAL(menuBarVisibilityChangeRequested(bool)),this, SIGNAL(menuBarVisibilityChangeRequested(bool)));
//connect(webw, SIGNAL(statusBarVisibilityChangeRequested(bool)),this, SIGNAL(statusBarVisibilityChangeRequested(bool)));
//connect(webw, SIGNAL(toolBarVisibilityChangeRequested(bool)),this, SIGNAL(toolBarVisibilityChangeRequested(bool)));
addTab(tab,tr("Google"));
setTabToolTip(indexOf(tab),tr("New Tab"));
webw->load(url);
//     g->setWindowTitle(g->windowTitle()+QString::number(qobject_cast<QStackedWidget*>(lineedits())->count()));
//     g->show();
if(count()==1)
    currentChanged(currentIndex());
return webw;}

void tabwidget::editcontents(bool enable){
   currentWidget()->findChild<WebView*>()->page()->setContentEditable(enable);
}
void tabwidget::currentChanged(int index)//set currenttab
{
    if(webView(qobject_cast<QStackedWidget*>(lineedits())->currentIndex())){
      WebView* oldwebw=webView(qobject_cast<QStackedWidget*>(lineedits())->currentIndex());
      disconnect( oldwebw->page(),SIGNAL(linkHovered(QString,QString,QString)),this,SIGNAL(tlinkhovered(QString,QString,QString)));
      disconnect( oldwebw,SIGNAL(statusBarMessage(QString)),this,SIGNAL(tstatusmessage(QString)));}
      WebView* currwebw=webView(index);
      connect( currwebw->page(),SIGNAL(linkHovered(QString,QString,QString)),this,SIGNAL(tlinkhovered(QString,QString,QString)));
      connect( currwebw,SIGNAL(statusBarMessage(QString)),this,SIGNAL(tstatusmessage(QString)));
   qobject_cast<QStackedWidget*>(lineedits())->setCurrentIndex(index);
   emit setwindowtitle(tabToolTip(index));




     //(new QTextEdit(QString::number(index)))->show();
    //Q_ASSERT(qobject_cast<QStackedWidget*>(lineedits())->count() == count());

/* {   if(webView(qobject_cast<QStackedWidget*>(lineedits())->currentIndex())){
   WebView* oldwebw=webView(qobject_cast<QStackedWidget*>(lineedits())->currentIndex());
   disconnect( oldwebw->page(),SIGNAL(linkHovered(QString,QString,QString)),this,SIGNAL(tlinkhovered(QString,QString,QString)));
   disconnect( oldwebw,SIGNAL(statusBarMessage(QString)),this,SIGNAL(tstatusmessage(QString)));}
 WebView* currwebw=webView(index);
 //connect( currwebw->page(),SIGNAL(linkHovered(QString,QString,QString)),this,SIGNAL(tlinkhovered(QString,QString,QString)));
  //connect( currwebw,SIGNAL(statusBarMessage(QString)),this,SIGNAL(tstatusmessage(QString)));
qobject_cast<QStackedWidget*>(lineedits())->setCurrentIndex(index);
emit setwindowtitle(tabToolTip(index));}
*/
   // g->setWindowTitle(g->windowTitle()+"curr"+QString::number(index)+QString::number(qobject_cast<QStackedWidget*>(lineedits())->currentIndex()));
   // g->show();
    /* gl=currentWidget()->findChild<QGridLayout*>("gl");
    bk=currentWidget()->findChild<QPushButton*>("bk");
    fw=currentWidget()->findChild<QPushButton*>("fw");
    urlbox=currentWidget()->findChild<QLineEdit*>("urlbox");
    //go=currentWidget()->findChild<QPushButton*>("go");
    webw=currentWidget()->findChild<WebView*>("webw");
    /*weblay=currentWidget()->findChild<QGridLayout*>("weblay");
    connect(bk,SIGNAL(clicked(bool)),this,SLOT(bkclicked(bool)));
    connect(fw,SIGNAL(clicked(bool)),this,SLOT(fwclicked(bool)));
    connect(go,SIGNAL(pressed()),this,SLOT(gopressed()));
    connect(go,SIGNAL(clicked(bool)),this,SLOT(goclicked(bool)));
    connect(urlbox,SIGNAL(returnPressed()),SLOT(goclicked()));
    connect(webw,SIGNAL(urlChanged(QUrl)),SLOT(seturlboxurl(QUrl)));*/
//    g->setWindowTitle(QString::number(index)+QString::number(qobject_cast<QStackedWidget*>(lineedits())->count())+(urllineedits->isVisible()?"vis":"notvis")+(qobject_cast<QStackedWidget*>(lineedits())->currentWidget()->isVisible()?" lvis":" lnotvis"));
//g->show();
}
//-----
void tabwidget::webViewTitleChanged(const QString &title){
WebView *webview=qobject_cast<WebView*>(sender());
    int index=webViewIndex(webview);
    QString t=title;
    t=!t.isEmpty()?t:webview->url().toString();
    if(t.length()>=20){t.resize(17);t.append("...");}
    setTabText(index,t);
setTabToolTip(index,!title.isEmpty()?title:webview->url().toString());
if(webview==currentWebView())
emit setwindowtitle(tabToolTip(index));
}

void tabwidget::bkclicked(bool)//back clicked
{
    //webw->back();
}
void tabwidget::fwclicked(bool)//forward clicked
{
 //webw->forward();
}

void tabwidget::webViewIconChanged(){
//bk->setIcon(QIcon("https://www.google.com/favicon.ico"));

}
void tabwidget::webViewUrlChanged(const QUrl &url){
    WebView *webview=qobject_cast<WebView*>(sender());
        int index=webViewIndex(webview);
    tabbar->setTabData(index,url);
    hitem *newh=new hitem;
    connect(newh,SIGNAL(clicked()),this,SLOT(historyitemclicked()));
    MainApplication::History->addhistory(newh,url,tabbar->tabText(index));
    //  tabwidget::additem(url,"title");
    //urlbox->setText(url.toString());

}
/*void tabwidget::goclicked(){
    gopressed();goclicked(true);
}*/
void tabwidget::reloadclicked(bool)//reload clicked
{
//webw->page()->triggerAction(QWebPage::Reload);

}
void tabwidget::reloadclicked(){

}

void tabwidget::lineEditReturnPressed()//return pressed
{
    QLineEdit *urlbox=qobject_cast<QLineEdit*>(sender());
    QString url;
   if(!urlbox->text().isEmpty()){
       url=urlbox->text();
       if(!QUrl::fromUserInput(url).isValid())
           url="https://www.google.com/search?q="+url;
    currentWebView()->load(QUrl::fromUserInput(url));
   }
}

void tabwidget::webViewLoadStarted(){
WebView *webview= qobject_cast<WebView*>(sender());
int i=webViewIndex(webview);
//QString t=webview->url();
//t=!t.isEmpty()?t:webview->url().toString();
//if(t.length()>=20){t.resize(17);t.append("...");}
//setTabText(i,t);
//setTabToolTip(i,t);
QLabel *icolab=new QLabel;icolab->setFixedSize(16,16);
    QMovie *mov=new QMovie(":/loading.gif");
    icolab->setMovie(mov);mov->start();icolab->movie()->setScaledSize(QSize(16,16));
tabbar->setTabButton(i,QTabBar::LeftSide,icolab);
}

void tabwidget::setvalue(int x){



}
void tabwidget::webViewLoadFinished(){

    WebView *webview= qobject_cast<WebView*>(sender());
    int i=webViewIndex(webview);
//    QString t=webview->url();
//    t=!t.isEmpty()?t:webview->url().toString();
//    if(t.length()>=20){t.resize(17);t.append("...");}
//    setTabText(i,t);
//setTabToolTip(i,t);
    qobject_cast<QLabel*>(tabbar->tabButton(i,QTabBar::LeftSide))->movie()->stop();
    setTabIcon(i,webview->icon());
}
QWidget* tabwidget::lineedits() const{
    return urllineedits;
}
QLineEdit* tabwidget::lineedit(int index) const{
    urllineedit *w=qobject_cast<urllineedit*>(urllineedits->widget(index));
    if(w)
    return qobject_cast<QLineEdit*>(w);
    return 0;
}
QLineEdit* tabwidget::currentlineedit() const{
   return lineedit(urllineedits->currentIndex());
}

WebView* tabwidget::currentWebView() const{
 return qobject_cast<WebView*>(currentWidget()->findChild<WebView*>());
}

int tabwidget::webViewIndex(WebView *webView) const{
 return indexOf(qobject_cast<QWidget*>(webView->parent()));
}
WebView* tabwidget::webView(int index) const{
 return widget(index)->findChild<WebView*>();
}
void tabwidget::mouseDoubleClickEvent(QMouseEvent *event){

    if (!childAt(event->pos())
            && event->pos().y() < (tabBar()->y() + tabBar()->height())) {
        newTab();
        return;
    }
    QTabWidget::mouseDoubleClickEvent(event);
}

void tabwidget::contextMenuEvent(QContextMenuEvent *event){
    if (!childAt(event->pos())) {
        tabbar->contextMenuRequested(event->pos());
        return;
    }
    QTabWidget::contextMenuEvent(event);
}

void tabwidget::mouseReleaseEvent(QMouseEvent *event){
#ifndef QT_NO_CLIPBOARD
    if (event->button() == Qt::MidButton && !childAt(event->pos())
            && event->pos().y() < (tabBar()->y() + tabBar()->height())) {
        QUrl eurl(QApplication::clipboard()->text(QClipboard::Selection));
        if (!eurl.isEmpty() && eurl.isValid() && !eurl.scheme().isEmpty()) {
            WebView *webView = newTab();
            webView->setUrl(eurl);
        }
    }
#endif
}

void tabwidget::loadUrlInCurrentTab(const QUrl &url){
if(!currentWebView())
    return;
    currentWebView()->load(url);
}

//WebView* tabwidget::newtab(){

//}

void tabwidget::cloneTab(int index){
if(!webView(index))
    return;
    WebView *clone=newTab(true);
QUrl cloneurl=webView(index)->url();
    clone->setUrl(cloneurl);

}
void tabwidget::closeTab(int index){

    if(index==0)
        moveTab(0,1);
    index=1;
    tabbar->recentlyclosedurls.append(webView(index)->url());
    emit addrecent(webView(index));
    qobject_cast<QStackedWidget*>(lineedits())->removeWidget(lineedit(index));
    lineedit(index)->deleteLater();
        if(count()==1)
    {
    this->windowCloseRequested();
        exit(0);
    }
   // QWidget *w=widget(index);
    removeTab(index);

    widget(index)->deleteLater();


    /*
//    if (index < 0)
//        index = currentIndex();
//    if (index < 0 || index >= count())
//        return;

tabbar->recentlyclosedurls.append(webView(index)->url());
emit addrecent(webView(index));
qobject_cast<QStackedWidget*>(lineedits())->removeWidget(lineedit(index));
lineedit(index)->deleteLater();
    if(count()==1)
{
//this->windowCloseRequested();
    exit(0);
}    
    removeTab(index);
    widget(index)->deleteLater();
    */
}
void tabwidget::closeTabsho(){

tabbar->recentlyclosedurls.append(currentWebView()->url());
emit addrecent(currentWebView());
currentWidget()->deleteLater();
qobject_cast<QStackedWidget*>(lineedits())->removeWidget(currentlineedit());
//lineedit(index)->deleteLater();
    if(count()==1)
{
this->windowCloseRequested();
    exit(0);
}
removeTab(currentIndex());
}
void tabwidget::closeLeftTabs(int index){
    for(int i=index-1;i>=0;i--)
    {
closeTab(i);
    }
}
void tabwidget::closeRightTabs(int index){
    for(int i=count()-1;i>index;i--)
    {
closeTab(i);
    }
}
void tabwidget::reopenclosed(){
    if(!tabbar->recentlyclosedurls.isEmpty()){
    QUrl url=tabbar->recentlyclosedurls.takeLast();
    newTab(true,url);}
}

void tabwidget::closeOtherTabs(int index){
    for(int i=count()-1;i>index;i--)
    {
closeTab(i);
    }
    for(int i=index-1;i>=0;i--)
    {
closeTab(i);
    }

}
void tabwidget::reloadTab(int index){
    if(!webView(index))
        return;
webView(index)->reload();
}
void tabwidget::reloadTabsho(){
    if(!currentWebView())
        return;
currentWebView()->reload();
}
void tabwidget::reloadAllTabs(){
for(int i=0;i<count();i++){
    reloadTab(i);
}
}
void tabwidget::nextTab(){

}
void tabwidget::previousTab(){

}
void tabwidget::zoomin(bool){
    if(!currentWebView())
{return;}
    currentWebView()->setZoomFactor(currentWebView()->zoomFactor()+0.01);
}
void tabwidget::zoomout(bool){
    if(!currentWebView())
    {return;}
        currentWebView()->setZoomFactor(currentWebView()->zoomFactor()-0.01);
}
void tabwidget::zoomtextonly(bool enable)
{
    QWebSettings::globalSettings()->setAttribute(QWebSettings::ZoomTextOnly,enable);
}
void tabwidget::zoomnormal(bool){
    if(!currentWebView())
    {return;}
        currentWebView()->setZoomFactor(1);
}
void tabwidget::basicstyle(bool){
 //if(1){ ui->actionBasic->setChecked(true);ui->actionNo_Style->setChecked(false);To be added.}
}
void tabwidget::nostyle(bool){
  //if(1){;ui->actionBasic->setChecked(false);ui->actionNo_Style->setChecked(true);}

}
void tabwidget::windowCloseRequested(){

}
void tabwidget::moveTab(int fromIndex, int toIndex){
    QLineEdit* addressbar=lineedit(fromIndex);
qobject_cast<QStackedWidget*>(lineedits())->removeWidget(lineedit(fromIndex));
qobject_cast<QStackedWidget*>(lineedits())->insertWidget(toIndex,addressbar);
}

void tabwidget::historyitemclicked(){
loadUrlInCurrentTab(QUrl(qobject_cast<QLabel*>(sender())->objectName()));
}
