/********************************************************************************
** Form generated from reading UI file 'SendFilesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFILESDIALOG_H
#define UI_SENDFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendFilesDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *updateCurrentAlbum;
    QCheckBox *copyAlbumFile;
    QLabel *label_2;
    QLineEdit *albumName;
    QGroupBox *groupBoxOrigin;
    QVBoxLayout *verticalLayout;
    QTreeWidget *originFilesList;
    QHBoxLayout *horizontalLayout;
    QCheckBox *createSubFolder;
    QToolButton *sendAllCmd;
    QToolButton *sendSelectedCmd;
    QToolButton *notSendAllCmd;
    QToolButton *notSendSelectedCmd;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxDestination;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *destinationFilesList;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *totalDestinationSize;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *targetPath;
    QPushButton *browsCmd;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SendFilesDialog)
    {
        if (SendFilesDialog->objectName().isEmpty())
            SendFilesDialog->setObjectName(QStringLiteral("SendFilesDialog"));
        SendFilesDialog->resize(723, 656);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/SendAction.png"), QSize(), QIcon::Normal, QIcon::Off);
        SendFilesDialog->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(SendFilesDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(SendFilesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        updateCurrentAlbum = new QCheckBox(groupBox);
        updateCurrentAlbum->setObjectName(QStringLiteral("updateCurrentAlbum"));
        updateCurrentAlbum->setChecked(true);

        verticalLayout_3->addWidget(updateCurrentAlbum);

        copyAlbumFile = new QCheckBox(groupBox);
        copyAlbumFile->setObjectName(QStringLiteral("copyAlbumFile"));
        copyAlbumFile->setChecked(true);

        verticalLayout_3->addWidget(copyAlbumFile);


        horizontalLayout_2->addLayout(verticalLayout_3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        albumName = new QLineEdit(groupBox);
        albumName->setObjectName(QStringLiteral("albumName"));

        horizontalLayout_2->addWidget(albumName);


        verticalLayout_4->addWidget(groupBox);

        groupBoxOrigin = new QGroupBox(SendFilesDialog);
        groupBoxOrigin->setObjectName(QStringLiteral("groupBoxOrigin"));
        verticalLayout = new QVBoxLayout(groupBoxOrigin);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        originFilesList = new QTreeWidget(groupBoxOrigin);
        originFilesList->setObjectName(QStringLiteral("originFilesList"));
        originFilesList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        originFilesList->setSortingEnabled(true);
        originFilesList->setWordWrap(false);

        verticalLayout->addWidget(originFilesList);


        verticalLayout_4->addWidget(groupBoxOrigin);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        createSubFolder = new QCheckBox(SendFilesDialog);
        createSubFolder->setObjectName(QStringLiteral("createSubFolder"));

        horizontalLayout->addWidget(createSubFolder);

        sendAllCmd = new QToolButton(SendFilesDialog);
        sendAllCmd->setObjectName(QStringLiteral("sendAllCmd"));
        sendAllCmd->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/SendAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendAllCmd->setIcon(icon1);
        sendAllCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(sendAllCmd);

        sendSelectedCmd = new QToolButton(SendFilesDialog);
        sendSelectedCmd->setObjectName(QStringLiteral("sendSelectedCmd"));
        sendSelectedCmd->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/SendSelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendSelectedCmd->setIcon(icon2);
        sendSelectedCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(sendSelectedCmd);

        notSendAllCmd = new QToolButton(SendFilesDialog);
        notSendAllCmd->setObjectName(QStringLiteral("notSendAllCmd"));
        notSendAllCmd->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/NotSendAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        notSendAllCmd->setIcon(icon3);
        notSendAllCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(notSendAllCmd);

        notSendSelectedCmd = new QToolButton(SendFilesDialog);
        notSendSelectedCmd->setObjectName(QStringLiteral("notSendSelectedCmd"));
        notSendSelectedCmd->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/NotSendSelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        notSendSelectedCmd->setIcon(icon4);
        notSendSelectedCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(notSendSelectedCmd);

        horizontalSpacer_2 = new QSpacerItem(118, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBoxDestination = new QGroupBox(SendFilesDialog);
        groupBoxDestination->setObjectName(QStringLiteral("groupBoxDestination"));
        verticalLayout_2 = new QVBoxLayout(groupBoxDestination);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        destinationFilesList = new QTreeWidget(groupBoxDestination);
        destinationFilesList->setObjectName(QStringLiteral("destinationFilesList"));
        destinationFilesList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        destinationFilesList->setSortingEnabled(true);
        destinationFilesList->setColumnCount(1);

        verticalLayout_2->addWidget(destinationFilesList);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBoxDestination);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        totalDestinationSize = new QLineEdit(groupBoxDestination);
        totalDestinationSize->setObjectName(QStringLiteral("totalDestinationSize"));
        totalDestinationSize->setMaximumSize(QSize(150, 16777215));
        totalDestinationSize->setReadOnly(true);

        horizontalLayout_6->addWidget(totalDestinationSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_4->addWidget(groupBoxDestination);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(SendFilesDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        targetPath = new QLineEdit(SendFilesDialog);
        targetPath->setObjectName(QStringLiteral("targetPath"));

        horizontalLayout_4->addWidget(targetPath);

        browsCmd = new QPushButton(SendFilesDialog);
        browsCmd->setObjectName(QStringLiteral("browsCmd"));

        horizontalLayout_4->addWidget(browsCmd);


        verticalLayout_4->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(SendFilesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(SendFilesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SendFilesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SendFilesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SendFilesDialog);
    } // setupUi

    void retranslateUi(QDialog *SendFilesDialog)
    {
        SendFilesDialog->setWindowTitle(QApplication::translate("SendFilesDialog", "Export to Folder", 0));
        groupBox->setTitle(QApplication::translate("SendFilesDialog", "Album", 0));
        updateCurrentAlbum->setText(QApplication::translate("SendFilesDialog", "Update current album", 0));
        copyAlbumFile->setText(QApplication::translate("SendFilesDialog", "Create Album to destination directory", 0));
        label_2->setText(QApplication::translate("SendFilesDialog", "Name :", 0));
        groupBoxOrigin->setTitle(QApplication::translate("SendFilesDialog", "Files which can be copied", 0));
        QTreeWidgetItem *___qtreewidgetitem = originFilesList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SendFilesDialog", "1", 0));
        createSubFolder->setText(QApplication::translate("SendFilesDialog", "Create Sub folder", 0));
        sendAllCmd->setText(QApplication::translate("SendFilesDialog", "...", 0));
        sendSelectedCmd->setText(QApplication::translate("SendFilesDialog", "...", 0));
        notSendAllCmd->setText(QApplication::translate("SendFilesDialog", "...", 0));
        notSendSelectedCmd->setText(QApplication::translate("SendFilesDialog", "...", 0));
        groupBoxDestination->setTitle(QApplication::translate("SendFilesDialog", "Files which will be copied", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = destinationFilesList->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("SendFilesDialog", "1", 0));
        label_3->setText(QApplication::translate("SendFilesDialog", "Total Size :", 0));
        label->setText(QApplication::translate("SendFilesDialog", "Copy To", 0));
        browsCmd->setText(QApplication::translate("SendFilesDialog", "Browse...", 0));
    } // retranslateUi

};

namespace Ui {
    class SendFilesDialog: public Ui_SendFilesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFILESDIALOG_H
