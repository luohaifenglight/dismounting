/********************************************************************************
** Form generated from reading UI file 'OpenAlbumOption.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENALBUMOPTION_H
#define UI_OPENALBUMOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenAlbumOption
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *saveCurrentAlbum;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *replaceCurrentAlbum;
    QRadioButton *addToCurrentAlbum;
    QLabel *messageLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenAlbumOption)
    {
        if (OpenAlbumOption->objectName().isEmpty())
            OpenAlbumOption->setObjectName(QStringLiteral("OpenAlbumOption"));
        OpenAlbumOption->resize(405, 260);
        verticalLayout = new QVBoxLayout(OpenAlbumOption);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(OpenAlbumOption);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        saveCurrentAlbum = new QCheckBox(groupBox);
        saveCurrentAlbum->setObjectName(QStringLiteral("saveCurrentAlbum"));

        verticalLayout_2->addWidget(saveCurrentAlbum);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(OpenAlbumOption);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        replaceCurrentAlbum = new QRadioButton(groupBox_2);
        replaceCurrentAlbum->setObjectName(QStringLiteral("replaceCurrentAlbum"));
        replaceCurrentAlbum->setChecked(true);

        verticalLayout_3->addWidget(replaceCurrentAlbum);

        addToCurrentAlbum = new QRadioButton(groupBox_2);
        addToCurrentAlbum->setObjectName(QStringLiteral("addToCurrentAlbum"));

        verticalLayout_3->addWidget(addToCurrentAlbum);


        verticalLayout->addWidget(groupBox_2);

        messageLabel = new QLabel(OpenAlbumOption);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setFrameShape(QFrame::Box);
        messageLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(messageLabel);

        buttonBox = new QDialogButtonBox(OpenAlbumOption);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OpenAlbumOption);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenAlbumOption, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenAlbumOption, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenAlbumOption);
    } // setupUi

    void retranslateUi(QDialog *OpenAlbumOption)
    {
        OpenAlbumOption->setWindowTitle(QApplication::translate("OpenAlbumOption", "Open Option", 0));
        groupBox->setTitle(QApplication::translate("OpenAlbumOption", "Current Album", 0));
        saveCurrentAlbum->setText(QApplication::translate("OpenAlbumOption", "Save Current Album before.", 0));
        groupBox_2->setTitle(QApplication::translate("OpenAlbumOption", "Opening Mode", 0));
        replaceCurrentAlbum->setText(QApplication::translate("OpenAlbumOption", "Replace Current Album.", 0));
        addToCurrentAlbum->setText(QApplication::translate("OpenAlbumOption", "Add To Current Album.", 0));
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenAlbumOption: public Ui_OpenAlbumOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENALBUMOPTION_H
