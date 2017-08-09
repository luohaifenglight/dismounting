/********************************************************************************
** Form generated from reading UI file 'EditLightDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLIGHTDIALOG_H
#define UI_EDITLIGHTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditLightDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *labelAmbient;
    QLabel *colorLabelAmbient;
    QPushButton *editAmbient;
    QHBoxLayout *hboxLayout1;
    QLabel *labelDiffuse;
    QLabel *colorLabelDiffuse;
    QPushButton *editDiffuse;
    QHBoxLayout *hboxLayout2;
    QLabel *labelSpecular;
    QLabel *colorLabelSpecular;
    QPushButton *editSpecular;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *AddLightButton;
    QToolButton *deleteLightButton;
    QSpacerItem *verticalSpacer;
    QListWidget *listOfLightWidget;

    void setupUi(QDialog *EditLightDialog)
    {
        if (EditLightDialog->objectName().isEmpty())
            EditLightDialog->setObjectName(QStringLiteral("EditLightDialog"));
        EditLightDialog->setWindowModality(Qt::NonModal);
        EditLightDialog->resize(642, 248);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/LightBulb.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditLightDialog->setWindowIcon(icon);
        EditLightDialog->setModal(false);
        gridLayout = new QGridLayout(EditLightDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_4 = new QGroupBox(EditLightDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        labelAmbient = new QLabel(groupBox);
        labelAmbient->setObjectName(QStringLiteral("labelAmbient"));

        hboxLayout->addWidget(labelAmbient);

        colorLabelAmbient = new QLabel(groupBox);
        colorLabelAmbient->setObjectName(QStringLiteral("colorLabelAmbient"));
        colorLabelAmbient->setMinimumSize(QSize(76, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(224, 223, 227, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(239, 239, 241, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(112, 111, 113, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(149, 149, 151, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        colorLabelAmbient->setPalette(palette);
        colorLabelAmbient->setAutoFillBackground(true);

        hboxLayout->addWidget(colorLabelAmbient);

        editAmbient = new QPushButton(groupBox);
        editAmbient->setObjectName(QStringLiteral("editAmbient"));

        hboxLayout->addWidget(editAmbient);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelDiffuse = new QLabel(groupBox);
        labelDiffuse->setObjectName(QStringLiteral("labelDiffuse"));

        hboxLayout1->addWidget(labelDiffuse);

        colorLabelDiffuse = new QLabel(groupBox);
        colorLabelDiffuse->setObjectName(QStringLiteral("colorLabelDiffuse"));
        colorLabelDiffuse->setMinimumSize(QSize(76, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        colorLabelDiffuse->setPalette(palette1);
        colorLabelDiffuse->setAutoFillBackground(true);

        hboxLayout1->addWidget(colorLabelDiffuse);

        editDiffuse = new QPushButton(groupBox);
        editDiffuse->setObjectName(QStringLiteral("editDiffuse"));

        hboxLayout1->addWidget(editDiffuse);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        labelSpecular = new QLabel(groupBox);
        labelSpecular->setObjectName(QStringLiteral("labelSpecular"));

        hboxLayout2->addWidget(labelSpecular);

        colorLabelSpecular = new QLabel(groupBox);
        colorLabelSpecular->setObjectName(QStringLiteral("colorLabelSpecular"));
        colorLabelSpecular->setMinimumSize(QSize(76, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        colorLabelSpecular->setPalette(palette2);
        colorLabelSpecular->setAutoFillBackground(true);

        hboxLayout2->addWidget(colorLabelSpecular);

        editSpecular = new QPushButton(groupBox);
        editSpecular->setObjectName(QStringLiteral("editSpecular"));

        hboxLayout2->addWidget(editSpecular);


        vboxLayout->addLayout(hboxLayout2);


        verticalLayout_2->addWidget(groupBox);


        gridLayout->addWidget(groupBox_4, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(EditLightDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(EditLightDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AddLightButton = new QToolButton(groupBox_2);
        AddLightButton->setObjectName(QStringLiteral("AddLightButton"));
        AddLightButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(AddLightButton);

        deleteLightButton = new QToolButton(groupBox_2);
        deleteLightButton->setObjectName(QStringLiteral("deleteLightButton"));

        verticalLayout->addWidget(deleteLightButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        listOfLightWidget = new QListWidget(groupBox_2);
        listOfLightWidget->setObjectName(QStringLiteral("listOfLightWidget"));

        horizontalLayout->addWidget(listOfLightWidget);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        retranslateUi(EditLightDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditLightDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditLightDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditLightDialog);
    } // setupUi

    void retranslateUi(QDialog *EditLightDialog)
    {
        EditLightDialog->setWindowTitle(QApplication::translate("EditLightDialog", "Edit Light", 0));
        groupBox_4->setTitle(QApplication::translate("EditLightDialog", "Current light properties", 0));
        groupBox->setTitle(QApplication::translate("EditLightDialog", "Color", 0));
        labelAmbient->setText(QApplication::translate("EditLightDialog", "Ambient", 0));
        colorLabelAmbient->setText(QString());
        editAmbient->setText(QApplication::translate("EditLightDialog", "Edit", 0));
        labelDiffuse->setText(QApplication::translate("EditLightDialog", "Diffuse", 0));
        colorLabelDiffuse->setText(QString());
        editDiffuse->setText(QApplication::translate("EditLightDialog", "Edit", 0));
        labelSpecular->setText(QApplication::translate("EditLightDialog", "Specular", 0));
        colorLabelSpecular->setText(QString());
        editSpecular->setText(QApplication::translate("EditLightDialog", "Edit", 0));
        groupBox_2->setTitle(QApplication::translate("EditLightDialog", "Light List", 0));
#ifndef QT_NO_TOOLTIP
        AddLightButton->setToolTip(QApplication::translate("EditLightDialog", "Add a new user light", 0));
#endif // QT_NO_TOOLTIP
        AddLightButton->setText(QApplication::translate("EditLightDialog", "Add", 0));
#ifndef QT_NO_TOOLTIP
        deleteLightButton->setToolTip(QApplication::translate("EditLightDialog", "Delete current user light", 0));
#endif // QT_NO_TOOLTIP
        deleteLightButton->setText(QApplication::translate("EditLightDialog", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class EditLightDialog: public Ui_EditLightDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLIGHTDIALOG_H
