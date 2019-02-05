#include "mainwindow.h"
#include<mainapplication.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
  ,ui(new Ui::MainWindow)
  ,tabwid(new tabwidget(this))
{
    ui->setupUi(this);
    centralWidget=new QWidget(this);this->showMaximized();
    //this->setWindowOpacity(0.9);
    //-----------------------------------------------------------
    edit=new QScrollArea;
    //edit->setWidgetResizable(true);
    edit->setWindowTitle("History - Creation");
    edit->setMinimumSize(500,200);
    edit->setLayout(MainApplication::History->layoutitems);
   //------------------------------------------------------------
    bookdialog=new QDialog(this);
    booklay=new QGridLayout(bookdialog);
    LName=new QLabel("Name : ");
    LUrl=new QLabel("Url  : ");
    EName=new QLineEdit;
    EUrl=new QLineEdit;
    Add=new QPushButton("Add Bookmark");
    Cancel=new QPushButton("Cancel");
    booklay->addWidget(LName,0,0);
    booklay->addWidget(EName,0,1);
    booklay->addWidget(LUrl,1,0);
    booklay->addWidget(EUrl,1,1);
    booklay->addWidget(Add,2,0);
    booklay->addWidget(Cancel,2,1);
    booklay->setSpacing(1);
    booklay->setContentsMargins(3,3,3,3);
    bookdialog->setLayout(booklay);
    bookdialog->setFixedSize(250,200);
   //------------------------------------------------------------
    ui->statusBar->setFixedHeight(18);
    shutdialog =new QDialog(this);
     shuttimer=new QTimer(this);
     shutdialog->setFixedSize(360,300);shutdialog->setWindowTitle("Scheduled Shutdown Timer");timerlabel=new QLabel("<b>Set Countdown Timer<b>",shutdialog);
     timeredit=new QTimeEdit(shutdialog);timerstart=new QPushButton("Start Timer",shutdialog);
   timerlabel->setGeometry(100,50,200,30);timeredit->setGeometry(80,140,200,30);timeredit->setDisplayFormat("          hh  :  mm  :  ss ");
   timerstart->setGeometry(120,240,100,40);
   //ToolBar--------------------------------------------------------------------------
   toolbar=new QToolBar("Browser Bar");
histback=new QAction(this);histback->setIcon(QIcon(":/backp.png"));
connect(histback,SIGNAL(triggered(bool)),this,SLOT(goback()));

toolbar->addAction(histback);
histforw=new QAction(this);histforw->setIcon(QIcon(":/forwardp.png"));
connect(histforw,SIGNAL(triggered(bool)),this,SLOT(goforward()));
toolbar->addAction(histforw);
histbackmenu=new QMenu(this);
connect(histbackmenu,SIGNAL(aboutToShow()),this,SLOT(setBackList()));
connect(histbackmenu,SIGNAL(triggered(QAction*)),this,SLOT(OpenListUrl(QAction*)));
histforwmenu=new QMenu(this);
connect(histforwmenu,SIGNAL(aboutToShow()),this,SLOT(setForwardList()));
connect(histforwmenu,SIGNAL(triggered(QAction*)),this,SLOT(OpenListUrl(QAction*)));
toolbar->addWidget(tabwid->urllineedits);
directSearch=new QLineEdit;directSearch->setPlaceholderText("Google");directSearch->setMaximumWidth(250);
connect(directSearch,SIGNAL(returnPressed()),this,SLOT(DirectSearch()));
toolbar->addWidget(directSearch);
tabwid->urllineedits->setEnabled(true);

   //------------------------------------------------------------
    ml=new QGridLayout(centralWidget);centralWidget->setLayout(ml);
    ml->setSpacing(0);ml->setContentsMargins(0,0,0,0);
    ml->addWidget(toolbar,0,0);
    ml->addWidget(tabwid,1,0,1,1);tabwid->newTab(true);
    connect(ui->actionNew_Tab,SIGNAL(triggered(bool)),tabwid,SLOT(newTab(bool)));
    connect(ui->actionNew_Window,SIGNAL(triggered(bool)),this,SLOT(newwindow(bool)));
    connect(ui->actionOpenFile,SIGNAL(triggered(bool)),this,SLOT(openfile(bool)));
    connect(ui->actionSave_Page_As,SIGNAL(triggered(bool)),this,SLOT(saveas()));
    connect(ui->actionPrint,SIGNAL(triggered(bool)),this,SLOT(print()));
    connect(ui->actionPrint_Preview,SIGNAL(triggered(bool)),this,SLOT(printpreview()));
    connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(close()));
    connect(ui->actionFull_Screen,SIGNAL(triggered(bool)),this,SLOT(showfullscreen(bool)));
    connect(ui->actionScheduled_Shutdown_Timer,SIGNAL(triggered(bool)),this,SLOT(scheduledshutdown(bool)));
    connect(ui->actionShow_History,SIGNAL(triggered()),this,SLOT(showhistory()));
    connect(ui->actionIP_Finder,SIGNAL(triggered(bool)),this,SLOT(ipfinder(bool)));
    connect(ui->actionZoom_In,SIGNAL(triggered(bool)),tabwid,SLOT(zoomin(bool)));
    connect(ui->actionZoom_Out,SIGNAL(triggered(bool)),tabwid,SLOT(zoomout(bool)));
    connect(ui->actionZoom_Text_Only,SIGNAL(toggled(bool)),tabwid,SLOT(zoomtextonly(bool)));
    connect(ui->actionReset,SIGNAL(triggered(bool)),tabwid,SLOT(zoomnormal(bool)));
    connect(ui->actionBasic,SIGNAL(triggered(bool)),tabwid,SLOT(basicstyle(bool)));
    connect(ui->actionNo_Style,SIGNAL(triggered(bool)),tabwid,SLOT(nostyle(bool)));
    connect(ui->actionEnable_Free_Page_Editor,SIGNAL(triggered(bool)),tabwid,SLOT(editcontents(bool)));
    connect(ui->actionFind_Replace,SIGNAL(triggered(bool)),this,SLOT(findshow(bool)));
    connect(ui->actionUndo,SIGNAL(triggered(bool)),this,SLOT(undo(bool)));
    connect(ui->actionRedo,SIGNAL(triggered(bool)),this,SLOT(redo(bool)));
    connect(ui->actionCut,SIGNAL(triggered(bool)),this,SLOT(cut(bool)));
    connect(ui->actionCopy,SIGNAL(triggered(bool)),this,SLOT(copy(bool)));
    connect(ui->actionPaste,SIGNAL(triggered(bool)),this,SLOT(paste(bool)));
    connect(ui->actionSelect_All,SIGNAL(triggered(bool)),this,SLOT(selectall(bool)));
    connect(ui->actionDelete,SIGNAL(triggered(bool)),this,SLOT(del(bool)));
    connect(ui->actionTransparent_View,SIGNAL(triggered(bool)),this,SLOT(settransparent(bool)));
    connect(ui->actionTake_Screenshot,SIGNAL(triggered(bool)),this,SLOT(takescreenshot(bool)));
    connect(ui->actionPage_Source,SIGNAL(triggered(bool)),this,SLOT(viewsource(bool)));
    connect(ui->actionAddBookmark,SIGNAL(triggered(bool)),this,SLOT(bookmark()));
    connect(ui->actionToolbars,SIGNAL(triggered(bool)),this,SLOT(ViewToolbar(bool)));
    connect(ui->actionSidebars,SIGNAL(triggered(bool)),this,SLOT(ViewStatusbar(bool)));
    connect(Add,SIGNAL(clicked(bool)),this,SLOT(insertbookmark()));
    connect(Cancel,SIGNAL(clicked(bool)),bookdialog,SLOT(close()));
    connect(tabwid,SIGNAL(tlinkhovered(QString,QString,QString)),this,SLOT(showmessage(QString,QString,QString)));
    connect(tabwid,SIGNAL(tstatusmessage(QString)),this,SLOT(setstatusmessage(QString)));
    connect(tabwid,SIGNAL(setwindowtitle(QString)),this,SLOT(UpdateWindowTitle(QString)));
    connect(tabwid,SIGNAL(addrecent(WebView*)),this,SLOT(addrecent(WebView*)));
    connect(ui->actionWeb_Console,SIGNAL(triggered(bool)),this,SLOT(ToggleInspector(bool)));
    connect(ui->actionAbout_Aurora,SIGNAL(triggered(bool)),this,SLOT(aboutQt()));
    connect(ui->actionHelp,SIGNAL(triggered(bool)),this,SLOT(about()));
