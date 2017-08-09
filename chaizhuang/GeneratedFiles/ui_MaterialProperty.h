/********************************************************************************
** Form generated from reading UI file 'MaterialProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALPROPERTY_H
#define UI_MATERIALPROPERTY_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialProperty
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *materialName;
    QGroupBox *previewGroup;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *_2;
    QLabel *labelAmbient;
    QLabel *colorLabelAmbient;
    QToolButton *editAmbient;
    QHBoxLayout *_3;
    QLabel *labelDiffuse;
    QLabel *colorLabelDiffuse;
    QToolButton *editDiffuse;
    QHBoxLayout *_4;
    QLabel *labelSpecular;
    QLabel *colorLabelSpecular;
    QToolButton *editSpecular;
    QHBoxLayout *_5;
    QLabel *labelSpecular_2;
    QLabel *colorLabelEmissive;
    QToolButton *editEmissive;
    QHBoxLayout *_6;
    QLabel *label_6;
    QDoubleSpinBox *shiness;
    QLabel *label;
    QSlider *opacitySlider;
    QGroupBox *imageGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *useTexture;
    QSpacerItem *spacerItem;
    QComboBox *textureFileNameCombo;
    QToolButton *browseTexture;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *cancelCmd;
    QToolButton *applyCmd;

    void setupUi(QDockWidget *MaterialProperty)
    {
        if (MaterialProperty->objectName().isEmpty())
            MaterialProperty->setObjectName(QStringLiteral("MaterialProperty"));
        MaterialProperty->resize(240, 749);
        MaterialProperty->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MaterialProperty->setFeatures(QDockWidget::NoDockWidgetFeatures);
        MaterialProperty->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        materialName = new QLineEdit(dockWidgetContents);
        materialName->setObjectName(QStringLiteral("materialName"));
        materialName->setReadOnly(true);

        verticalLayout_3->addWidget(materialName);

        previewGroup = new QGroupBox(dockWidgetContents);
        previewGroup->setObjectName(QStringLiteral("previewGroup"));
        previewGroup->setMinimumSize(QSize(0, 180));
        previewGroup->setFlat(true);

        verticalLayout_3->addWidget(previewGroup);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        labelAmbient = new QLabel(groupBox);
        labelAmbient->setObjectName(QStringLiteral("labelAmbient"));

        _2->addWidget(labelAmbient);

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

        _2->addWidget(colorLabelAmbient);

        editAmbient = new QToolButton(groupBox);
        editAmbient->setObjectName(QStringLiteral("editAmbient"));

        _2->addWidget(editAmbient);


        verticalLayout_2->addLayout(_2);

        _3 = new QHBoxLayout();
        _3->setObjectName(QStringLiteral("_3"));
        labelDiffuse = new QLabel(groupBox);
        labelDiffuse->setObjectName(QStringLiteral("labelDiffuse"));

        _3->addWidget(labelDiffuse);

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

        _3->addWidget(colorLabelDiffuse);

        editDiffuse = new QToolButton(groupBox);
        editDiffuse->setObjectName(QStringLiteral("editDiffuse"));

        _3->addWidget(editDiffuse);


        verticalLayout_2->addLayout(_3);

        _4 = new QHBoxLayout();
        _4->setObjectName(QStringLiteral("_4"));
        labelSpecular = new QLabel(groupBox);
        labelSpecular->setObjectName(QStringLiteral("labelSpecular"));

        _4->addWidget(labelSpecular);

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

        _4->addWidget(colorLabelSpecular);

        editSpecular = new QToolButton(groupBox);
        editSpecular->setObjectName(QStringLiteral("editSpecular"));

        _4->addWidget(editSpecular);


        verticalLayout_2->addLayout(_4);

        _5 = new QHBoxLayout();
        _5->setObjectName(QStringLiteral("_5"));
        labelSpecular_2 = new QLabel(groupBox);
        labelSpecular_2->setObjectName(QStringLiteral("labelSpecular_2"));

        _5->addWidget(labelSpecular_2);

        colorLabelEmissive = new QLabel(groupBox);
        colorLabelEmissive->setObjectName(QStringLiteral("colorLabelEmissive"));
        colorLabelEmissive->setMinimumSize(QSize(76, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        colorLabelEmissive->setPalette(palette3);
        colorLabelEmissive->setAutoFillBackground(true);

        _5->addWidget(colorLabelEmissive);

        editEmissive = new QToolButton(groupBox);
        editEmissive->setObjectName(QStringLiteral("editEmissive"));

        _5->addWidget(editEmissive);


        verticalLayout_2->addLayout(_5);

        _6 = new QHBoxLayout();
        _6->setObjectName(QStringLiteral("_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        _6->addWidget(label_6);

        shiness = new QDoubleSpinBox(groupBox);
        shiness->setObjectName(QStringLiteral("shiness"));
        shiness->setMinimumSize(QSize(0, 0));
        shiness->setDecimals(2);
        shiness->setMinimum(0);
        shiness->setMaximum(128);
        shiness->setSingleStep(1);
        shiness->setValue(50);

        _6->addWidget(shiness);


        verticalLayout_2->addLayout(_6);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        opacitySlider = new QSlider(groupBox);
        opacitySlider->setObjectName(QStringLiteral("opacitySlider"));
        opacitySlider->setMaximum(100);
        opacitySlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(opacitySlider);


        verticalLayout_3->addWidget(groupBox);

        imageGroupBox = new QGroupBox(dockWidgetContents);
        imageGroupBox->setObjectName(QStringLiteral("imageGroupBox"));
        imageGroupBox->setMaximumSize(QSize(16777215, 150));
        imageGroupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(imageGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        useTexture = new QCheckBox(imageGroupBox);
        useTexture->setObjectName(QStringLiteral("useTexture"));

        horizontalLayout->addWidget(useTexture);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        verticalLayout->addLayout(horizontalLayout);

        textureFileNameCombo = new QComboBox(imageGroupBox);
        textureFileNameCombo->setObjectName(QStringLiteral("textureFileNameCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textureFileNameCombo->sizePolicy().hasHeightForWidth());
        textureFileNameCombo->setSizePolicy(sizePolicy2);
        textureFileNameCombo->setEditable(true);

        verticalLayout->addWidget(textureFileNameCombo);

        browseTexture = new QToolButton(imageGroupBox);
        browseTexture->setObjectName(QStringLiteral("browseTexture"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(browseTexture->sizePolicy().hasHeightForWidth());
        browseTexture->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(browseTexture);


        verticalLayout_3->addWidget(imageGroupBox);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cancelCmd = new QToolButton(dockWidgetContents);
        cancelCmd->setObjectName(QStringLiteral("cancelCmd"));
        sizePolicy3.setHeightForWidth(cancelCmd->sizePolicy().hasHeightForWidth());
        cancelCmd->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(cancelCmd);

        applyCmd = new QToolButton(dockWidgetContents);
        applyCmd->setObjectName(QStringLiteral("applyCmd"));
        sizePolicy3.setHeightForWidth(applyCmd->sizePolicy().hasHeightForWidth());
        applyCmd->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(applyCmd);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MaterialProperty->setWidget(dockWidgetContents);

        retranslateUi(MaterialProperty);

        QMetaObject::connectSlotsByName(MaterialProperty);
    } // setupUi

    void retranslateUi(QDockWidget *MaterialProperty)
    {
        MaterialProperty->setWindowTitle(QApplication::translate("MaterialProperty", "Material Properties", 0));
        previewGroup->setTitle(QApplication::translate("MaterialProperty", "Preview", 0));
        groupBox->setTitle(QApplication::translate("MaterialProperty", "Color", 0));
        labelAmbient->setText(QApplication::translate("MaterialProperty", "Ambient", 0));
        colorLabelAmbient->setText(QString());
        editAmbient->setText(QApplication::translate("MaterialProperty", "Edit", 0));
        labelDiffuse->setText(QApplication::translate("MaterialProperty", "Diffuse", 0));
        colorLabelDiffuse->setText(QString());
        editDiffuse->setText(QApplication::translate("MaterialProperty", "Edit", 0));
        labelSpecular->setText(QApplication::translate("MaterialProperty", "Specular", 0));
        colorLabelSpecular->setText(QString());
        editSpecular->setText(QApplication::translate("MaterialProperty", "Edit", 0));
        labelSpecular_2->setText(QApplication::translate("MaterialProperty", "Emissive", 0));
        colorLabelEmissive->setText(QString());
        editEmissive->setText(QApplication::translate("MaterialProperty", "Edit", 0));
        label_6->setText(QApplication::translate("MaterialProperty", "Shiness", 0));
        label->setText(QApplication::translate("MaterialProperty", "Transparency", 0));
        imageGroupBox->setTitle(QApplication::translate("MaterialProperty", "Texture", 0));
        useTexture->setText(QApplication::translate("MaterialProperty", "Use Texture", 0));
        browseTexture->setText(QApplication::translate("MaterialProperty", "Browse...", 0));
        cancelCmd->setText(QApplication::translate("MaterialProperty", "Cancel", 0));
        applyCmd->setText(QApplication::translate("MaterialProperty", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class MaterialProperty: public Ui_MaterialProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALPROPERTY_H
