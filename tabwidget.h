#ifndef TABWIDGET_H
#define TABWIDGET_H
#include<headers.h>
#include<urllineedit.h>
class TabBar : public QTabBar
{
    Q_OBJECT
    TabBar(QWidget *parent = 0);
signals:
    void newTab();
    void cloneTab(int index);
    void closeTab(int index);
    void closeLeftTabs(int index);
    void closeRightTabs(int index);
    void closeOtherTabs(int index);
    void reloadTab(int index);
    void reopenclosed();
    void reloadAllTabs();
    void tabMoveRequested(int fromIndex, int toIndex);

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

private slots:
    void selectTabShortcuts();
    void cloneTab();
    void closeTab();
    void closeLeftTabs();
    void closeRightTabs();
    void closeOtherTabs();
    void reloadTab();
    void contextMenuRequested(const QPoint &position);
private:
    friend class tabwidget;
QList<QShortcut*> tabshorts;
    QPoint m_dragStartPos;
    int m_dragCurrentIndex;
    QList<QUrl> recentlyclosedurls;

};

class tabwidget:public QTabWidget
{
Q_OBJECT
signals:

    void tlinkhovered(QString url, QString title, QString text);
    void tstatusmessage(QString message);
    void setwindowtitle(const QString &title);
    void addrecent(WebView* webview);

    void bookmark();
    void saveas();
    void print();
    void copyaddress();
    void viewsource();
    void inspectelement();
 public:

    QWidget* lineedits() const;
    QLineEdit *currentlineedit() const;
    QLineEdit *lineedit(int index) const;
    WebView *currentWebView() const;
    WebView *webView(int index) const;
    int webViewIndex(WebView *webView) const;

public:
    tabwidget(QWidget *parent=0);
        QNetworkAccessManager *nam;
        QNetworkCookieJar *coj;
        QStackedWidget *urllineedits;
        QCompleter *lineeditcompleter;
        QStringListModel *comodel;
        TabBar *tabbar;
        QDialog *g;
    public slots:
       //WebView* newtab();
       WebView* newTab(bool makecurr=false, QUrl url=QUrl::fromUserInput("google.com"));
       void zoomin(bool);
       void zoomout(bool);
       void zoomnormal(bool);
       void zoomtextonly(bool enable);
       void basicstyle(bool enable);
       void nostyle(bool enable);
       void editcontents(bool enable);
       void bkclicked(bool);
       void fwclicked(bool);
       void reloadclicked(bool);
       void reloadclicked();
       void setvalue(int x);

       void historyitemclicked();

       void loadUrlInCurrentTab(const QUrl &url);
       void cloneTab(int index = -1);
       void closeTabsho();
       void closeTab(int index = -1);
       void closeLeftTabs(int index);
       void closeRightTabs(int index);
       void closeOtherTabs(int index);
       void reloadTab(int index = -1);
       void reloadTabsho();
       void reopenclosed();
       void reloadAllTabs();
       void nextTab();
       void previousTab();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void currentChanged(int index);
    void webViewLoadStarted();
    void webViewLoadFinished();
    void webViewIconChanged();
    void webViewTitleChanged(const QString &title);
    void webViewUrlChanged(const QUrl &url);
    void lineEditReturnPressed();
    void windowCloseRequested();
    void moveTab(int fromIndex, int toIndex);


};

#endif // TABWIDGET_H