//-------------------------------------------------------------------------------------------
lbl=new QLabel;lbl->setFixedHeight(34);
find=new QLineEdit(lbl);find->setGeometry(5,2,225,32);
fb[0]=new QPushButton(lbl);fb[0]->setGeometry(300,2,105,32);fb[0]->setText("Highlight All");fb[0]->setCheckable(true);
//fb[1]=new QPushButton(lbl);fb[1]->setGeometry(420,2,105,32);fb[1]->setText("Case Sensitive");fb[1]->setCheckable(true);
//fb[2]=new QPushButton(lbl);fb[2]->setGeometry(540,2,105,32);fb[2]->setText("Whole Words");fb[2]->setCheckable(true);
fb[3]=new QPushButton(lbl);fb[3]->setGeometry(225,2,35,32);fb[3]->setIcon(QIcon(":/upp.png"));
fb[4]=new QPushButton(lbl);fb[4]->setGeometry(257,2,35,32);fb[4]->setIcon(QIcon(":/downp.png"));;
connect(find,SIGNAL(textChanged(QString)),this,SLOT(findchanged(QString)));
connect(fb[4],SIGNAL(clicked(bool)),this,SLOT(findnext(bool)));
connect(fb[3],SIGNAL(clicked(bool)),this,SLOT(findprevious(bool)));
connect(fb[0],SIGNAL(toggled(bool)),this,SLOT(highlightalloccurences(bool)));
//connect(fb[1],SIGNAL(toggled(bool)),this,SLOT(matchcase(bool)));
//connect(fb[2],SIGNAL(toggled(bool)),this,SLOT(wholewords(bool)));
ml->addWidget(lbl,2,0,1,1);lbl->hide();
 //------------------------------------------------------------------------------------------
