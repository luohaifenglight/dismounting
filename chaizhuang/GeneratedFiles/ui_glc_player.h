/********************************************************************************
** Form generated from reading UI file 'glc_player.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLC_PLAYER_H
#define UI_GLC_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_glc_playerClass
{
public:
    QAction *action_Open;
    QAction *action_Quit;
    QAction *action_Help;
    QAction *action_About;
    QAction *action_IsoView1;
    QAction *action_FrontView;
    QAction *action_RightView;
    QAction *action_TopView;
    QAction *action_Reframe;
    QAction *action_Pan;
    QAction *action_Rotate;
    QAction *action_ZoomIn;
    QAction *action_ZoomOut;
    QAction *action_ViewManipToggle;
    QAction *action_FileToggle;
    QAction *action_DefinedViewsToggle;
    QAction *action_AlbumManagement;
    QAction *action_Settings;
    QAction *action_ViewCenter;
    QAction *action_Select;
    QAction *action_Zoom;
    QAction *action_SnapShot;
    QAction *action_RenderPoints;
    QAction *action_RenderWireframe;
    QAction *action_RenderShading;
    QAction *action_NewAlbum;
    QAction *action_FullScreen;
    QAction *action_Property;
    QAction *action_OpenAlbum;
    QAction *action_SaveAlbum;
    QAction *action_SaveAlbumAs;
    QAction *action_CameraProperty;
    QAction *action_SelectionProperty;
    QAction *action_EditLight;
    QAction *actionUnselectAll;
    QAction *actionShow_all;
    QAction *actionShow_Hide;
    QAction *actionHide_unselected;
    QAction *actionTwo_sided_Lightning;
    QAction *actionSwap_visible_space;
    QAction *actionSelectAll;
    QAction *actionReframeOnSelection;
    QAction *actionSet_Shader;
    QAction *actionAssign_Shader;
    QAction *actionExport_To_Folder;
    QAction *actionMultiShots;
    QAction *actionExport_to_web;
    QAction *action_IsoView2;
    QAction *action_IsoView3;
    QAction *action_IsoView4;
    QAction *actionChange_UP_Vector;
    QAction *actionTrackball;
    QAction *actionTurnTable;
    QAction *action_ShadingAndWire;
    QAction *actionDisplay_Octree;
    QAction *actionSectioning;
    QAction *actionFly;
    QAction *actionPerspective;
    QAction *actionParallel;
    QAction *actionExport_current_Model;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionNew_Model;
    QAction *actionError_Log;
    QAction *actionOpen_Models_from_path;
    QAction *actionShowHideSection;
    QAction *actionCut;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuRecent_Models;
    QMenu *menuRecent_Album;
    QMenu *menu_Aide;
    QMenu *menu_Window;
    QMenu *menu_View;
    QMenu *menu_NamedView;
    QMenu *menuNavigation_Mode;
    QMenu *menuProjection_Mode;
    QMenu *menu_Tools;
    QMenu *menuRender;
    QMenu *menuRender_Mode;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar_File;
    QToolBar *toolBar_DefinedView;
    QToolBar *toolbar_View;
    QDockWidget *cameraProperties;
    QWidget *dockWidgetContents;
    QDockWidget *selectionDockWidget;
    QWidget *dockWidgetContents_3;
    QToolBar *toolBar_2;
    QDockWidget *albumManagementWindow;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *vboxLayout;
    QToolBar *toolBar_render;
    QToolBar *toolBar;

    void setupUi(QMainWindow *glc_playerClass)
    {
        if (glc_playerClass->objectName().isEmpty())
            glc_playerClass->setObjectName(QStringLiteral("glc_playerClass"));
        glc_playerClass->setWindowModality(Qt::NonModal);
        glc_playerClass->resize(1298, 701);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        glc_playerClass->setWindowIcon(icon);
        glc_playerClass->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        glc_playerClass->setUnifiedTitleAndToolBarOnMac(false);
        action_Open = new QAction(glc_playerClass);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_Quit = new QAction(glc_playerClass);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setMenuRole(QAction::QuitRole);
        action_Help = new QAction(glc_playerClass);
        action_Help->setObjectName(QStringLiteral("action_Help"));
        action_About = new QAction(glc_playerClass);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_About->setMenuRole(QAction::AboutRole);
        action_IsoView1 = new QAction(glc_playerClass);
        action_IsoView1->setObjectName(QStringLiteral("action_IsoView1"));
        action_IsoView1->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/IsoView1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_IsoView1->setIcon(icon2);
        action_FrontView = new QAction(glc_playerClass);
        action_FrontView->setObjectName(QStringLiteral("action_FrontView"));
        action_FrontView->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/FrontView.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_FrontView->setIcon(icon3);
        action_RightView = new QAction(glc_playerClass);
        action_RightView->setObjectName(QStringLiteral("action_RightView"));
        action_RightView->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/RightView.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RightView->setIcon(icon4);
        action_TopView = new QAction(glc_playerClass);
        action_TopView->setObjectName(QStringLiteral("action_TopView"));
        action_TopView->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/TopView.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_TopView->setIcon(icon5);
        action_Reframe = new QAction(glc_playerClass);
        action_Reframe->setObjectName(QStringLiteral("action_Reframe"));
        action_Reframe->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/FitAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Reframe->setIcon(icon6);
        action_Pan = new QAction(glc_playerClass);
        action_Pan->setObjectName(QStringLiteral("action_Pan"));
        action_Pan->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/Pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Pan->setIcon(icon7);
        action_Rotate = new QAction(glc_playerClass);
        action_Rotate->setObjectName(QStringLiteral("action_Rotate"));
        action_Rotate->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/Orbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Rotate->setIcon(icon8);
        action_ZoomIn = new QAction(glc_playerClass);
        action_ZoomIn->setObjectName(QStringLiteral("action_ZoomIn"));
        action_ZoomIn->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/ZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ZoomIn->setIcon(icon9);
        action_ZoomOut = new QAction(glc_playerClass);
        action_ZoomOut->setObjectName(QStringLiteral("action_ZoomOut"));
        action_ZoomOut->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/ZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ZoomOut->setIcon(icon10);
        action_ViewManipToggle = new QAction(glc_playerClass);
        action_ViewManipToggle->setObjectName(QStringLiteral("action_ViewManipToggle"));
        action_ViewManipToggle->setCheckable(true);
        action_ViewManipToggle->setChecked(true);
        action_FileToggle = new QAction(glc_playerClass);
        action_FileToggle->setObjectName(QStringLiteral("action_FileToggle"));
        action_FileToggle->setCheckable(true);
        action_FileToggle->setChecked(true);
        action_DefinedViewsToggle = new QAction(glc_playerClass);
        action_DefinedViewsToggle->setObjectName(QStringLiteral("action_DefinedViewsToggle"));
        action_DefinedViewsToggle->setCheckable(true);
        action_DefinedViewsToggle->setChecked(true);
        action_AlbumManagement = new QAction(glc_playerClass);
        action_AlbumManagement->setObjectName(QStringLiteral("action_AlbumManagement"));
        action_AlbumManagement->setCheckable(true);
        action_AlbumManagement->setChecked(true);
        action_Settings = new QAction(glc_playerClass);
        action_Settings->setObjectName(QStringLiteral("action_Settings"));
        action_Settings->setMenuRole(QAction::PreferencesRole);
        action_ViewCenter = new QAction(glc_playerClass);
        action_ViewCenter->setObjectName(QStringLiteral("action_ViewCenter"));
        action_ViewCenter->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/Center.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ViewCenter->setIcon(icon11);
        action_Select = new QAction(glc_playerClass);
        action_Select->setObjectName(QStringLiteral("action_Select"));
        action_Select->setCheckable(true);
        action_Select->setChecked(true);
        action_Select->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/Cursor.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Select->setIcon(icon12);
        action_Zoom = new QAction(glc_playerClass);
        action_Zoom->setObjectName(QStringLiteral("action_Zoom"));
        action_Zoom->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/Zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Zoom->setIcon(icon13);
        action_SnapShot = new QAction(glc_playerClass);
        action_SnapShot->setObjectName(QStringLiteral("action_SnapShot"));
        action_SnapShot->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/SnapShoot.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SnapShot->setIcon(icon14);
        action_RenderPoints = new QAction(glc_playerClass);
        action_RenderPoints->setObjectName(QStringLiteral("action_RenderPoints"));
        action_RenderPoints->setCheckable(true);
        action_RenderPoints->setEnabled(false);
        action_RenderWireframe = new QAction(glc_playerClass);
        action_RenderWireframe->setObjectName(QStringLiteral("action_RenderWireframe"));
        action_RenderWireframe->setCheckable(true);
        action_RenderWireframe->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/CylindreWire.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RenderWireframe->setIcon(icon15);
        action_RenderShading = new QAction(glc_playerClass);
        action_RenderShading->setObjectName(QStringLiteral("action_RenderShading"));
        action_RenderShading->setCheckable(true);
        action_RenderShading->setChecked(true);
        action_RenderShading->setEnabled(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/CylindreShading.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RenderShading->setIcon(icon16);
        action_NewAlbum = new QAction(glc_playerClass);
        action_NewAlbum->setObjectName(QStringLiteral("action_NewAlbum"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_NewAlbum->setIcon(icon17);
        action_FullScreen = new QAction(glc_playerClass);
        action_FullScreen->setObjectName(QStringLiteral("action_FullScreen"));
        action_FullScreen->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/FullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_FullScreen->setIcon(icon18);
        action_Property = new QAction(glc_playerClass);
        action_Property->setObjectName(QStringLiteral("action_Property"));
        action_Property->setEnabled(false);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/InstanceProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Property->setIcon(icon19);
        action_OpenAlbum = new QAction(glc_playerClass);
        action_OpenAlbum->setObjectName(QStringLiteral("action_OpenAlbum"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/OpenAlbum.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_OpenAlbum->setIcon(icon20);
        action_SaveAlbum = new QAction(glc_playerClass);
        action_SaveAlbum->setObjectName(QStringLiteral("action_SaveAlbum"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/images/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAlbum->setIcon(icon21);
        action_SaveAlbumAs = new QAction(glc_playerClass);
        action_SaveAlbumAs->setObjectName(QStringLiteral("action_SaveAlbumAs"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/images/SaveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAlbumAs->setIcon(icon22);
        action_CameraProperty = new QAction(glc_playerClass);
        action_CameraProperty->setObjectName(QStringLiteral("action_CameraProperty"));
        action_CameraProperty->setCheckable(true);
        action_CameraProperty->setChecked(true);
        action_SelectionProperty = new QAction(glc_playerClass);
        action_SelectionProperty->setObjectName(QStringLiteral("action_SelectionProperty"));
        action_SelectionProperty->setCheckable(true);
        action_SelectionProperty->setChecked(true);
        action_EditLight = new QAction(glc_playerClass);
        action_EditLight->setObjectName(QStringLiteral("action_EditLight"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/images/LightBulb.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_EditLight->setIcon(icon23);
        actionUnselectAll = new QAction(glc_playerClass);
        actionUnselectAll->setObjectName(QStringLiteral("actionUnselectAll"));
        actionUnselectAll->setEnabled(false);
        actionShow_all = new QAction(glc_playerClass);
        actionShow_all->setObjectName(QStringLiteral("actionShow_all"));
        actionShow_all->setEnabled(false);
        actionShow_Hide = new QAction(glc_playerClass);
        actionShow_Hide->setObjectName(QStringLiteral("actionShow_Hide"));
        actionShow_Hide->setEnabled(false);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/images/ShowNoShow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Hide->setIcon(icon24);
        actionHide_unselected = new QAction(glc_playerClass);
        actionHide_unselected->setObjectName(QStringLiteral("actionHide_unselected"));
        actionHide_unselected->setEnabled(false);
        actionTwo_sided_Lightning = new QAction(glc_playerClass);
        actionTwo_sided_Lightning->setObjectName(QStringLiteral("actionTwo_sided_Lightning"));
        actionTwo_sided_Lightning->setCheckable(true);
        actionTwo_sided_Lightning->setChecked(true);
        actionSwap_visible_space = new QAction(glc_playerClass);
        actionSwap_visible_space->setObjectName(QStringLiteral("actionSwap_visible_space"));
        actionSwap_visible_space->setEnabled(false);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/images/SwapVisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSwap_visible_space->setIcon(icon25);
        actionSelectAll = new QAction(glc_playerClass);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionSelectAll->setEnabled(false);
        actionReframeOnSelection = new QAction(glc_playerClass);
        actionReframeOnSelection->setObjectName(QStringLiteral("actionReframeOnSelection"));
        actionReframeOnSelection->setEnabled(false);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/images/FitSelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReframeOnSelection->setIcon(icon26);
        actionSet_Shader = new QAction(glc_playerClass);
        actionSet_Shader->setObjectName(QStringLiteral("actionSet_Shader"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/images/Shader.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_Shader->setIcon(icon27);
        actionAssign_Shader = new QAction(glc_playerClass);
        actionAssign_Shader->setObjectName(QStringLiteral("actionAssign_Shader"));
        actionAssign_Shader->setEnabled(false);
        actionAssign_Shader->setIcon(icon27);
        actionExport_To_Folder = new QAction(glc_playerClass);
        actionExport_To_Folder->setObjectName(QStringLiteral("actionExport_To_Folder"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/images/SendAction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_To_Folder->setIcon(icon28);
        actionMultiShots = new QAction(glc_playerClass);
        actionMultiShots->setObjectName(QStringLiteral("actionMultiShots"));
        actionMultiShots->setEnabled(false);
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/images/TurnTable.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMultiShots->setIcon(icon29);
        actionExport_to_web = new QAction(glc_playerClass);
        actionExport_to_web->setObjectName(QStringLiteral("actionExport_to_web"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/images/Globe.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_to_web->setIcon(icon30);
        action_IsoView2 = new QAction(glc_playerClass);
        action_IsoView2->setObjectName(QStringLiteral("action_IsoView2"));
        action_IsoView2->setEnabled(false);
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/images/IsoView2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_IsoView2->setIcon(icon31);
        action_IsoView3 = new QAction(glc_playerClass);
        action_IsoView3->setObjectName(QStringLiteral("action_IsoView3"));
        action_IsoView3->setEnabled(false);
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/images/IsoView3.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_IsoView3->setIcon(icon32);
        action_IsoView4 = new QAction(glc_playerClass);
        action_IsoView4->setObjectName(QStringLiteral("action_IsoView4"));
        action_IsoView4->setEnabled(false);
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/images/IsoView4.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_IsoView4->setIcon(icon33);
        actionChange_UP_Vector = new QAction(glc_playerClass);
        actionChange_UP_Vector->setObjectName(QStringLiteral("actionChange_UP_Vector"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/images/UpVector.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChange_UP_Vector->setIcon(icon34);
        actionTrackball = new QAction(glc_playerClass);
        actionTrackball->setObjectName(QStringLiteral("actionTrackball"));
        actionTrackball->setCheckable(true);
        actionTrackball->setIcon(icon8);
        actionTurnTable = new QAction(glc_playerClass);
        actionTurnTable->setObjectName(QStringLiteral("actionTurnTable"));
        actionTurnTable->setCheckable(true);
        actionTurnTable->setIcon(icon29);
        action_ShadingAndWire = new QAction(glc_playerClass);
        action_ShadingAndWire->setObjectName(QStringLiteral("action_ShadingAndWire"));
        action_ShadingAndWire->setCheckable(true);
        action_ShadingAndWire->setEnabled(false);
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/images/CylindreShadingAndWire.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ShadingAndWire->setIcon(icon35);
        actionDisplay_Octree = new QAction(glc_playerClass);
        actionDisplay_Octree->setObjectName(QStringLiteral("actionDisplay_Octree"));
        actionDisplay_Octree->setCheckable(true);
        actionSectioning = new QAction(glc_playerClass);
        actionSectioning->setObjectName(QStringLiteral("actionSectioning"));
        actionSectioning->setCheckable(true);
        actionSectioning->setEnabled(false);
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/images/Section.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSectioning->setIcon(icon36);
        actionFly = new QAction(glc_playerClass);
        actionFly->setObjectName(QStringLiteral("actionFly"));
        actionFly->setCheckable(true);
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/images/FlyMode.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFly->setIcon(icon37);
        actionPerspective = new QAction(glc_playerClass);
        actionPerspective->setObjectName(QStringLiteral("actionPerspective"));
        actionPerspective->setCheckable(true);
        actionPerspective->setChecked(true);
        actionParallel = new QAction(glc_playerClass);
        actionParallel->setObjectName(QStringLiteral("actionParallel"));
        actionParallel->setCheckable(true);
        actionExport_current_Model = new QAction(glc_playerClass);
        actionExport_current_Model->setObjectName(QStringLiteral("actionExport_current_Model"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/images/3DXMLDefaultPreview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_current_Model->setIcon(icon38);
        actionCopy = new QAction(glc_playerClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        actionPaste = new QAction(glc_playerClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setEnabled(false);
        actionNew_Model = new QAction(glc_playerClass);
        actionNew_Model->setObjectName(QStringLiteral("actionNew_Model"));
        actionError_Log = new QAction(glc_playerClass);
        actionError_Log->setObjectName(QStringLiteral("actionError_Log"));
        actionError_Log->setEnabled(false);
        actionOpen_Models_from_path = new QAction(glc_playerClass);
        actionOpen_Models_from_path->setObjectName(QStringLiteral("actionOpen_Models_from_path"));
        actionShowHideSection = new QAction(glc_playerClass);
        actionShowHideSection->setObjectName(QStringLiteral("actionShowHideSection"));
        actionShowHideSection->setCheckable(true);
        actionShowHideSection->setIcon(icon24);
        actionCut = new QAction(glc_playerClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        centralwidget = new QWidget(glc_playerClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAcceptDrops(true);
        glc_playerClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(glc_playerClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1298, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuRecent_Models = new QMenu(menu_File);
        menuRecent_Models->setObjectName(QStringLiteral("menuRecent_Models"));
        menuRecent_Album = new QMenu(menu_File);
        menuRecent_Album->setObjectName(QStringLiteral("menuRecent_Album"));
        menu_Aide = new QMenu(menubar);
        menu_Aide->setObjectName(QStringLiteral("menu_Aide"));
        menu_Window = new QMenu(menubar);
        menu_Window->setObjectName(QStringLiteral("menu_Window"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_NamedView = new QMenu(menu_View);
        menu_NamedView->setObjectName(QStringLiteral("menu_NamedView"));
        menuNavigation_Mode = new QMenu(menu_View);
        menuNavigation_Mode->setObjectName(QStringLiteral("menuNavigation_Mode"));
        menuProjection_Mode = new QMenu(menu_View);
        menuProjection_Mode->setObjectName(QStringLiteral("menuProjection_Mode"));
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menuRender = new QMenu(menubar);
        menuRender->setObjectName(QStringLiteral("menuRender"));
        menuRender_Mode = new QMenu(menuRender);
        menuRender_Mode->setObjectName(QStringLiteral("menuRender_Mode"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        glc_playerClass->setMenuBar(menubar);
        statusbar = new QStatusBar(glc_playerClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        glc_playerClass->setStatusBar(statusbar);
        toolBar_File = new QToolBar(glc_playerClass);
        toolBar_File->setObjectName(QStringLiteral("toolBar_File"));
        toolBar_File->setAutoFillBackground(false);
        toolBar_File->setMovable(true);
        toolBar_File->setIconSize(QSize(24, 24));
        toolBar_File->setFloatable(true);
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolBar_File);
        toolBar_DefinedView = new QToolBar(glc_playerClass);
        toolBar_DefinedView->setObjectName(QStringLiteral("toolBar_DefinedView"));
        toolBar_DefinedView->setEnabled(true);
        toolBar_DefinedView->setIconSize(QSize(24, 24));
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolBar_DefinedView);
        toolbar_View = new QToolBar(glc_playerClass);
        toolbar_View->setObjectName(QStringLiteral("toolbar_View"));
        toolbar_View->setIconSize(QSize(24, 24));
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolbar_View);
        cameraProperties = new QDockWidget(glc_playerClass);
        cameraProperties->setObjectName(QStringLiteral("cameraProperties"));
        cameraProperties->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::RightDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        cameraProperties->setWidget(dockWidgetContents);
        glc_playerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), cameraProperties);
        selectionDockWidget = new QDockWidget(glc_playerClass);
        selectionDockWidget->setObjectName(QStringLiteral("selectionDockWidget"));
        selectionDockWidget->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        selectionDockWidget->setWidget(dockWidgetContents_3);
        glc_playerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), selectionDockWidget);
        toolBar_2 = new QToolBar(glc_playerClass);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setIconSize(QSize(24, 24));
        toolBar_2->setToolButtonStyle(Qt::ToolButtonIconOnly);
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolBar_2);
        albumManagementWindow = new QDockWidget(glc_playerClass);
        albumManagementWindow->setObjectName(QStringLiteral("albumManagementWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(albumManagementWindow->sizePolicy().hasHeightForWidth());
        albumManagementWindow->setSizePolicy(sizePolicy);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        vboxLayout = new QVBoxLayout(dockWidgetContents_2);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        albumManagementWindow->setWidget(dockWidgetContents_2);
        glc_playerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), albumManagementWindow);
        toolBar_render = new QToolBar(glc_playerClass);
        toolBar_render->setObjectName(QStringLiteral("toolBar_render"));
        toolBar_render->setIconSize(QSize(24, 32));
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolBar_render);
        toolBar = new QToolBar(glc_playerClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(24, 24));
        glc_playerClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menu_Window->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuRender->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menu_Aide->menuAction());
        menu_File->addAction(action_NewAlbum);
        menu_File->addAction(action_OpenAlbum);
        menu_File->addAction(menuRecent_Album->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionOpen_Models_from_path);
        menu_File->addSeparator();
        menu_File->addAction(action_SaveAlbum);
        menu_File->addAction(action_SaveAlbumAs);
        menu_File->addSeparator();
        menu_File->addAction(actionExport_To_Folder);
        menu_File->addAction(actionExport_to_web);
        menu_File->addAction(actionExport_current_Model);
        menu_File->addSeparator();
        menu_File->addAction(action_Open);
        menu_File->addSeparator();
        menu_File->addAction(menuRecent_Models->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Aide->addAction(action_Help);
        menu_Aide->addSeparator();
        menu_Aide->addAction(action_About);
        menu_Window->addAction(action_AlbumManagement);
        menu_Window->addAction(action_CameraProperty);
        menu_Window->addAction(action_SelectionProperty);
        menu_Window->addSeparator();
        menu_Window->addAction(actionError_Log);
        menu_View->addAction(actionChange_UP_Vector);
        menu_View->addAction(menuNavigation_Mode->menuAction());
        menu_View->addAction(menuProjection_Mode->menuAction());
        menu_View->addSeparator();
        menu_View->addAction(menu_NamedView->menuAction());
        menu_View->addSeparator();
        menu_View->addAction(action_Reframe);
        menu_View->addAction(actionReframeOnSelection);
        menu_View->addSeparator();
        menu_View->addAction(action_Select);
        menu_View->addAction(action_ViewCenter);
        menu_View->addAction(action_Pan);
        menu_View->addAction(action_Rotate);
        menu_View->addAction(action_Zoom);
        menu_View->addSeparator();
        menu_View->addAction(action_ZoomIn);
        menu_View->addAction(action_ZoomOut);
        menu_View->addSeparator();
        menu_View->addAction(actionShow_Hide);
        menu_View->addAction(actionHide_unselected);
        menu_View->addAction(actionShow_all);
        menu_View->addAction(actionSwap_visible_space);
        menu_View->addSeparator();
        menu_View->addAction(action_FullScreen);
        menu_View->addSeparator();
        menu_View->addAction(actionDisplay_Octree);
        menu_NamedView->addAction(action_IsoView1);
        menu_NamedView->addAction(action_IsoView2);
        menu_NamedView->addAction(action_IsoView3);
        menu_NamedView->addAction(action_IsoView4);
        menu_NamedView->addAction(action_FrontView);
        menu_NamedView->addAction(action_RightView);
        menu_NamedView->addAction(action_TopView);
        menuNavigation_Mode->addAction(actionTrackball);
        menuNavigation_Mode->addAction(actionTurnTable);
        menuNavigation_Mode->addAction(actionFly);
        menuProjection_Mode->addAction(actionPerspective);
        menuProjection_Mode->addAction(actionParallel);
        menu_Tools->addAction(action_SnapShot);
        menu_Tools->addAction(actionMultiShots);
        menu_Tools->addSeparator();
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionSectioning);
        menu_Tools->addAction(action_Settings);
        menuRender->addAction(actionSet_Shader);
        menuRender->addSeparator();
        menuRender->addAction(menuRender_Mode->menuAction());
        menuRender->addAction(actionTwo_sided_Lightning);
        menuRender->addSeparator();
        menuRender->addAction(action_EditLight);
        menuRender_Mode->addAction(action_RenderPoints);
        menuRender_Mode->addAction(action_RenderWireframe);
        menuRender_Mode->addAction(action_RenderShading);
        menuRender_Mode->addAction(action_ShadingAndWire);
        menuEdit->addAction(actionSelectAll);
        menuEdit->addAction(actionUnselectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAssign_Shader);
        menuEdit->addSeparator();
        menuEdit->addAction(action_Property);
        toolBar_File->addAction(action_NewAlbum);
        toolBar_File->addAction(action_OpenAlbum);
        toolBar_File->addAction(action_SaveAlbum);
        toolBar_File->addSeparator();
        toolBar_File->addAction(action_Open);
        toolBar_DefinedView->addAction(actionChange_UP_Vector);
        toolBar_DefinedView->addSeparator();
        toolBar_DefinedView->addAction(action_IsoView1);
        toolBar_DefinedView->addAction(action_IsoView2);
        toolBar_DefinedView->addAction(action_IsoView3);
        toolBar_DefinedView->addAction(action_IsoView4);
        toolBar_DefinedView->addAction(action_FrontView);
        toolBar_DefinedView->addAction(action_RightView);
        toolBar_DefinedView->addAction(action_TopView);
        toolbar_View->addAction(action_Reframe);
        toolbar_View->addAction(actionReframeOnSelection);
        toolbar_View->addSeparator();
        toolbar_View->addAction(action_Select);
        toolbar_View->addAction(action_ViewCenter);
        toolbar_View->addAction(action_Pan);
        toolbar_View->addAction(action_Rotate);
        toolbar_View->addAction(action_Zoom);
        toolbar_View->addSeparator();
        toolbar_View->addAction(action_ZoomIn);
        toolbar_View->addAction(action_ZoomOut);
        toolBar_2->addAction(actionShow_Hide);
        toolBar_2->addAction(actionSwap_visible_space);
        toolBar_render->addAction(action_RenderShading);
        toolBar_render->addAction(action_ShadingAndWire);
        toolBar_render->addAction(action_RenderWireframe);
        toolBar->addAction(action_SnapShot);
        toolBar->addSeparator();
        toolBar->addAction(actionSectioning);
        toolBar->addAction(actionShowHideSection);

        retranslateUi(glc_playerClass);

        QMetaObject::connectSlotsByName(glc_playerClass);
    } // setupUi

    void retranslateUi(QMainWindow *glc_playerClass)
    {
        glc_playerClass->setWindowTitle(QApplication::translate("glc_playerClass", "GLC-Player", 0));
        action_Open->setText(QApplication::translate("glc_playerClass", "&Open", 0));
#ifndef QT_NO_STATUSTIP
        action_Open->setStatusTip(QApplication::translate("glc_playerClass", "Open And Add existing files in current session", 0));
#endif // QT_NO_STATUSTIP
        action_Open->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+O", 0));
        action_Quit->setText(QApplication::translate("glc_playerClass", "&Exit", 0));
#ifndef QT_NO_STATUSTIP
        action_Quit->setStatusTip(QApplication::translate("glc_playerClass", "Quits GLC_Player", 0));
#endif // QT_NO_STATUSTIP
        action_Help->setText(QApplication::translate("glc_playerClass", "Online Help", 0));
        action_Help->setShortcut(QApplication::translate("glc_playerClass", "F1", 0));
        action_About->setText(QApplication::translate("glc_playerClass", "About GLC_Player", 0));
#ifndef QT_NO_STATUSTIP
        action_About->setStatusTip(QApplication::translate("glc_playerClass", "Provides help on the current product", 0));
#endif // QT_NO_STATUSTIP
        action_IsoView1->setText(QApplication::translate("glc_playerClass", "Iso View 1", 0));
#ifndef QT_NO_STATUSTIP
        action_IsoView1->setStatusTip(QApplication::translate("glc_playerClass", "Applies isometric view", 0));
#endif // QT_NO_STATUSTIP
        action_IsoView1->setShortcut(QApplication::translate("glc_playerClass", "Shift+1", 0));
        action_FrontView->setText(QApplication::translate("glc_playerClass", "Front View", 0));
#ifndef QT_NO_STATUSTIP
        action_FrontView->setStatusTip(QApplication::translate("glc_playerClass", "Applies front view", 0));
#endif // QT_NO_STATUSTIP
        action_FrontView->setShortcut(QApplication::translate("glc_playerClass", "Shift+5", 0));
        action_RightView->setText(QApplication::translate("glc_playerClass", "Right View", 0));
#ifndef QT_NO_STATUSTIP
        action_RightView->setStatusTip(QApplication::translate("glc_playerClass", "Applies left view", 0));
#endif // QT_NO_STATUSTIP
        action_RightView->setShortcut(QApplication::translate("glc_playerClass", "Shift+6", 0));
        action_TopView->setText(QApplication::translate("glc_playerClass", "Top View", 0));
#ifndef QT_NO_STATUSTIP
        action_TopView->setStatusTip(QApplication::translate("glc_playerClass", "Applies top view", 0));
#endif // QT_NO_STATUSTIP
        action_TopView->setShortcut(QApplication::translate("glc_playerClass", "Shift+7", 0));
        action_Reframe->setText(QApplication::translate("glc_playerClass", "Fit All In", 0));
#ifndef QT_NO_STATUSTIP
        action_Reframe->setStatusTip(QApplication::translate("glc_playerClass", "Zooms in or out so all geometries optimally fills the available space", 0));
#endif // QT_NO_STATUSTIP
        action_Reframe->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+R", 0));
        action_Pan->setText(QApplication::translate("glc_playerClass", "Pan Mode", 0));
#ifndef QT_NO_STATUSTIP
        action_Pan->setStatusTip(QApplication::translate("glc_playerClass", "Pans with left mouse button Mode", 0));
#endif // QT_NO_STATUSTIP
        action_Pan->setShortcut(QApplication::translate("glc_playerClass", "P", 0));
        action_Rotate->setText(QApplication::translate("glc_playerClass", "Rotate Mode", 0));
#ifndef QT_NO_STATUSTIP
        action_Rotate->setStatusTip(QApplication::translate("glc_playerClass", "Rotate with left mouse button Mode", 0));
#endif // QT_NO_STATUSTIP
        action_Rotate->setShortcut(QApplication::translate("glc_playerClass", "R", 0));
        action_ZoomIn->setText(QApplication::translate("glc_playerClass", "Zoom In", 0));
#ifndef QT_NO_STATUSTIP
        action_ZoomIn->setStatusTip(QApplication::translate("glc_playerClass", "Zooms in in increments", 0));
#endif // QT_NO_STATUSTIP
        action_ZoomIn->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+Up", 0));
        action_ZoomOut->setText(QApplication::translate("glc_playerClass", "Zoom Out", 0));
#ifndef QT_NO_STATUSTIP
        action_ZoomOut->setStatusTip(QApplication::translate("glc_playerClass", "Zooms out in increments", 0));
#endif // QT_NO_STATUSTIP
        action_ZoomOut->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+Down", 0));
        action_ViewManipToggle->setText(QApplication::translate("glc_playerClass", "View Manipulation", 0));
        action_FileToggle->setText(QApplication::translate("glc_playerClass", "File", 0));
        action_DefinedViewsToggle->setText(QApplication::translate("glc_playerClass", "Defined views", 0));
        action_AlbumManagement->setText(QApplication::translate("glc_playerClass", "Album/Model Management", 0));
        action_AlbumManagement->setShortcut(QApplication::translate("glc_playerClass", "F3", 0));
        action_Settings->setText(QApplication::translate("glc_playerClass", "Options", 0));
#ifndef QT_NO_STATUSTIP
        action_Settings->setStatusTip(QApplication::translate("glc_playerClass", "Customizes settings", 0));
#endif // QT_NO_STATUSTIP
        action_ViewCenter->setText(QApplication::translate("glc_playerClass", "View Center Mode", 0));
#ifndef QT_NO_TOOLTIP
        action_ViewCenter->setToolTip(QApplication::translate("glc_playerClass", "Defined view center", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        action_ViewCenter->setStatusTip(QApplication::translate("glc_playerClass", "Defined view center with left mouse button", 0));
#endif // QT_NO_STATUSTIP
        action_ViewCenter->setShortcut(QApplication::translate("glc_playerClass", "C", 0));
        action_Select->setText(QApplication::translate("glc_playerClass", "Select Mode", 0));
#ifndef QT_NO_STATUSTIP
        action_Select->setStatusTip(QApplication::translate("glc_playerClass", "Selected with left mouse button Mode (Rotate with Right MB, Zoom with Shift + Right MB, Pan with Middle MB, Center with Shift + Middle MB)", 0));
#endif // QT_NO_STATUSTIP
        action_Select->setShortcut(QApplication::translate("glc_playerClass", "S", 0));
        action_Zoom->setText(QApplication::translate("glc_playerClass", "Zoom Mode", 0));
#ifndef QT_NO_STATUSTIP
        action_Zoom->setStatusTip(QApplication::translate("glc_playerClass", "Zoom with left mouse button Mode", 0));
#endif // QT_NO_STATUSTIP
        action_Zoom->setShortcut(QApplication::translate("glc_playerClass", "Z", 0));
        action_SnapShot->setText(QApplication::translate("glc_playerClass", "Take a SnapShot", 0));
#ifndef QT_NO_STATUSTIP
        action_SnapShot->setStatusTip(QApplication::translate("glc_playerClass", "Take a snapshot of the current view", 0));
#endif // QT_NO_STATUSTIP
        action_SnapShot->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+P", 0));
        action_RenderPoints->setText(QApplication::translate("glc_playerClass", "Points", 0));
        action_RenderWireframe->setText(QApplication::translate("glc_playerClass", "Wireframe", 0));
        action_RenderShading->setText(QApplication::translate("glc_playerClass", "Shading", 0));
        action_NewAlbum->setText(QApplication::translate("glc_playerClass", "New Album", 0));
#ifndef QT_NO_STATUSTIP
        action_NewAlbum->setStatusTip(QApplication::translate("glc_playerClass", "Remove all Model from the current album", 0));
#endif // QT_NO_STATUSTIP
        action_NewAlbum->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+N", 0));
        action_FullScreen->setText(QApplication::translate("glc_playerClass", "FullScreen", 0));
        action_FullScreen->setShortcut(QApplication::translate("glc_playerClass", "Alt+Return", 0));
        action_Property->setText(QApplication::translate("glc_playerClass", "Instance Property", 0));
#ifndef QT_NO_STATUSTIP
        action_Property->setStatusTip(QApplication::translate("glc_playerClass", "View and edit mesh property.", 0));
#endif // QT_NO_STATUSTIP
        action_OpenAlbum->setText(QApplication::translate("glc_playerClass", "Open Album", 0));
        action_SaveAlbum->setText(QApplication::translate("glc_playerClass", "Save Album", 0));
        action_SaveAlbum->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+S", 0));
        action_SaveAlbumAs->setText(QApplication::translate("glc_playerClass", "Save Album As...", 0));
        action_CameraProperty->setText(QApplication::translate("glc_playerClass", "Camera Property", 0));
        action_CameraProperty->setShortcut(QApplication::translate("glc_playerClass", "F4", 0));
        action_SelectionProperty->setText(QApplication::translate("glc_playerClass", "Selection Property", 0));
        action_SelectionProperty->setShortcut(QApplication::translate("glc_playerClass", "F5", 0));
        action_EditLight->setText(QApplication::translate("glc_playerClass", "Edit Light", 0));
        actionUnselectAll->setText(QApplication::translate("glc_playerClass", "Unselect All", 0));
        actionUnselectAll->setShortcut(QApplication::translate("glc_playerClass", "Esc", 0));
        actionShow_all->setText(QApplication::translate("glc_playerClass", "Show All", 0));
        actionShow_Hide->setText(QApplication::translate("glc_playerClass", "Show/Hide", 0));
#ifndef QT_NO_TOOLTIP
        actionShow_Hide->setToolTip(QApplication::translate("glc_playerClass", "Show/Hide Selection", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionShow_Hide->setStatusTip(QApplication::translate("glc_playerClass", "Show or Hide selected object", 0));
#endif // QT_NO_STATUSTIP
        actionShow_Hide->setShortcut(QApplication::translate("glc_playerClass", "V", 0));
        actionHide_unselected->setText(QApplication::translate("glc_playerClass", "Hide Unselected", 0));
        actionTwo_sided_Lightning->setText(QApplication::translate("glc_playerClass", "Two Sided Lightning", 0));
        actionSwap_visible_space->setText(QApplication::translate("glc_playerClass", "Swap Visible Space", 0));
        actionSwap_visible_space->setIconText(QApplication::translate("glc_playerClass", "Swap visible space", 0));
#ifndef QT_NO_TOOLTIP
        actionSwap_visible_space->setToolTip(QApplication::translate("glc_playerClass", "Swap between visible / no visible space", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSwap_visible_space->setStatusTip(QApplication::translate("glc_playerClass", "Swap between visible  and no visible space", 0));
#endif // QT_NO_STATUSTIP
        actionSwap_visible_space->setShortcut(QApplication::translate("glc_playerClass", "F2", 0));
        actionSelectAll->setText(QApplication::translate("glc_playerClass", "Select All", 0));
        actionSelectAll->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+A", 0));
        actionReframeOnSelection->setText(QApplication::translate("glc_playerClass", "Fit On Selection", 0));
        actionSet_Shader->setText(QApplication::translate("glc_playerClass", "Set Global Shader", 0));
        actionAssign_Shader->setText(QApplication::translate("glc_playerClass", "Assign Shader", 0));
        actionExport_To_Folder->setText(QApplication::translate("glc_playerClass", "Export to Folder", 0));
        actionMultiShots->setText(QApplication::translate("glc_playerClass", "MultiShots", 0));
        actionMultiShots->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+Shift+P", 0));
        actionExport_to_web->setText(QApplication::translate("glc_playerClass", "Html Export", 0));
        action_IsoView2->setText(QApplication::translate("glc_playerClass", "Iso View 2", 0));
        action_IsoView2->setShortcut(QApplication::translate("glc_playerClass", "Shift+2", 0));
        action_IsoView3->setText(QApplication::translate("glc_playerClass", "Iso View 3", 0));
        action_IsoView3->setShortcut(QApplication::translate("glc_playerClass", "Shift+3", 0));
        action_IsoView4->setText(QApplication::translate("glc_playerClass", "Iso View 4", 0));
        action_IsoView4->setShortcut(QApplication::translate("glc_playerClass", "Shift+4", 0));
        actionChange_UP_Vector->setText(QApplication::translate("glc_playerClass", "Change UP Vector", 0));
        actionChange_UP_Vector->setIconText(QApplication::translate("glc_playerClass", "UP", 0));
        actionTrackball->setText(QApplication::translate("glc_playerClass", "Trackball", 0));
        actionTurnTable->setText(QApplication::translate("glc_playerClass", "TurnTable", 0));
        action_ShadingAndWire->setText(QApplication::translate("glc_playerClass", "Shading and wire", 0));
        actionDisplay_Octree->setText(QApplication::translate("glc_playerClass", "Display Octree", 0));
        actionSectioning->setText(QApplication::translate("glc_playerClass", "Sectioning", 0));
        actionFly->setText(QApplication::translate("glc_playerClass", "Fly", 0));
        actionPerspective->setText(QApplication::translate("glc_playerClass", "Perspective", 0));
        actionParallel->setText(QApplication::translate("glc_playerClass", "Parallel", 0));
        actionExport_current_Model->setText(QApplication::translate("glc_playerClass", "3DXML Export", 0));
        actionCopy->setText(QApplication::translate("glc_playerClass", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("glc_playerClass", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+V", 0));
        actionNew_Model->setText(QApplication::translate("glc_playerClass", "New Model", 0));
        actionError_Log->setText(QApplication::translate("glc_playerClass", "Error Log", 0));
        actionOpen_Models_from_path->setText(QApplication::translate("glc_playerClass", "Open Models from path...", 0));
        actionShowHideSection->setText(QApplication::translate("glc_playerClass", "Hide Section Plane", 0));
#ifndef QT_NO_TOOLTIP
        actionShowHideSection->setToolTip(QApplication::translate("glc_playerClass", "Show / Hide Section Plane", 0));
#endif // QT_NO_TOOLTIP
        actionCut->setText(QApplication::translate("glc_playerClass", "Cut", 0));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("glc_playerClass", "Cut", 0));
#endif // QT_NO_TOOLTIP
        actionCut->setShortcut(QApplication::translate("glc_playerClass", "Ctrl+X", 0));
        menu_File->setTitle(QApplication::translate("glc_playerClass", "&File", 0));
        menuRecent_Models->setTitle(QApplication::translate("glc_playerClass", "Recent Models", 0));
        menuRecent_Album->setTitle(QApplication::translate("glc_playerClass", "Recent Album", 0));
        menu_Aide->setTitle(QApplication::translate("glc_playerClass", "&Help", 0));
        menu_Window->setWindowTitle(QApplication::translate("glc_playerClass", "GLC-Player", 0));
        menu_Window->setTitle(QApplication::translate("glc_playerClass", "&Window", 0));
        menu_View->setTitle(QApplication::translate("glc_playerClass", "&View", 0));
        menu_NamedView->setTitle(QApplication::translate("glc_playerClass", "Named Views...", 0));
        menuNavigation_Mode->setTitle(QApplication::translate("glc_playerClass", "Navigation Mode", 0));
        menuProjection_Mode->setTitle(QApplication::translate("glc_playerClass", "Projection Mode", 0));
        menu_Tools->setTitle(QApplication::translate("glc_playerClass", "&Tools", 0));
        menuRender->setTitle(QApplication::translate("glc_playerClass", "&Render", 0));
        menuRender_Mode->setTitle(QApplication::translate("glc_playerClass", "Render Mode", 0));
        menuEdit->setTitle(QApplication::translate("glc_playerClass", "&Edit", 0));
        toolBar_File->setWindowTitle(QApplication::translate("glc_playerClass", "File", 0));
        toolBar_DefinedView->setWindowTitle(QApplication::translate("glc_playerClass", "Defined Views", 0));
        toolbar_View->setWindowTitle(QApplication::translate("glc_playerClass", "Navigation Mode", 0));
        cameraProperties->setWindowTitle(QApplication::translate("glc_playerClass", "Camera Properties", 0));
        selectionDockWidget->setWindowTitle(QApplication::translate("glc_playerClass", "Selection Properties", 0));
        toolBar_2->setWindowTitle(QApplication::translate("glc_playerClass", "Visibility", 0));
        albumManagementWindow->setWindowTitle(QApplication::translate("glc_playerClass", "Album/Model Management", 0));
        toolBar_render->setWindowTitle(QApplication::translate("glc_playerClass", "toolBar", 0));
        toolBar->setWindowTitle(QApplication::translate("glc_playerClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class glc_playerClass: public Ui_glc_playerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLC_PLAYER_H
