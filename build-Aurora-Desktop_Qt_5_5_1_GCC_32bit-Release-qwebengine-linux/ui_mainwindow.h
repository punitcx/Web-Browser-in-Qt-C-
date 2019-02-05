/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionQuit;
    QAction *actionNew_Tab;
    QAction *actionNew_Window;
    QAction *actionFull_Screen;
    QAction *actionVirtual_Keyboard;
    QAction *actionDownloads;
    QAction *actionScheduled_Shutdown_Timer;
    QAction *actionIP_Finder;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFind_Replace;
    QAction *actionSelect_All;
    QAction *actionToolbars;
    QAction *actionSidebars;
    QAction *actionNo_Style;
    QAction *actionBasic;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionReset;
    QAction *actionHelp;
    QAction *actionTour;
    QAction *actionShortcuts;
    QAction *actionFeedback;
    QAction *actionAbout_Aurora;
    QAction *actionEnable_Smart_Shortcuts;
    QAction *action_3;
    QAction *actionEnable_Free_Page_Editor;
    QAction *actionView_Source;
    QAction *actionPage_Source;
    QAction *actionSave_Page_As;
    QAction *actionZoom_Text_Only;
    QAction *actionShow_History;
    QAction *actionNew_Private_Window;
    QAction *actionPrint_Preview;
    QAction *actionPrint;
    QAction *actionClear_Recent_History;
    QAction *actionRestore_Previous_Session;
    QAction *actionRecently_Closed_Tabs;
    QAction *actionWeb_Console;
    QAction *actionTake_Screenshot;
    QAction *actionTransparent_View;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuPage_Look;
    QMenu *menuZoom;
    QMenu *menuHistory;
    QMenu *menuBookmarks;
    QMenu *menuTools;
    QMenu *menuSpecial_Tools;
    QMenu *menuWeb_Developer;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(530, 502);
        MainWindow->setMinimumSize(QSize(530, 502));
        MainWindow->setMaximumSize(QSize(530, 502));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionNew_Tab = new QAction(MainWindow);
        actionNew_Tab->setObjectName(QStringLiteral("actionNew_Tab"));
        actionNew_Tab->setVisible(false);
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QStringLiteral("actionNew_Window"));
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        actionVirtual_Keyboard = new QAction(MainWindow);
        actionVirtual_Keyboard->setObjectName(QStringLiteral("actionVirtual_Keyboard"));
        actionDownloads = new QAction(MainWindow);
        actionDownloads->setObjectName(QStringLiteral("actionDownloads"));
        actionDownloads->setEnabled(false);
        actionScheduled_Shutdown_Timer = new QAction(MainWindow);
        actionScheduled_Shutdown_Timer->setObjectName(QStringLiteral("actionScheduled_Shutdown_Timer"));
        actionIP_Finder = new QAction(MainWindow);
        actionIP_Finder->setObjectName(QStringLiteral("actionIP_Finder"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName(QStringLiteral("actionFind_Replace"));
        actionFind_Replace->setEnabled(false);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionToolbars = new QAction(MainWindow);
        actionToolbars->setObjectName(QStringLiteral("actionToolbars"));
        actionToolbars->setCheckable(true);
        actionSidebars = new QAction(MainWindow);
        actionSidebars->setObjectName(QStringLiteral("actionSidebars"));
        actionSidebars->setCheckable(true);
        actionSidebars->setEnabled(true);
        actionNo_Style = new QAction(MainWindow);
        actionNo_Style->setObjectName(QStringLiteral("actionNo_Style"));
        actionNo_Style->setCheckable(true);
        actionBasic = new QAction(MainWindow);
        actionBasic->setObjectName(QStringLiteral("actionBasic"));
        actionBasic->setCheckable(true);
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionTour = new QAction(MainWindow);
        actionTour->setObjectName(QStringLiteral("actionTour"));
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QStringLiteral("actionShortcuts"));
        actionFeedback = new QAction(MainWindow);
        actionFeedback->setObjectName(QStringLiteral("actionFeedback"));
        actionAbout_Aurora = new QAction(MainWindow);
        actionAbout_Aurora->setObjectName(QStringLiteral("actionAbout_Aurora"));
        actionEnable_Smart_Shortcuts = new QAction(MainWindow);
        actionEnable_Smart_Shortcuts->setObjectName(QStringLiteral("actionEnable_Smart_Shortcuts"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        actionEnable_Free_Page_Editor = new QAction(MainWindow);
        actionEnable_Free_Page_Editor->setObjectName(QStringLiteral("actionEnable_Free_Page_Editor"));
        actionEnable_Free_Page_Editor->setCheckable(true);
        actionView_Source = new QAction(MainWindow);
        actionView_Source->setObjectName(QStringLiteral("actionView_Source"));
        actionPage_Source = new QAction(MainWindow);
        actionPage_Source->setObjectName(QStringLiteral("actionPage_Source"));
        actionSave_Page_As = new QAction(MainWindow);
        actionSave_Page_As->setObjectName(QStringLiteral("actionSave_Page_As"));
        actionSave_Page_As->setVisible(false);
        actionZoom_Text_Only = new QAction(MainWindow);
        actionZoom_Text_Only->setObjectName(QStringLiteral("actionZoom_Text_Only"));
        actionZoom_Text_Only->setCheckable(true);
        actionZoom_Text_Only->setEnabled(true);
        actionShow_History = new QAction(MainWindow);
        actionShow_History->setObjectName(QStringLiteral("actionShow_History"));
        actionShow_History->setEnabled(true);
        actionNew_Private_Window = new QAction(MainWindow);
        actionNew_Private_Window->setObjectName(QStringLiteral("actionNew_Private_Window"));
        actionPrint_Preview = new QAction(MainWindow);
        actionPrint_Preview->setObjectName(QStringLiteral("actionPrint_Preview"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionClear_Recent_History = new QAction(MainWindow);
        actionClear_Recent_History->setObjectName(QStringLiteral("actionClear_Recent_History"));
        actionRestore_Previous_Session = new QAction(MainWindow);
        actionRestore_Previous_Session->setObjectName(QStringLiteral("actionRestore_Previous_Session"));
        actionRecently_Closed_Tabs = new QAction(MainWindow);
        actionRecently_Closed_Tabs->setObjectName(QStringLiteral("actionRecently_Closed_Tabs"));
        actionWeb_Console = new QAction(MainWindow);
        actionWeb_Console->setObjectName(QStringLiteral("actionWeb_Console"));
        actionTake_Screenshot = new QAction(MainWindow);
        actionTake_Screenshot->setObjectName(QStringLiteral("actionTake_Screenshot"));
        actionTransparent_View = new QAction(MainWindow);
        actionTransparent_View->setObjectName(QStringLiteral("actionTransparent_View"));
        actionTransparent_View->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuPage_Look = new QMenu(menuView);
        menuPage_Look->setObjectName(QStringLiteral("menuPage_Look"));
        menuPage_Look->setEnabled(false);
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuHistory = new QMenu(menuBar);
        menuHistory->setObjectName(QStringLiteral("menuHistory"));
        menuBookmarks = new QMenu(menuBar);
        menuBookmarks->setObjectName(QStringLiteral("menuBookmarks"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuSpecial_Tools = new QMenu(menuTools);
        menuSpecial_Tools->setObjectName(QStringLiteral("menuSpecial_Tools"));
        menuWeb_Developer = new QMenu(menuTools);
        menuWeb_Developer->setObjectName(QStringLiteral("menuWeb_Developer"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHistory->menuAction());
        menuBar->addAction(menuBookmarks->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Tab);
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionNew_Private_Window);
        menuFile->addSeparator();
        menuFile->addAction(actionOpenFile);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_Page_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint_Preview);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind_Replace);
        menuView->addAction(actionToolbars);
        menuView->addAction(actionSidebars);
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuView->addAction(menuPage_Look->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionZoom_Text_Only);
        menuView->addAction(actionFull_Screen);
        menuPage_Look->addAction(actionNo_Style);
        menuPage_Look->addAction(actionBasic);
        menuZoom->addAction(actionZoom_In);
        menuZoom->addAction(actionZoom_Out);
        menuZoom->addSeparator();
        menuZoom->addAction(actionReset);
        menuHistory->addAction(actionShow_History);
        menuHistory->addAction(actionClear_Recent_History);
        menuHistory->addSeparator();
        menuHistory->addAction(actionRestore_Previous_Session);
        menuHistory->addAction(actionRecently_Closed_Tabs);
        menuTools->addAction(actionDownloads);
        menuTools->addSeparator();
        menuTools->addAction(actionEnable_Free_Page_Editor);
        menuTools->addSeparator();
        menuTools->addAction(menuWeb_Developer->menuAction());
        menuTools->addAction(menuSpecial_Tools->menuAction());
        menuSpecial_Tools->addAction(actionScheduled_Shutdown_Timer);
        menuSpecial_Tools->addAction(actionIP_Finder);
        menuSpecial_Tools->addAction(actionTake_Screenshot);
        menuSpecial_Tools->addAction(actionTransparent_View);
        menuSpecial_Tools->addAction(actionVirtual_Keyboard);
        menuWeb_Developer->addAction(actionPage_Source);
        menuWeb_Developer->addAction(actionWeb_Console);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionShortcuts);
        menuHelp->addSeparator();
        menuHelp->addAction(actionFeedback);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Aurora);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpenFile->setText(QApplication::translate("MainWindow", "Open File", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionNew_Tab->setText(QApplication::translate("MainWindow", "New Tab", 0));
        actionNew_Window->setText(QApplication::translate("MainWindow", "New Window", 0));
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Full Screen", 0));
        actionVirtual_Keyboard->setText(QApplication::translate("MainWindow", "Virtual-Keyboard", 0));
        actionDownloads->setText(QApplication::translate("MainWindow", "Downloads", 0));
        actionScheduled_Shutdown_Timer->setText(QApplication::translate("MainWindow", "Scheduled Shutdown Timer", 0));
        actionIP_Finder->setText(QApplication::translate("MainWindow", "IP-Finder", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionFind_Replace->setText(QApplication::translate("MainWindow", "Find/Replace", 0));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0));
        actionToolbars->setText(QApplication::translate("MainWindow", "Toolbar", 0));
        actionSidebars->setText(QApplication::translate("MainWindow", "Sidebar", 0));
        actionNo_Style->setText(QApplication::translate("MainWindow", "No-Style", 0));
        actionBasic->setText(QApplication::translate("MainWindow", "Basic Style", 0));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Creation Help", 0));
        actionTour->setText(QApplication::translate("MainWindow", "Creation Tour", 0));
        actionShortcuts->setText(QApplication::translate("MainWindow", "Creation Shortcuts", 0));
        actionFeedback->setText(QApplication::translate("MainWindow", "Send Feedback", 0));
        actionAbout_Aurora->setText(QApplication::translate("MainWindow", "About Creation", 0));
        actionEnable_Smart_Shortcuts->setText(QApplication::translate("MainWindow", "Enable Smart Shortcuts", 0));
        action_3->setText(QApplication::translate("MainWindow", "Enable Free Page Editor", 0));
        actionEnable_Free_Page_Editor->setText(QApplication::translate("MainWindow", "Enable Content Editor", 0));
        actionView_Source->setText(QApplication::translate("MainWindow", "Page Source", 0));
        actionPage_Source->setText(QApplication::translate("MainWindow", "Page Source", 0));
        actionSave_Page_As->setText(QApplication::translate("MainWindow", "Save Page As", 0));
        actionZoom_Text_Only->setText(QApplication::translate("MainWindow", "Zoom Text Only", 0));
        actionShow_History->setText(QApplication::translate("MainWindow", "Show All History", 0));
        actionNew_Private_Window->setText(QApplication::translate("MainWindow", "New Private Window", 0));
        actionPrint_Preview->setText(QApplication::translate("MainWindow", "Print Preview", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        actionClear_Recent_History->setText(QApplication::translate("MainWindow", "Clear Recent History", 0));
        actionRestore_Previous_Session->setText(QApplication::translate("MainWindow", "Restore Previous Session", 0));
        actionRecently_Closed_Tabs->setText(QApplication::translate("MainWindow", "Recently Closed Tabs", 0));
        actionWeb_Console->setText(QApplication::translate("MainWindow", "Web Console", 0));
        actionTake_Screenshot->setText(QApplication::translate("MainWindow", "Take Screenshot", 0));
        actionTransparent_View->setText(QApplication::translate("MainWindow", "Transparent View", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuPage_Look->setTitle(QApplication::translate("MainWindow", "Page Look", 0));
        menuZoom->setTitle(QApplication::translate("MainWindow", "Zoom", 0));
        menuHistory->setTitle(QApplication::translate("MainWindow", "History", 0));
        menuBookmarks->setTitle(QApplication::translate("MainWindow", "Bookmarks", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuSpecial_Tools->setTitle(QApplication::translate("MainWindow", "Special Tools", 0));
        menuWeb_Developer->setTitle(QApplication::translate("MainWindow", "Web Developer", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