ui->menuPage_Look->menuAction()->setVisible(false);
//ui->actionBasic->setChecked(true);
ui->actionSave_Page_As->setVisible(false);
ui->actionDownloads->setVisible(false);
ui->actionRestore_Previous_Session->setVisible(false);
ui->actionClear_Recent_History->setVisible(false);
ui->actionNew_Private_Window->setVisible(false);
ui->actionFeedback->setVisible(false);
ui->actionShortcuts->setVisible(false);
//-----------------

connect(tabwid,SIGNAL(bookmark()),this,SLOT(bookmark()));
connect(tabwid,SIGNAL(saveas()),this,SLOT(saveas()));
connect(tabwid,SIGNAL(print()),this,SLOT(print()));
connect(tabwid,SIGNAL(viewsource()),this,SLOT(viewsource()));
connect(tabwid,SIGNAL(copyaddress()),this,SLOT(copyaddress()));
connect(tabwid,SIGNAL(inspectelement()),this,SLOT(ToggleInspector()));
//-----------------
//connect(bk,SIGNAL(clicked(bool)),this,SLOT(bkclicked(bool)));
//connect(fw,SIGNAL(clicked(bool)),this,SLOT(fwclicked(bool)));
//connect(urlbox,SIGNAL(returnPressed()),SLOT(goclicked()));
//connect(webw,SIGNAL(urlChanged(QUrl)),SLOT(seturlboxurl(QUrl)));
//connect(go,SIGNAL(pressed()),this,SLOT(gopressed()));
//connect(go,SIGNAL(clicked(bool)),this,SLOT(goclicked(bool)));
//shortcuts
ui->actionNew_Tab->setShortcut(QKeySequence::AddTab);
ui->actionNew_Window->setShortcut(QKeySequence::New);
ui->actionOpenFile->setShortcut(QKeySequence::Open);
ui->actionSave_Page_As->setShortcut(QKeySequence::Save);
ui->actionPrint->setShortcut(QKeySequence::Print);
ui->actionQuit->setShortcut(QKeySequence::Quit);
ui->actionFull_Screen->setShortcut(QKeySequence::FullScreen);
ui->actionZoom_In->setShortcut(QKeySequence::ZoomIn);
ui->actionZoom_Out->setShortcut(QKeySequence::ZoomOut);
ui->actionReset->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_0));
ui->actionFind_Replace->setShortcut(QKeySequence::Find);
ui->actionUndo->setShortcut(QKeySequence::Undo);
ui->actionRedo->setShortcut(QKeySequence::Redo);
ui->actionScheduled_Shutdown_Timer->setShortcut(QKeySequence(Qt::ALT+Qt::Key_T));
ui->actionTransparent_View->setShortcut(QKeySequence(Qt::ALT+Qt::Key_V));
ui->actionCut->setShortcut(QKeySequence::Cut);
ui->actionCopy->setShortcut(QKeySequence::Copy);
ui->actionPaste->setShortcut(QKeySequence::Paste);
ui->actionTake_Screenshot->setShortcut(QKeySequence(Qt::ALT+Qt::Key_S));
ui->actionSelect_All->setShortcut(QKeySequence::SelectAll);
ui->actionIP_Finder->setShortcut(QKeySequence(Qt::ALT+Qt::Key_I));
ui->actionDelete->setShortcut(QKeySequence::Delete);
ui->actionPage_Source->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_U));
ui->actionWeb_Console->setShortcut(QKeySequence(Qt::CTRL+Qt::SHIFT+Qt::Key_I));
ui->actionShow_History->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_H));
ui->actionAddBookmark->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_B));
QShortcut* reload=new QShortcut(QKeySequence::Refresh,tabwid,SLOT(reloadTabsho()));
QShortcut* close=new QShortcut(QKeySequence::Close,tabwid,SLOT(closeTabsho()));
browserstarted();
QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled,true);
this->setCentralWidget(centralWidget);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::browserstarted(){
    //newtab(-1);
}
void MainWindow::newwindow(bool){//new window
MainApplication::mainappobj()->newmainwindow();
}

