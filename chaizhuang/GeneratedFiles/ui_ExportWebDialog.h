/********************************************************************************
** Form generated from reading UI file 'ExportWebDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTWEBDIALOG_H
#define UI_EXPORTWEBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportWebDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *exportAlbumAndModels;
    QGroupBox *pageGroup;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *webTitle;
    QLabel *label_8;
    QSpinBox *numberOfRow;
    QLabel *label_9;
    QSpinBox *numberOfLine;
    QLabel *numberOfPage;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGroupBox *thumbnailsGroup;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *thumbnailPredifinedSize;
    QLabel *label_2;
    QSpinBox *thumbnailWidth;
    QLabel *label_3;
    QSpinBox *thumbnailHeight;
    QCheckBox *thumbnailModelName;
    QCheckBox *thumbnailModelLink;
    QGroupBox *imagesGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *imagePredifinedSize;
    QLabel *label_5;
    QSpinBox *imageWidth;
    QLabel *label_6;
    QSpinBox *imageHeight;
    QCheckBox *imageModelInformation;
    QCheckBox *imageModelLink;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *defaultBackgroundRadio;
    QToolButton *editColorButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_ExportDestination;
    QGridLayout *gridLayout_4;
    QCheckBox *createSubDir;
    QLineEdit *targetPath;
    QPushButton *browseCmd;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *exportButton;

    void setupUi(QDialog *ExportWebDialog)
    {
        if (ExportWebDialog->objectName().isEmpty())
            ExportWebDialog->setObjectName(QStringLiteral("ExportWebDialog"));
        ExportWebDialog->resize(598, 651);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Globe.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExportWebDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ExportWebDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ExportWebDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        exportAlbumAndModels = new QCheckBox(groupBox);
        exportAlbumAndModels->setObjectName(QStringLiteral("exportAlbumAndModels"));
        exportAlbumAndModels->setChecked(true);

        horizontalLayout_2->addWidget(exportAlbumAndModels);


        verticalLayout->addWidget(groupBox);

        pageGroup = new QGroupBox(ExportWebDialog);
        pageGroup->setObjectName(QStringLiteral("pageGroup"));
        gridLayout_3 = new QGridLayout(pageGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(pageGroup);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        webTitle = new QLineEdit(pageGroup);
        webTitle->setObjectName(QStringLiteral("webTitle"));

        gridLayout_3->addWidget(webTitle, 0, 1, 1, 4);

        label_8 = new QLabel(pageGroup);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        numberOfRow = new QSpinBox(pageGroup);
        numberOfRow->setObjectName(QStringLiteral("numberOfRow"));
        numberOfRow->setMinimum(1);
        numberOfRow->setMaximum(10);
        numberOfRow->setValue(5);

        gridLayout_3->addWidget(numberOfRow, 1, 1, 1, 1);

        label_9 = new QLabel(pageGroup);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 2, 1, 1);

        numberOfLine = new QSpinBox(pageGroup);
        numberOfLine->setObjectName(QStringLiteral("numberOfLine"));
        numberOfLine->setMinimum(1);
        numberOfLine->setMaximum(500);
        numberOfLine->setValue(4);

        gridLayout_3->addWidget(numberOfLine, 1, 3, 1, 1);

        numberOfPage = new QLabel(pageGroup);
        numberOfPage->setObjectName(QStringLiteral("numberOfPage"));

        gridLayout_3->addWidget(numberOfPage, 1, 4, 1, 1);


        verticalLayout->addWidget(pageGroup);

        groupBox_2 = new QGroupBox(ExportWebDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        thumbnailsGroup = new QGroupBox(groupBox_2);
        thumbnailsGroup->setObjectName(QStringLiteral("thumbnailsGroup"));
        gridLayout = new QGridLayout(thumbnailsGroup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(thumbnailsGroup);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        thumbnailPredifinedSize = new QComboBox(thumbnailsGroup);
        thumbnailPredifinedSize->setObjectName(QStringLiteral("thumbnailPredifinedSize"));

        gridLayout->addWidget(thumbnailPredifinedSize, 0, 1, 1, 3);

        label_2 = new QLabel(thumbnailsGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        thumbnailWidth = new QSpinBox(thumbnailsGroup);
        thumbnailWidth->setObjectName(QStringLiteral("thumbnailWidth"));
        thumbnailWidth->setMinimum(30);
        thumbnailWidth->setMaximum(300);
        thumbnailWidth->setValue(30);

        gridLayout->addWidget(thumbnailWidth, 1, 1, 1, 3);

        label_3 = new QLabel(thumbnailsGroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        thumbnailHeight = new QSpinBox(thumbnailsGroup);
        thumbnailHeight->setObjectName(QStringLiteral("thumbnailHeight"));
        thumbnailHeight->setMinimum(30);
        thumbnailHeight->setMaximum(300);
        thumbnailHeight->setValue(30);

        gridLayout->addWidget(thumbnailHeight, 2, 1, 1, 3);

        thumbnailModelName = new QCheckBox(thumbnailsGroup);
        thumbnailModelName->setObjectName(QStringLiteral("thumbnailModelName"));
        thumbnailModelName->setChecked(true);

        gridLayout->addWidget(thumbnailModelName, 3, 0, 1, 1);

        thumbnailModelLink = new QCheckBox(thumbnailsGroup);
        thumbnailModelLink->setObjectName(QStringLiteral("thumbnailModelLink"));

        gridLayout->addWidget(thumbnailModelLink, 4, 0, 1, 1);


        gridLayout_5->addWidget(thumbnailsGroup, 0, 0, 1, 1);

        imagesGroup = new QGroupBox(groupBox_2);
        imagesGroup->setObjectName(QStringLiteral("imagesGroup"));
        gridLayout_2 = new QGridLayout(imagesGroup);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(imagesGroup);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        imagePredifinedSize = new QComboBox(imagesGroup);
        imagePredifinedSize->setObjectName(QStringLiteral("imagePredifinedSize"));

        gridLayout_2->addWidget(imagePredifinedSize, 0, 1, 1, 3);

        label_5 = new QLabel(imagesGroup);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        imageWidth = new QSpinBox(imagesGroup);
        imageWidth->setObjectName(QStringLiteral("imageWidth"));
        imageWidth->setMinimum(300);
        imageWidth->setMaximum(6000);

        gridLayout_2->addWidget(imageWidth, 1, 1, 1, 3);

        label_6 = new QLabel(imagesGroup);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        imageHeight = new QSpinBox(imagesGroup);
        imageHeight->setObjectName(QStringLiteral("imageHeight"));
        imageHeight->setMinimum(100);
        imageHeight->setMaximum(6000);

        gridLayout_2->addWidget(imageHeight, 2, 1, 1, 3);

        imageModelInformation = new QCheckBox(imagesGroup);
        imageModelInformation->setObjectName(QStringLiteral("imageModelInformation"));
        imageModelInformation->setChecked(true);

        gridLayout_2->addWidget(imageModelInformation, 3, 0, 1, 1);

        imageModelLink = new QCheckBox(imagesGroup);
        imageModelLink->setObjectName(QStringLiteral("imageModelLink"));
        imageModelLink->setChecked(true);

        gridLayout_2->addWidget(imageModelLink, 4, 0, 1, 1);


        gridLayout_5->addWidget(imagesGroup, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        defaultBackgroundRadio = new QRadioButton(groupBox_3);
        defaultBackgroundRadio->setObjectName(QStringLiteral("defaultBackgroundRadio"));
        defaultBackgroundRadio->setChecked(true);

        horizontalLayout_3->addWidget(defaultBackgroundRadio);

        editColorButton = new QToolButton(groupBox_3);
        editColorButton->setObjectName(QStringLiteral("editColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editColorButton->sizePolicy().hasHeightForWidth());
        editColorButton->setSizePolicy(sizePolicy);
        editColorButton->setAutoFillBackground(false);
        editColorButton->setCheckable(true);
        editColorButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(editColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_5->addWidget(groupBox_3, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_ExportDestination = new QGroupBox(ExportWebDialog);
        groupBox_ExportDestination->setObjectName(QStringLiteral("groupBox_ExportDestination"));
        gridLayout_4 = new QGridLayout(groupBox_ExportDestination);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        createSubDir = new QCheckBox(groupBox_ExportDestination);
        createSubDir->setObjectName(QStringLiteral("createSubDir"));
        createSubDir->setChecked(true);

        gridLayout_4->addWidget(createSubDir, 0, 0, 1, 3);

        targetPath = new QLineEdit(groupBox_ExportDestination);
        targetPath->setObjectName(QStringLiteral("targetPath"));
        targetPath->setReadOnly(true);

        gridLayout_4->addWidget(targetPath, 1, 1, 1, 1);

        browseCmd = new QPushButton(groupBox_ExportDestination);
        browseCmd->setObjectName(QStringLiteral("browseCmd"));

        gridLayout_4->addWidget(browseCmd, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox_ExportDestination);

        verticalSpacer = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(ExportWebDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        exportButton = new QPushButton(ExportWebDialog);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setDefault(true);

        horizontalLayout->addWidget(exportButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExportWebDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), ExportWebDialog, SLOT(reject()));
        QObject::connect(exportButton, SIGNAL(clicked()), ExportWebDialog, SLOT(accept()));
        QObject::connect(exportAlbumAndModels, SIGNAL(clicked(bool)), imageModelLink, SLOT(setEnabled(bool)));
        QObject::connect(exportAlbumAndModels, SIGNAL(clicked(bool)), thumbnailModelLink, SLOT(setEnabled(bool)));
        QObject::connect(thumbnailModelLink, SIGNAL(clicked(bool)), imagesGroup, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(ExportWebDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportWebDialog)
    {
        ExportWebDialog->setWindowTitle(QApplication::translate("ExportWebDialog", "Html Export", 0));
        groupBox->setTitle(QApplication::translate("ExportWebDialog", "General options", 0));
        exportAlbumAndModels->setText(QApplication::translate("ExportWebDialog", "Export Album and models", 0));
        pageGroup->setTitle(QApplication::translate("ExportWebDialog", "Page", 0));
        label_7->setText(QApplication::translate("ExportWebDialog", "Title :", 0));
        webTitle->setText(QString());
        label_8->setText(QApplication::translate("ExportWebDialog", "Max Row(s)", 0));
        label_9->setText(QApplication::translate("ExportWebDialog", "Max Line(s) / Page", 0));
        numberOfPage->setText(QApplication::translate("ExportWebDialog", "Page Nbr", 0));
        groupBox_2->setTitle(QApplication::translate("ExportWebDialog", "Shots", 0));
        thumbnailsGroup->setTitle(QApplication::translate("ExportWebDialog", "Thumbnails", 0));
        label->setText(QApplication::translate("ExportWebDialog", "Predifined size :", 0));
#ifndef QT_NO_TOOLTIP
        thumbnailPredifinedSize->setToolTip(QApplication::translate("ExportWebDialog", "List of predefined screenshots sizes", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ExportWebDialog", "Max Width :", 0));
#ifndef QT_NO_TOOLTIP
        thumbnailWidth->setToolTip(QApplication::translate("ExportWebDialog", "Selected screenshot Width", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ExportWebDialog", "Max Height :", 0));
#ifndef QT_NO_TOOLTIP
        thumbnailHeight->setToolTip(QApplication::translate("ExportWebDialog", "Selected screenshot Height", 0));
#endif // QT_NO_TOOLTIP
        thumbnailModelName->setText(QApplication::translate("ExportWebDialog", "Model Name", 0));
        thumbnailModelLink->setText(QApplication::translate("ExportWebDialog", "Link to model", 0));
        imagesGroup->setTitle(QApplication::translate("ExportWebDialog", "Images", 0));
        label_4->setText(QApplication::translate("ExportWebDialog", "Predifined size :", 0));
#ifndef QT_NO_TOOLTIP
        imagePredifinedSize->setToolTip(QApplication::translate("ExportWebDialog", "List of predefined screenshots sizes", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ExportWebDialog", "Max Width :", 0));
#ifndef QT_NO_TOOLTIP
        imageWidth->setToolTip(QApplication::translate("ExportWebDialog", "Selected screenshot Width", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("ExportWebDialog", "Max Height :", 0));
#ifndef QT_NO_TOOLTIP
        imageHeight->setToolTip(QApplication::translate("ExportWebDialog", "Selected screenshot Height", 0));
#endif // QT_NO_TOOLTIP
        imageModelInformation->setText(QApplication::translate("ExportWebDialog", "Model Informations", 0));
        imageModelLink->setText(QApplication::translate("ExportWebDialog", "Link to model", 0));
        groupBox_3->setTitle(QApplication::translate("ExportWebDialog", "Background", 0));
#ifndef QT_NO_TOOLTIP
        defaultBackgroundRadio->setToolTip(QApplication::translate("ExportWebDialog", "Use Default Background", 0));
#endif // QT_NO_TOOLTIP
        defaultBackgroundRadio->setText(QApplication::translate("ExportWebDialog", "Default", 0));
        editColorButton->setText(QApplication::translate("ExportWebDialog", "...", 0));
        groupBox_ExportDestination->setTitle(QApplication::translate("ExportWebDialog", "Export destination", 0));
        createSubDir->setText(QApplication::translate("ExportWebDialog", "Create export folder", 0));
        browseCmd->setText(QApplication::translate("ExportWebDialog", "Browse...", 0));
        cancelButton->setText(QApplication::translate("ExportWebDialog", "Cancel", 0));
        exportButton->setText(QApplication::translate("ExportWebDialog", "Export", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportWebDialog: public Ui_ExportWebDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTWEBDIALOG_H
