#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include<headers.h>
#include<tabwidget.h>
#include<downloadmanager.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    tabwidget *tabwid;
   QWidget *centralWidget;QWidget *ntab;QGridLayout *ml;QTimer *shuttimer;QDialog *shutdialog;QPushButton *timerstart;QLabel *timerlabel;QTimeEdit *timeredit;QLineEdit *hostedit;QLineEdit *ipedit;QPushButton* getip;
   QLineEdit *find;QPushButton *fb[5];QLabel *lbl;QScrollArea *edit;
public:
   void setbar();
private:
   Ui::MainWindow *ui;
private slots:
   void browserstarted();void newwindow(bool);void openfile(bool);void showfullscreen(bool enable);/*void goclicked();*/
    void scheduledshutdown(bool);void timerstartclicked(bool);void ipfinder(bool);void setip(const QHostInfo &h);void getipclicked(bool);
void findchanged(QString s);void findshow(bool);void findnext(bool);void findprevious(bool);void highlightalloccurences(bool sta);void matchcase(bool sta);void wholewords(bool sta);
void undo(bool);void redo(bool);void cut(bool);void copy(bool);void paste(bool);void selectall(bool);void del(bool);
void viewsource(bool);
void viewsource();
void showmessage(QString url, QString title, QString text);void setstatusmessage(QString message);

void addrecent(WebView* webview);
void openrecent();
void takescreenshot(bool);
void takescreenshot();
void settimer();
void settransparent(bool p);
//void settransparent(int p);
void loadprogress(int);
void UpdateStatusbar(const QString &string);
void UpdateWindowTitle(const QString &title = QString());
void loadpage(const QString &page);
void loadurl(const QUrl &url);
void Preferences();

void about();
void aboutQt();
void printpreview();
void print();
void printrequested(QWebFrame *frame);
void PrivateBrowsing();
void saveas();
void ViewToolbar(bool view);
void ViewStatusbar(bool view);

void insertbookmark();
void bookmark();
void copyaddress();
void showhistory();

void DirectSearch();
void ToggleInspector(bool enable);
void ToggleInspector();
void DownloadManager();
void SelectLineEdit();

void setBackList();
void goback();
void goforward();
void setForwardList();
void OpenListUrl(QAction *action);
void SwapFocus();

void geometryChangeRequested(const QRect &geometry);
void updateToolbarActionText(bool visible);

private:
//void loadDefaultState();
void setupToolBar();
void updateStatusbarActionText(bool visible);

private:
QToolBar *toolbar;
QLineEdit *directSearch;
QDialog *bookdialog;
QGridLayout *booklay;
QLabel *LName,*LUrl;
QLineEdit *EName,*EUrl;
QPushButton *Add,*Cancel;
QSlider *trans;

QAction *histback;
QMenu *histbackmenu;
QAction *histforw;
QMenu *histforwmenu;

QAction *stop;
QAction *reload;
QAction *stopreload;

QIcon loadicon;
QIcon stopicon;

QString searchstr;



};
#endif // MAINWINDOW_H