void::MainWindow::showfullscreen(bool enable){
   if(!this->isFullScreen()){ showFullScreen();}else {this->showNormal();}
}



//tools
void MainWindow::scheduledshutdown(bool){
connect(timerstart,SIGNAL(clicked(bool)),this,SLOT(timerstartclicked(bool)));
shutdialog->show();
}
//void MainWindow::timertypeclicked(bool){
//    if(timerlabel->text()=="<b>Set Countdown Timer<b>"){
//        timerlabel->setText("<b>Set Shutdown Time<b>");
//        timeredit->setDisplayFormat("          hh  :  mm  :  ss  AP");timeredit->setTime(QTime(0,0,0,0));
//    }
//    else if(timerlabel->text()=="<b>Set Shutdown Time<b>"){
//        timerlabel->setText("<b>Set Countdown Timer<b>");
//         timeredit->setDisplayFormat("          hh  :  mm  :  ss ");timeredit->setTime(QTime(0,0,0,0));
//    }
//}

void MainWindow::timerstartclicked(bool){
if(timerlabel->text()=="<b>Set Countdown Timer<b>"){
    shuttimer->start(timeredit->time().hour()*60*60*1000+timeredit->time().minute()*60*1000+timeredit->time().second()*1000);
connect(shuttimer,SIGNAL(timeout()),this,SLOT(close()));
}
shutdialog->hide();
}
void MainWindow::ipfinder(bool){
    QDialog *d=new QDialog(this);d->setWindowTitle("IP-Finder");d->setFixedSize(500,350);
    QLabel *l1=new QLabel("Enter Host Name:\n(Ex:www.google.com)",d);l1->setGeometry(50,90,200,50);
    QLabel *l2=new QLabel("IP-Address:",d);l2->setGeometry(50,140,200,50);
hostedit=new QLineEdit(d);hostedit->setGeometry(210,100,200,30);
ipedit=new QLineEdit(d);ipedit->setGeometry(210,150,200,30);
getip=new QPushButton("Get IP",d);getip->setGeometry(240,240,80,40);
connect(getip,SIGNAL(clicked(bool)),this,SLOT(getipclicked(bool)));
d->exec();
}
void MainWindow::setip(const QHostInfo &h){
    if(!h.addresses().isEmpty())
    {ipedit->setText(h.addresses().first().toString());}
}
void MainWindow::getipclicked(bool){
    QHostInfo::lookupHost(hostedit->text(),this,SLOT(setip(QHostInfo)));
}
void MainWindow::findshow(bool){
   if(lbl->isHidden()){
       lbl->show();find->setFocus();
   }
else if(lbl->isVisible())
   {
    lbl->hide();
   }
}
void MainWindow::findchanged(QString s){
if(tabwid->currentWebView())
 tabwid->currentWebView()->page()->findText(s,/*fb[1]->isChecked()?QWebPage::FindCaseSensitively:*/QWebPage::FindBeginsInSelection);
}
void MainWindow::findnext(bool){
    if(tabwid->currentWebView())
     tabwid->currentWebView()->page()->findText(find->text());
}
void MainWindow::findprevious(bool){
    if(tabwid->currentWebView())
    tabwid->currentWebView()->page()->findText(find->text(),QWebPage::FindBackward);
}
void MainWindow::highlightalloccurences(bool sta){
    if(tabwid->currentWebView())
    if(sta){
     tabwid->currentWebView()->page()->findText(find->text(),QWebPage::HighlightAllOccurrences);}
   // else if(!sta){

    //}
}
void MainWindow::matchcase(bool sta){
   /*if(sta){  tabwid->currentWebView()->page()->findText(find->text(),QWebPage::FindCaseSensitively);}
   else if(!sta){

   }*/
}
void MainWindow::wholewords(bool sta){
    /* if(sta){ tabwid->currentWebView()->page()->findText(" "+find->text()+" ");}
     else if(!sta){

     }*/
}
void MainWindow::undo(bool){
    tabwid->currentWebView()->page()->triggerAction(QWebPage::Undo);
}
void MainWindow::redo(bool){
     tabwid->currentWebView()->page()->triggerAction(QWebPage::Redo);
}
void MainWindow::cut(bool){
     tabwid->currentWebView()->page()->triggerAction(QWebPage::Cut);
}
void MainWindow::copy(bool){
     tabwid->currentWebView()->page()->triggerAction(QWebPage::Copy);
}
void MainWindow::paste(bool){
     tabwid->currentWebView()->page()->triggerAction(QWebPage::Paste);
}
void MainWindow::selectall(bool){
     tabwid->currentWebView()->page()->triggerAction(QWebPage::SelectAll);
}
void MainWindow::del(bool){
    tabwid->currentWebView()->page()->triggerAction(QWebPage::RemoveFormat);
}
void MainWindow::viewsource(bool){
QPlainTextEdit *p=new QPlainTextEdit();p->setPlainText( tabwid->currentWebView()->page()->mainFrame()->toHtml());
p->setReadOnly(true);p->setAttribute(Qt::WA_DeleteOnClose);p->setWindowTitle("View-Source : "+tabwid->currentWebView()->title());p->setMinimumSize(500,300);p->show();
}

