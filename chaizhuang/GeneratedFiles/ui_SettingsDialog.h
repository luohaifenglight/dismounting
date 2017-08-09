/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *pageList;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stackedWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_UserInterfaceLg;
    QHBoxLayout *_2;
    QComboBox *languageComboBox;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *displayViewInfoPanel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *quitConfirmationActive;
    QSpacerItem *verticalSpacer_2;
    QWidget *albumManager;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_SessionManagementPerf;
    QGridLayout *gridLayout1;
    QCheckBox *displayThumbnail;
    QComboBox *ThumbnailSize_Combo;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QSpacerItem *verticalSpacer;
    QWidget *openGl;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_16;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *openglVersion;
    QLabel *label_3;
    QLabel *openglHardware;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *vboSupport;
    QLabel *vboUsage;
    QLabel *glslSupport;
    QLabel *glslUsage;
    QLabel *frameBufferSupport;
    QLabel *framebufferUsage;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *useVbo;
    QCheckBox *useShader;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *useSelectionShader;
    QSpacerItem *verticalSpacer_3;
    QWidget *page;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSlider *levelOfDetailSlider;
    QLineEdit *defaultLodLineEdit;
    QLabel *label_5;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *useOctree;
    QGroupBox *groupBox_14;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *bSphereRadio;
    QRadioButton *bBoxRadio;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSpinBox *octreeDepthSpin;
    QGroupBox *groupBox_13;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *useFrustumCulling;
    QGridLayout *gridLayout_5;
    QCheckBox *usePixelCulling;
    QLabel *label_12;
    QSpinBox *minimumPixelSize;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *workWithCacheCheckBox;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *targetPath;
    QPushButton *browseCmd;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QSpacerItem *spacerItem3;
    QLineEdit *numberOfCacheFiles;
    QLabel *label_7;
    QSpacerItem *spacerItem4;
    QLineEdit *sizeOfCache;
    QToolButton *updateCacheInfoCmd;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cleanCacheCmd;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *usedCompressedCacheCheckBox;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *usedDefaultCompressionCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QSpinBox *CompressionLevelSpinBox;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(780, 524);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pageList = new QListWidget(SettingsDialog);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(pageList);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Album.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(pageList);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/GlSetting.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(pageList);
        __qlistwidgetitem2->setIcon(icon2);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(pageList);
        __qlistwidgetitem3->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(pageList);
        __qlistwidgetitem4->setIcon(icon);
        pageList->setObjectName(QStringLiteral("pageList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pageList->sizePolicy().hasHeightForWidth());
        pageList->setSizePolicy(sizePolicy);
        pageList->setMinimumSize(QSize(0, 0));
        pageList->setIconSize(QSize(32, 32));
        pageList->setUniformItemSizes(true);

        gridLayout->addWidget(pageList, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        general = new QWidget();
        general->setObjectName(QStringLiteral("general"));
        sizePolicy1.setHeightForWidth(general->sizePolicy().hasHeightForWidth());
        general->setSizePolicy(sizePolicy1);
        verticalLayout_17 = new QVBoxLayout(general);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        groupBox_15 = new QGroupBox(general);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        verticalLayout_4 = new QVBoxLayout(groupBox_15);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_UserInterfaceLg = new QGroupBox(groupBox_15);
        groupBox_UserInterfaceLg->setObjectName(QStringLiteral("groupBox_UserInterfaceLg"));
        groupBox_UserInterfaceLg->setFlat(true);
        _2 = new QHBoxLayout(groupBox_UserInterfaceLg);
        _2->setObjectName(QStringLiteral("_2"));
        languageComboBox = new QComboBox(groupBox_UserInterfaceLg);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));
        languageComboBox->setMinimumSize(QSize(150, 0));
        languageComboBox->setEditable(false);

        _2->addWidget(languageComboBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);


        verticalLayout_4->addWidget(groupBox_UserInterfaceLg);

        groupBox = new QGroupBox(groupBox_15);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        displayViewInfoPanel = new QCheckBox(groupBox);
        displayViewInfoPanel->setObjectName(QStringLiteral("displayViewInfoPanel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayViewInfoPanel->sizePolicy().hasHeightForWidth());
        displayViewInfoPanel->setSizePolicy(sizePolicy2);
        displayViewInfoPanel->setChecked(true);

        verticalLayout_3->addWidget(displayViewInfoPanel);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_15);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        quitConfirmationActive = new QCheckBox(groupBox_2);
        quitConfirmationActive->setObjectName(QStringLiteral("quitConfirmationActive"));

        verticalLayout->addWidget(quitConfirmationActive);


        verticalLayout_4->addWidget(groupBox_2);


        verticalLayout_17->addWidget(groupBox_15);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_2);

        stackedWidget->addWidget(general);
        albumManager = new QWidget();
        albumManager->setObjectName(QStringLiteral("albumManager"));
        sizePolicy1.setHeightForWidth(albumManager->sizePolicy().hasHeightForWidth());
        albumManager->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(albumManager);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_SessionManagementPerf = new QGroupBox(albumManager);
        groupBox_SessionManagementPerf->setObjectName(QStringLiteral("groupBox_SessionManagementPerf"));
        gridLayout1 = new QGridLayout(groupBox_SessionManagementPerf);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        displayThumbnail = new QCheckBox(groupBox_SessionManagementPerf);
        displayThumbnail->setObjectName(QStringLiteral("displayThumbnail"));
        sizePolicy2.setHeightForWidth(displayThumbnail->sizePolicy().hasHeightForWidth());
        displayThumbnail->setSizePolicy(sizePolicy2);
        displayThumbnail->setChecked(true);
        displayThumbnail->setAutoExclusive(false);

        gridLayout1->addWidget(displayThumbnail, 0, 0, 1, 2);

        ThumbnailSize_Combo = new QComboBox(groupBox_SessionManagementPerf);
        ThumbnailSize_Combo->setObjectName(QStringLiteral("ThumbnailSize_Combo"));

        gridLayout1->addWidget(ThumbnailSize_Combo, 1, 1, 2, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 3, 2, 2);

        label = new QLabel(groupBox_SessionManagementPerf);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 1, 0, 2, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 2, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox_SessionManagementPerf);

        verticalSpacer = new QSpacerItem(20, 229, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(albumManager);
        openGl = new QWidget();
        openGl->setObjectName(QStringLiteral("openGl"));
        sizePolicy1.setHeightForWidth(openGl->sizePolicy().hasHeightForWidth());
        openGl->setSizePolicy(sizePolicy1);
        verticalLayout_18 = new QVBoxLayout(openGl);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        groupBox_16 = new QGroupBox(openGl);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        verticalLayout_7 = new QVBoxLayout(groupBox_16);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_6 = new QGroupBox(groupBox_16);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        openglVersion = new QLabel(groupBox_6);
        openglVersion->setObjectName(QStringLiteral("openglVersion"));
        openglVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(openglVersion, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        openglHardware = new QLabel(groupBox_6);
        openglHardware->setObjectName(QStringLiteral("openglHardware"));
        openglHardware->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(openglHardware, 1, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(groupBox_16);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        vboSupport = new QLabel(groupBox_3);
        vboSupport->setObjectName(QStringLiteral("vboSupport"));

        gridLayout_2->addWidget(vboSupport, 0, 0, 1, 1);

        vboUsage = new QLabel(groupBox_3);
        vboUsage->setObjectName(QStringLiteral("vboUsage"));
        vboUsage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(vboUsage, 0, 1, 1, 1);

        glslSupport = new QLabel(groupBox_3);
        glslSupport->setObjectName(QStringLiteral("glslSupport"));

        gridLayout_2->addWidget(glslSupport, 1, 0, 1, 1);

        glslUsage = new QLabel(groupBox_3);
        glslUsage->setObjectName(QStringLiteral("glslUsage"));
        glslUsage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(glslUsage, 1, 1, 1, 1);

        frameBufferSupport = new QLabel(groupBox_3);
        frameBufferSupport->setObjectName(QStringLiteral("frameBufferSupport"));

        gridLayout_2->addWidget(frameBufferSupport, 2, 0, 1, 1);

        framebufferUsage = new QLabel(groupBox_3);
        framebufferUsage->setObjectName(QStringLiteral("framebufferUsage"));
        framebufferUsage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(framebufferUsage, 2, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(groupBox_16);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        useVbo = new QCheckBox(groupBox_5);
        useVbo->setObjectName(QStringLiteral("useVbo"));

        verticalLayout_6->addWidget(useVbo);

        useShader = new QCheckBox(groupBox_5);
        useShader->setObjectName(QStringLiteral("useShader"));

        verticalLayout_6->addWidget(useShader);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(groupBox_16);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFlat(true);
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        useSelectionShader = new QCheckBox(groupBox_4);
        useSelectionShader->setObjectName(QStringLiteral("useSelectionShader"));

        verticalLayout_5->addWidget(useSelectionShader);


        verticalLayout_7->addWidget(groupBox_4);


        verticalLayout_18->addWidget(groupBox_16);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_3);

        stackedWidget->addWidget(openGl);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_15 = new QVBoxLayout(page);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupBox_7 = new QGroupBox(page);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFlat(false);
        verticalLayout_10 = new QVBoxLayout(groupBox_7);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setFlat(true);
        verticalLayout_8 = new QVBoxLayout(groupBox_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(groupBox_8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        levelOfDetailSlider = new QSlider(groupBox_8);
        levelOfDetailSlider->setObjectName(QStringLiteral("levelOfDetailSlider"));
        levelOfDetailSlider->setOrientation(Qt::Horizontal);
        levelOfDetailSlider->setTickPosition(QSlider::TicksBelow);
        levelOfDetailSlider->setTickInterval(2);

        horizontalLayout->addWidget(levelOfDetailSlider);

        defaultLodLineEdit = new QLineEdit(groupBox_8);
        defaultLodLineEdit->setObjectName(QStringLiteral("defaultLodLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(defaultLodLineEdit->sizePolicy().hasHeightForWidth());
        defaultLodLineEdit->setSizePolicy(sizePolicy3);
        defaultLodLineEdit->setMaximumSize(QSize(60, 16777215));
        defaultLodLineEdit->setAlignment(Qt::AlignCenter);
        defaultLodLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(defaultLodLineEdit);


        verticalLayout_8->addLayout(horizontalLayout);

        label_5 = new QLabel(groupBox_8);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_8->addWidget(label_5);


        verticalLayout_10->addWidget(groupBox_8);

        groupBox_12 = new QGroupBox(groupBox_7);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setFlat(true);
        verticalLayout_16 = new QVBoxLayout(groupBox_12);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        useOctree = new QCheckBox(groupBox_12);
        useOctree->setObjectName(QStringLiteral("useOctree"));

        verticalLayout_16->addWidget(useOctree);

        groupBox_14 = new QGroupBox(groupBox_12);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setEnabled(false);
        horizontalLayout_7 = new QHBoxLayout(groupBox_14);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        bSphereRadio = new QRadioButton(groupBox_14);
        bSphereRadio->setObjectName(QStringLiteral("bSphereRadio"));
        bSphereRadio->setChecked(true);

        verticalLayout_9->addWidget(bSphereRadio);

        bBoxRadio = new QRadioButton(groupBox_14);
        bBoxRadio->setObjectName(QStringLiteral("bBoxRadio"));

        verticalLayout_9->addWidget(bBoxRadio);


        horizontalLayout_7->addLayout(verticalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(groupBox_14);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        octreeDepthSpin = new QSpinBox(groupBox_14);
        octreeDepthSpin->setObjectName(QStringLiteral("octreeDepthSpin"));
        octreeDepthSpin->setMinimum(1);
        octreeDepthSpin->setMaximum(6);

        horizontalLayout_6->addWidget(octreeDepthSpin);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_16->addWidget(groupBox_14);


        verticalLayout_10->addWidget(groupBox_12);

        groupBox_13 = new QGroupBox(groupBox_7);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setFlat(true);
        horizontalLayout_8 = new QHBoxLayout(groupBox_13);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        useFrustumCulling = new QCheckBox(groupBox_13);
        useFrustumCulling->setObjectName(QStringLiteral("useFrustumCulling"));

        horizontalLayout_8->addWidget(useFrustumCulling);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        usePixelCulling = new QCheckBox(groupBox_13);
        usePixelCulling->setObjectName(QStringLiteral("usePixelCulling"));

        gridLayout_5->addWidget(usePixelCulling, 0, 0, 1, 2);

        label_12 = new QLabel(groupBox_13);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        minimumPixelSize = new QSpinBox(groupBox_13);
        minimumPixelSize->setObjectName(QStringLiteral("minimumPixelSize"));
        minimumPixelSize->setEnabled(false);
        minimumPixelSize->setMinimum(1);
        minimumPixelSize->setMaximum(60);
        minimumPixelSize->setValue(5);

        gridLayout_5->addWidget(minimumPixelSize, 1, 1, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_5);


        verticalLayout_10->addWidget(groupBox_13);

        verticalSpacer_4 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        verticalLayout_15->addWidget(groupBox_7);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_14 = new QVBoxLayout(page_2);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        groupBox_9 = new QGroupBox(page_2);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_13 = new QVBoxLayout(groupBox_9);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        workWithCacheCheckBox = new QCheckBox(groupBox_9);
        workWithCacheCheckBox->setObjectName(QStringLiteral("workWithCacheCheckBox"));
        workWithCacheCheckBox->setChecked(true);

        verticalLayout_13->addWidget(workWithCacheCheckBox);

        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setFlat(true);
        verticalLayout_11 = new QVBoxLayout(groupBox_10);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_10);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        targetPath = new QLineEdit(groupBox_10);
        targetPath->setObjectName(QStringLiteral("targetPath"));
        targetPath->setReadOnly(true);

        horizontalLayout_4->addWidget(targetPath);

        browseCmd = new QPushButton(groupBox_10);
        browseCmd->setObjectName(QStringLiteral("browseCmd"));

        horizontalLayout_4->addWidget(browseCmd);


        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_8 = new QLabel(groupBox_10);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 2);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem3, 0, 2, 1, 1);

        numberOfCacheFiles = new QLineEdit(groupBox_10);
        numberOfCacheFiles->setObjectName(QStringLiteral("numberOfCacheFiles"));
        numberOfCacheFiles->setEnabled(true);
        sizePolicy3.setHeightForWidth(numberOfCacheFiles->sizePolicy().hasHeightForWidth());
        numberOfCacheFiles->setSizePolicy(sizePolicy3);
        numberOfCacheFiles->setMinimumSize(QSize(120, 0));
        numberOfCacheFiles->setMaximumSize(QSize(120, 16777215));
        numberOfCacheFiles->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfCacheFiles->setReadOnly(true);

        gridLayout_4->addWidget(numberOfCacheFiles, 0, 3, 1, 1);

        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem4, 1, 1, 1, 2);

        sizeOfCache = new QLineEdit(groupBox_10);
        sizeOfCache->setObjectName(QStringLiteral("sizeOfCache"));
        sizeOfCache->setEnabled(true);
        sizePolicy3.setHeightForWidth(sizeOfCache->sizePolicy().hasHeightForWidth());
        sizeOfCache->setSizePolicy(sizePolicy3);
        sizeOfCache->setMinimumSize(QSize(120, 0));
        sizeOfCache->setMaximumSize(QSize(120, 16777215));
        sizeOfCache->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sizeOfCache->setReadOnly(true);

        gridLayout_4->addWidget(sizeOfCache, 1, 3, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        updateCacheInfoCmd = new QToolButton(groupBox_10);
        updateCacheInfoCmd->setObjectName(QStringLiteral("updateCacheInfoCmd"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/UpdateThumbnails.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateCacheInfoCmd->setIcon(icon3);
        updateCacheInfoCmd->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(updateCacheInfoCmd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cleanCacheCmd = new QPushButton(groupBox_10);
        cleanCacheCmd->setObjectName(QStringLiteral("cleanCacheCmd"));

        horizontalLayout_5->addWidget(cleanCacheCmd);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_13->addWidget(groupBox_10);

        usedCompressedCacheCheckBox = new QCheckBox(groupBox_9);
        usedCompressedCacheCheckBox->setObjectName(QStringLiteral("usedCompressedCacheCheckBox"));

        verticalLayout_13->addWidget(usedCompressedCacheCheckBox);

        groupBox_11 = new QGroupBox(groupBox_9);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setEnabled(false);
        groupBox_11->setFlat(true);
        verticalLayout_12 = new QVBoxLayout(groupBox_11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        usedDefaultCompressionCheckBox = new QCheckBox(groupBox_11);
        usedDefaultCompressionCheckBox->setObjectName(QStringLiteral("usedDefaultCompressionCheckBox"));
        usedDefaultCompressionCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(usedDefaultCompressionCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_9 = new QLabel(groupBox_11);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        CompressionLevelSpinBox = new QSpinBox(groupBox_11);
        CompressionLevelSpinBox->setObjectName(QStringLiteral("CompressionLevelSpinBox"));
        CompressionLevelSpinBox->setEnabled(false);
        CompressionLevelSpinBox->setMinimum(1);
        CompressionLevelSpinBox->setMaximum(9);

        horizontalLayout_3->addWidget(CompressionLevelSpinBox);


        verticalLayout_12->addLayout(horizontalLayout_3);

        label_10 = new QLabel(groupBox_11);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_12->addWidget(label_10);


        verticalLayout_13->addWidget(groupBox_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_5);


        verticalLayout_14->addWidget(groupBox_9);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 2, 1, 1);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));
        QObject::connect(pageList, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(workWithCacheCheckBox, SIGNAL(toggled(bool)), groupBox_10, SLOT(setEnabled(bool)));
        QObject::connect(workWithCacheCheckBox, SIGNAL(toggled(bool)), usedCompressedCacheCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(usedCompressedCacheCheckBox, SIGNAL(toggled(bool)), groupBox_11, SLOT(setEnabled(bool)));
        QObject::connect(usedDefaultCompressionCheckBox, SIGNAL(toggled(bool)), CompressionLevelSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(useOctree, SIGNAL(toggled(bool)), groupBox_14, SLOT(setEnabled(bool)));
        QObject::connect(useOctree, SIGNAL(toggled(bool)), useFrustumCulling, SLOT(setDisabled(bool)));
        QObject::connect(usePixelCulling, SIGNAL(toggled(bool)), minimumPixelSize, SLOT(setEnabled(bool)));
        QObject::connect(usePixelCulling, SIGNAL(toggled(bool)), label_12, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", 0));

        const bool __sortingEnabled = pageList->isSortingEnabled();
        pageList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pageList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SettingsDialog", "General", 0));
        QListWidgetItem *___qlistwidgetitem1 = pageList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("SettingsDialog", "Album Management", 0));
        QListWidgetItem *___qlistwidgetitem2 = pageList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("SettingsDialog", "OpenGl", 0));
        QListWidgetItem *___qlistwidgetitem3 = pageList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("SettingsDialog", "Performance", 0));
        QListWidgetItem *___qlistwidgetitem4 = pageList->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("SettingsDialog", "Cache Management", 0));
        pageList->setSortingEnabled(__sortingEnabled);

        groupBox_15->setTitle(QApplication::translate("SettingsDialog", "General", 0));
        groupBox_UserInterfaceLg->setTitle(QApplication::translate("SettingsDialog", "User Interface Language", 0));
#ifndef QT_NO_STATUSTIP
        languageComboBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Appearance", 0));
#ifndef QT_NO_TOOLTIP
        displayViewInfoPanel->setToolTip(QApplication::translate("SettingsDialog", "Create thumbnail after each loading.", 0));
#endif // QT_NO_TOOLTIP
        displayViewInfoPanel->setText(QApplication::translate("SettingsDialog", "Display Info Panel", 0));
        groupBox_2->setTitle(QApplication::translate("SettingsDialog", "ShutDown", 0));
        quitConfirmationActive->setText(QApplication::translate("SettingsDialog", "Confirm Exit", 0));
        groupBox_SessionManagementPerf->setTitle(QApplication::translate("SettingsDialog", "Album Management", 0));
#ifndef QT_NO_TOOLTIP
        displayThumbnail->setToolTip(QApplication::translate("SettingsDialog", "Display thumbnail in the session management window", 0));
#endif // QT_NO_TOOLTIP
        displayThumbnail->setText(QApplication::translate("SettingsDialog", "Display thumbnail", 0));
#ifndef QT_NO_TOOLTIP
        ThumbnailSize_Combo->setToolTip(QApplication::translate("SettingsDialog", "Size of thumbnail in the session management window", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SettingsDialog", "Thumbnail Size", 0));
        groupBox_16->setTitle(QApplication::translate("SettingsDialog", "OpenGl", 0));
        groupBox_6->setTitle(QApplication::translate("SettingsDialog", "General", 0));
        label_2->setText(QApplication::translate("SettingsDialog", "Version :", 0));
        openglVersion->setText(QApplication::translate("SettingsDialog", "OpenGL Version", 0));
        label_3->setText(QApplication::translate("SettingsDialog", "Hardware :", 0));
        openglHardware->setText(QApplication::translate("SettingsDialog", "OpenGL Hardware", 0));
        groupBox_3->setTitle(QApplication::translate("SettingsDialog", "OpenGl Extensions Usage", 0));
        vboSupport->setText(QApplication::translate("SettingsDialog", "Vertex Buffer Object", 0));
        vboUsage->setText(QApplication::translate("SettingsDialog", "Used", 0));
        glslSupport->setText(QApplication::translate("SettingsDialog", "OpenGl Shading Language", 0));
        glslUsage->setText(QApplication::translate("SettingsDialog", "Used", 0));
        frameBufferSupport->setText(QApplication::translate("SettingsDialog", "Framebuffer Object", 0));
        framebufferUsage->setText(QApplication::translate("SettingsDialog", "Used", 0));
        groupBox_5->setTitle(QApplication::translate("SettingsDialog", "Vbo and Shader", 0));
        useVbo->setText(QApplication::translate("SettingsDialog", "Use Vbo", 0));
        useShader->setText(QApplication::translate("SettingsDialog", "Use Shader", 0));
        groupBox_4->setTitle(QApplication::translate("SettingsDialog", "Selection feedback", 0));
        useSelectionShader->setText(QApplication::translate("SettingsDialog", "Use Shader", 0));
        groupBox_7->setTitle(QApplication::translate("SettingsDialog", "Performance", 0));
        groupBox_8->setTitle(QApplication::translate("SettingsDialog", "3D XML Only", 0));
        label_4->setText(QApplication::translate("SettingsDialog", "Default level of detail", 0));
        label_5->setText(QApplication::translate("SettingsDialog", "Highest Value : Lower detail", 0));
        groupBox_12->setTitle(QApplication::translate("SettingsDialog", "Space partitionning", 0));
        useOctree->setText(QApplication::translate("SettingsDialog", "Use octree space partitionning", 0));
        groupBox_14->setTitle(QApplication::translate("SettingsDialog", "Octree", 0));
        bSphereRadio->setText(QApplication::translate("SettingsDialog", "Bounding Sphere", 0));
        bBoxRadio->setText(QApplication::translate("SettingsDialog", "Bounding Box", 0));
        label_11->setText(QApplication::translate("SettingsDialog", "Depth", 0));
        groupBox_13->setTitle(QApplication::translate("SettingsDialog", "Culling", 0));
        useFrustumCulling->setText(QApplication::translate("SettingsDialog", "Use frustum culling", 0));
        usePixelCulling->setText(QApplication::translate("SettingsDialog", "Use pixel culling", 0));
        label_12->setText(QApplication::translate("SettingsDialog", "Minimum pixel size", 0));
        groupBox_9->setTitle(QApplication::translate("SettingsDialog", "Cache Management", 0));
        workWithCacheCheckBox->setText(QApplication::translate("SettingsDialog", "Work with the cache system", 0));
        groupBox_10->setTitle(QApplication::translate("SettingsDialog", "Cache Location and Informations", 0));
        label_6->setText(QApplication::translate("SettingsDialog", "Path :", 0));
        browseCmd->setText(QApplication::translate("SettingsDialog", "Browse...", 0));
        label_8->setText(QApplication::translate("SettingsDialog", "Number :", 0));
        label_7->setText(QApplication::translate("SettingsDialog", "Size :", 0));
#ifndef QT_NO_TOOLTIP
        updateCacheInfoCmd->setToolTip(QApplication::translate("SettingsDialog", "Update Cache informations", 0));
#endif // QT_NO_TOOLTIP
        updateCacheInfoCmd->setText(QApplication::translate("SettingsDialog", "...", 0));
        cleanCacheCmd->setText(QApplication::translate("SettingsDialog", "Clean...", 0));
        usedCompressedCacheCheckBox->setText(QApplication::translate("SettingsDialog", "Use compressed cache", 0));
        groupBox_11->setTitle(QApplication::translate("SettingsDialog", "Compression settings", 0));
        usedDefaultCompressionCheckBox->setText(QApplication::translate("SettingsDialog", "Use default compression", 0));
        label_9->setText(QApplication::translate("SettingsDialog", "Compression level", 0));
        label_10->setText(QApplication::translate("SettingsDialog", "Valid values are between 1 and 9", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
