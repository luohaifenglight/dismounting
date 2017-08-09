/********************************************************************************
** Form generated from reading UI file 'AlbumManagerView.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMMANAGERVIEW_H
#define UI_ALBUMMANAGERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlbumManagerView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *album_groupBox;
    QVBoxLayout *_2;
    QHBoxLayout *_3;
    QToolButton *refreshThumbnailsButton;
    QSpacerItem *spacerItem;
    QToolButton *startLoadingButton;
    QToolButton *stopLoadingButton;
    QToolButton *removeUnloadModelsButton;
    QToolButton *removeOnErrorModelsButton;
    QListWidget *modelList;
    QHBoxLayout *_4;
    QLabel *label_8;
    QSpacerItem *spacerItem1;
    QLineEdit *numberOfModels;
    QHBoxLayout *_5;
    QLabel *label_9;
    QSpacerItem *spacerItem2;
    QLineEdit *numberOfLoadedModels;
    QGroupBox *currentModelInfoGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_7;
    QLabel *label_7;
    QSpacerItem *spacerItem3;
    QLineEdit *numberOfMesh;
    QHBoxLayout *_10;
    QLabel *label_6;
    QSpacerItem *spacerItem4;
    QLineEdit *numberOfFaces;

    void setupUi(QWidget *AlbumManagerView)
    {
        if (AlbumManagerView->objectName().isEmpty())
            AlbumManagerView->setObjectName(QStringLiteral("AlbumManagerView"));
        AlbumManagerView->resize(323, 566);
        verticalLayout_2 = new QVBoxLayout(AlbumManagerView);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        album_groupBox = new QGroupBox(AlbumManagerView);
        album_groupBox->setObjectName(QStringLiteral("album_groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(album_groupBox->sizePolicy().hasHeightForWidth());
        album_groupBox->setSizePolicy(sizePolicy);
        album_groupBox->setContextMenuPolicy(Qt::PreventContextMenu);
        album_groupBox->setFlat(true);
        _2 = new QVBoxLayout(album_groupBox);
        _2->setObjectName(QStringLiteral("_2"));
        _3 = new QHBoxLayout();
        _3->setObjectName(QStringLiteral("_3"));
        refreshThumbnailsButton = new QToolButton(album_groupBox);
        refreshThumbnailsButton->setObjectName(QStringLiteral("refreshThumbnailsButton"));
        refreshThumbnailsButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/UpdateThumbnails.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshThumbnailsButton->setIcon(icon);
        refreshThumbnailsButton->setIconSize(QSize(20, 20));

        _3->addWidget(refreshThumbnailsButton);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem);

        startLoadingButton = new QToolButton(album_groupBox);
        startLoadingButton->setObjectName(QStringLiteral("startLoadingButton"));
        startLoadingButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/ResumeLoading.png"), QSize(), QIcon::Normal, QIcon::Off);
        startLoadingButton->setIcon(icon1);
        startLoadingButton->setIconSize(QSize(20, 20));
        startLoadingButton->setCheckable(true);

        _3->addWidget(startLoadingButton);

        stopLoadingButton = new QToolButton(album_groupBox);
        stopLoadingButton->setObjectName(QStringLiteral("stopLoadingButton"));
        stopLoadingButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/InteruptLoading.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopLoadingButton->setIcon(icon2);
        stopLoadingButton->setIconSize(QSize(20, 20));
        stopLoadingButton->setCheckable(true);

        _3->addWidget(stopLoadingButton);

        removeUnloadModelsButton = new QToolButton(album_groupBox);
        removeUnloadModelsButton->setObjectName(QStringLiteral("removeUnloadModelsButton"));
        removeUnloadModelsButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/RemoveUnload.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeUnloadModelsButton->setIcon(icon3);
        removeUnloadModelsButton->setIconSize(QSize(20, 20));

        _3->addWidget(removeUnloadModelsButton);

        removeOnErrorModelsButton = new QToolButton(album_groupBox);
        removeOnErrorModelsButton->setObjectName(QStringLiteral("removeOnErrorModelsButton"));
        removeOnErrorModelsButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/RemoveError.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeOnErrorModelsButton->setIcon(icon4);
        removeOnErrorModelsButton->setIconSize(QSize(20, 20));

        _3->addWidget(removeOnErrorModelsButton);


        _2->addLayout(_3);

        modelList = new QListWidget(album_groupBox);
        modelList->setObjectName(QStringLiteral("modelList"));
        modelList->setContextMenuPolicy(Qt::ActionsContextMenu);
        modelList->setAlternatingRowColors(true);
        modelList->setMovement(QListView::Static);
        modelList->setSpacing(1);
        modelList->setSortingEnabled(false);

        _2->addWidget(modelList);

        _4 = new QHBoxLayout();
        _4->setObjectName(QStringLiteral("_4"));
        label_8 = new QLabel(album_groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        _4->addWidget(label_8);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem1);

        numberOfModels = new QLineEdit(album_groupBox);
        numberOfModels->setObjectName(QStringLiteral("numberOfModels"));
        numberOfModels->setEnabled(true);
        numberOfModels->setMinimumSize(QSize(0, 0));
        numberOfModels->setMaximumSize(QSize(70, 16777215));
        numberOfModels->setFocusPolicy(Qt::NoFocus);
        numberOfModels->setAcceptDrops(false);
        numberOfModels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfModels->setReadOnly(true);

        _4->addWidget(numberOfModels);


        _2->addLayout(_4);

        _5 = new QHBoxLayout();
        _5->setObjectName(QStringLiteral("_5"));
        label_9 = new QLabel(album_groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        _5->addWidget(label_9);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _5->addItem(spacerItem2);

        numberOfLoadedModels = new QLineEdit(album_groupBox);
        numberOfLoadedModels->setObjectName(QStringLiteral("numberOfLoadedModels"));
        numberOfLoadedModels->setEnabled(true);
        numberOfLoadedModels->setMaximumSize(QSize(70, 16777215));
        numberOfLoadedModels->setFocusPolicy(Qt::NoFocus);
        numberOfLoadedModels->setAcceptDrops(false);
        numberOfLoadedModels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfLoadedModels->setReadOnly(true);

        _5->addWidget(numberOfLoadedModels);


        _2->addLayout(_5);


        verticalLayout_2->addWidget(album_groupBox);

        currentModelInfoGroup = new QGroupBox(AlbumManagerView);
        currentModelInfoGroup->setObjectName(QStringLiteral("currentModelInfoGroup"));
        sizePolicy.setHeightForWidth(currentModelInfoGroup->sizePolicy().hasHeightForWidth());
        currentModelInfoGroup->setSizePolicy(sizePolicy);
        currentModelInfoGroup->setFlat(true);
        verticalLayout = new QVBoxLayout(currentModelInfoGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _7 = new QHBoxLayout();
        _7->setObjectName(QStringLiteral("_7"));
        label_7 = new QLabel(currentModelInfoGroup);
        label_7->setObjectName(QStringLiteral("label_7"));

        _7->addWidget(label_7);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(spacerItem3);

        numberOfMesh = new QLineEdit(currentModelInfoGroup);
        numberOfMesh->setObjectName(QStringLiteral("numberOfMesh"));
        numberOfMesh->setEnabled(true);
        numberOfMesh->setMaximumSize(QSize(80, 16777215));
        numberOfMesh->setFocusPolicy(Qt::NoFocus);
        numberOfMesh->setAcceptDrops(false);
        numberOfMesh->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfMesh->setReadOnly(true);

        _7->addWidget(numberOfMesh);


        verticalLayout->addLayout(_7);

        _10 = new QHBoxLayout();
        _10->setObjectName(QStringLiteral("_10"));
        label_6 = new QLabel(currentModelInfoGroup);
        label_6->setObjectName(QStringLiteral("label_6"));

        _10->addWidget(label_6);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _10->addItem(spacerItem4);

        numberOfFaces = new QLineEdit(currentModelInfoGroup);
        numberOfFaces->setObjectName(QStringLiteral("numberOfFaces"));
        numberOfFaces->setEnabled(true);
        numberOfFaces->setMaximumSize(QSize(80, 16777215));
        numberOfFaces->setAcceptDrops(false);
        numberOfFaces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfFaces->setReadOnly(true);

        _10->addWidget(numberOfFaces);


        verticalLayout->addLayout(_10);


        verticalLayout_2->addWidget(currentModelInfoGroup);


        retranslateUi(AlbumManagerView);

        QMetaObject::connectSlotsByName(AlbumManagerView);
    } // setupUi

    void retranslateUi(QWidget *AlbumManagerView)
    {
        AlbumManagerView->setWindowTitle(QApplication::translate("AlbumManagerView", "Form", 0));
        album_groupBox->setTitle(QApplication::translate("AlbumManagerView", "Album", 0));
#ifndef QT_NO_TOOLTIP
        refreshThumbnailsButton->setToolTip(QApplication::translate("AlbumManagerView", "Refresh thumbnails", 0));
#endif // QT_NO_TOOLTIP
        refreshThumbnailsButton->setText(QApplication::translate("AlbumManagerView", "...", 0));
#ifndef QT_NO_TOOLTIP
        startLoadingButton->setToolTip(QApplication::translate("AlbumManagerView", "Start/Resume Loading", 0));
#endif // QT_NO_TOOLTIP
        startLoadingButton->setText(QApplication::translate("AlbumManagerView", "...", 0));
#ifndef QT_NO_TOOLTIP
        stopLoadingButton->setToolTip(QApplication::translate("AlbumManagerView", "Interupt Loading", 0));
#endif // QT_NO_TOOLTIP
        stopLoadingButton->setText(QApplication::translate("AlbumManagerView", "...", 0));
#ifndef QT_NO_TOOLTIP
        removeUnloadModelsButton->setToolTip(QApplication::translate("AlbumManagerView", "Remove Unloaded Models", 0));
#endif // QT_NO_TOOLTIP
        removeUnloadModelsButton->setText(QApplication::translate("AlbumManagerView", "...", 0));
#ifndef QT_NO_TOOLTIP
        removeOnErrorModelsButton->setToolTip(QApplication::translate("AlbumManagerView", "Remove Models On Error", 0));
#endif // QT_NO_TOOLTIP
        removeOnErrorModelsButton->setText(QApplication::translate("AlbumManagerView", "...", 0));
        label_8->setText(QApplication::translate("AlbumManagerView", "Models :", 0));
        label_9->setText(QApplication::translate("AlbumManagerView", "Loaded Models :", 0));
        currentModelInfoGroup->setTitle(QApplication::translate("AlbumManagerView", "Current Model Informations", 0));
        label_7->setText(QApplication::translate("AlbumManagerView", "Meshs :", 0));
        label_6->setText(QApplication::translate("AlbumManagerView", "Faces :", 0));
    } // retranslateUi

};

namespace Ui {
    class AlbumManagerView: public Ui_AlbumManagerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMMANAGERVIEW_H