void MainWindow::viewsource(){
  viewsource(true);
}

void MainWindow::aboutQt(){
    QMessageBox::aboutQt(this,"About Qt");
}

void MainWindow::about(){
    QMessageBox::about(this,"About Creation(Web Browser)","<b>Creation Version - 1.0</b><br>"
                                                          "<br>This is a simple Web Browser made using C++(Qt) "
                                                          "<br><br>Copyright 2018 Punit Chaudhari,All Rights Reserved."
                                                          "<br><br>This program is made available under the terms of the GNU General Public License version 3 as published by the Free Software Foundation.");
}


void MainWindow::showmessage(QString url,QString title,QString text){
ui->statusBar->showMessage(url);
}
void MainWindow::setstatusmessage(QString message){
    ui->statusBar->showMessage(message,2000);
}
void MainWindow::loadprogress(int){

}
void MainWindow::UpdateStatusbar(const QString &string){

}

void MainWindow::UpdateWindowTitle(const QString &title){
if(!title.isEmpty())
    this->setWindowTitle(title+" - Creation");
}

void MainWindow::loadurl(const QUrl &url){
if(!tabwid->currentWebView()||!url.isValid())
    return;
tabwid->currentlineedit()->setText(QString::fromUtf8(url.toEncoded()));
tabwid->loadUrlInCurrentTab(url);
}
void MainWindow::Preferences(){

}

void MainWindow::printpreview(){
if(!tabwid->currentWebView())
    return;
QPrintPreviewDialog *ppd=new QPrintPreviewDialog(this);
connect(ppd,SIGNAL(paintRequested(QPrinter*)),tabwid->currentWebView(),SLOT(print(QPrinter*)));
ppd->exec();
}

void MainWindow::print(){
#ifndef QT_NO_PRINTPREVIEWDIALOG
    if(!tabwid->currentWebView())
    return;
printrequested(tabwid->currentWebView()->page()->mainFrame());
#endif
}
void MainWindow::printrequested(QWebFrame *frame){
#ifndef QT_NO_PRINTDIALOG
    QPrinter printer;
    QPrintDialog *pd=new QPrintDialog(&printer,this);
pd->setWindowTitle("Print Document");
if(pd->exec()!=QDialog::Accepted)
    return;
frame->print(&printer);
#endif
}
void MainWindow::PrivateBrowsing(){

}

void MainWindow::openfile(bool){
    QString filename=QFileDialog::getOpenFileName(this,"Open File",QString(),"Web Content(*.html *.htm *.svgz *.svg *.gif *.jpeg *.png);;All Files(*.*)");
    if(filename.isEmpty())
   return;
    loadpage(filename);
 }
void MainWindow::loadpage(const QString &page){
QUrl url=QUrl::fromUserInput(page);
loadurl(url);
}
void MainWindow::saveas(){
//if(!tabwid->currentWebView())
//return;
//MainApplication::DownloadManager->download(tabwid->currentWebView()->url(),true);

}
void MainWindow::ViewToolbar(bool view){
    toolbar->setVisible(view);
}

void MainWindow::ViewStatusbar(bool view){
ui->statusBar->setVisible(view);
}

void MainWindow::DirectSearch(){
QString gsearch=qobject_cast<QLineEdit*>(sender())->text();
loadurl(QUrl("https://www.google.com/search?q="+gsearch));
}

void MainWindow::ToggleInspector(bool enable){
tabwid->currentWebView()->page()->triggerAction(QWebPage::InspectElement);
}

void MainWindow::ToggleInspector(){
    ToggleInspector(true);
}

void MainWindow::DownloadManager(){

}

void MainWindow::SelectLineEdit(){

}
void MainWindow::goback(){
    tabwid->currentWebView()->back();
}

void MainWindow::setBackList(){

}
void MainWindow::goforward(){
    tabwid->currentWebView()->forward();
}

void MainWindow::setForwardList(){

}

void MainWindow::OpenListUrl(QAction *action){

}

void MainWindow::SwapFocus(){

}

void MainWindow::geometryChangeRequested(const QRect &geometry){

}

void MainWindow::updateToolbarActionText(bool visible){

}

void MainWindow::takescreenshot(bool){
QDialog *d=new QDialog(this);d->setWindowTitle("Screenshot");
QVBoxLayout *vlay=new QVBoxLayout;
QPushButton *takescreenshot=new QPushButton("Take Screenshot",d);
QSpinBox *spin=new QSpinBox;spin->setMaximum(3600);
QLabel *delay=new QLabel("Delay(in secs)");
vlay->addWidget(delay);
vlay->addWidget(spin);
vlay->addWidget(takescreenshot);
d->setLayout(vlay);
connect(takescreenshot,SIGNAL(clicked(bool)),this,SLOT(settimer()));
connect(takescreenshot,SIGNAL(clicked(bool)),d,SLOT(close()));
d->exec();
}
void MainWindow::takescreenshot(){
    QImage ss=qApp->screens().at(0)->grabWindow(QDesktopWidget().winId()).toImage();
    ss.save(QFileDialog::getSaveFileName(this,"Save Screenshot",QString()),"PNG",-1);
}

void MainWindow::settimer(){
QTimer *timer=new QTimer;
timer->start(qobject_cast<QDialog*>(qobject_cast<QPushButton*>(sender())->parent())->findChild<QSpinBox*>()->value()*1000==0?1000:qobject_cast<QDialog*>(qobject_cast<QPushButton*>(sender())->parent())->findChild<QSpinBox*>()->value()*1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(takescreenshot()));
    connect(timer,SIGNAL(timeout()),timer,SLOT(stop()));
}
void MainWindow::settransparent(bool p){
if(p)
    this->setWindowOpacity(0.85);
else
    this->setWindowOpacity(1);
}
void MainWindow::addrecent(WebView *webview){
QAction *recentweb=new QAction(tabwid->tabToolTip(tabwid->indexOf(webview->parentWidget())),ui->menuRecently_Closed_Tabs);
recentweb->setData(webview->url());
connect(recentweb,SIGNAL(triggered(bool)),this,SLOT(openrecent()));
ui->menuRecently_Closed_Tabs->addAction(recentweb);
}
void MainWindow::openrecent(){
tabwid->newTab(true,qobject_cast<QAction*>(sender())->data().toUrl());
if(qobject_cast<QMenu*>(sender()->parent())->title()!="Bookmarks")
qobject_cast<QMenu*>(sender()->parent())->removeAction(qobject_cast<QAction*>(sender()));

}
void MainWindow::insertbookmark(){
    QAction *book=new QAction(EName->text(),ui->menuBookmarks);
    book->setData(EUrl->text());
    connect(book,SIGNAL(triggered(bool)),this,SLOT(openrecent()));
    ui->menuBookmarks->addAction(book);
    bookdialog->close();
}

void MainWindow::bookmark(){
EName->setText(tabwid->tabText(tabwid->currentIndex()));
EUrl->setText(tabwid->currentWebView()->url().toString());
bookdialog->exec();
}

void MainWindow::copyaddress(){
QMimeData *mime=new QMimeData;
mime->setText(tabwid->currentWebView()->url().toString());
QApplication::clipboard()->setMimeData(mime);
}
void MainWindow::showhistory(){
    //h->setModal();
    edit->show();
}

//void MainWindow::settransparent(int p){
//this->setWindowOpacity((50-p)/50);
//}
