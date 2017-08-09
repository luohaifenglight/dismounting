/********************************************************************************
** Form generated from reading UI file 'InstanceProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANCEPROPERTY_H
#define UI_INSTANCEPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstanceProperty
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *meshName;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *_15;
    QLabel *label_13;
    QSpacerItem *spacerItem;
    QLineEdit *numberOfVertex;
    QHBoxLayout *_14;
    QLabel *label_12;
    QSpacerItem *spacerItem1;
    QLineEdit *numberOfFace;
    QHBoxLayout *_16;
    QLabel *label_14;
    QSpacerItem *spacerItem2;
    QLineEdit *bodyCount;
    QHBoxLayout *horizontalLayout;
    QToolButton *reverseNormalsCmd;
    QToolButton *assignShaderCmd;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_21;
    QLabel *label_19;
    QSpacerItem *spacerItem3;
    QLineEdit *bBoxXLenght;
    QHBoxLayout *_22;
    QLabel *label_20;
    QSpacerItem *spacerItem4;
    QLineEdit *bBoxYLenght;
    QHBoxLayout *_23;
    QLabel *label_21;
    QSpacerItem *spacerItem5;
    QLineEdit *bBoxZLenght;
    QGroupBox *materialListGroup;
    QToolButton *doneCmd;

    void setupUi(QDockWidget *InstanceProperty)
    {
        if (InstanceProperty->objectName().isEmpty())
            InstanceProperty->setObjectName(QStringLiteral("InstanceProperty"));
        InstanceProperty->resize(285, 641);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        meshName = new QLineEdit(dockWidgetContents);
        meshName->setObjectName(QStringLiteral("meshName"));
        meshName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(meshName->sizePolicy().hasHeightForWidth());
        meshName->setSizePolicy(sizePolicy);
        meshName->setMinimumSize(QSize(45, 0));
        meshName->setMaximumSize(QSize(16777215, 16777215));
        meshName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        meshName->setReadOnly(true);

        verticalLayout_4->addWidget(meshName);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        _15 = new QHBoxLayout();
        _15->setObjectName(QStringLiteral("_15"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        _15->addWidget(label_13);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _15->addItem(spacerItem);

        numberOfVertex = new QLineEdit(groupBox_4);
        numberOfVertex->setObjectName(QStringLiteral("numberOfVertex"));
        numberOfVertex->setEnabled(true);
        sizePolicy.setHeightForWidth(numberOfVertex->sizePolicy().hasHeightForWidth());
        numberOfVertex->setSizePolicy(sizePolicy);
        numberOfVertex->setMinimumSize(QSize(45, 0));
        numberOfVertex->setMaximumSize(QSize(80, 16777215));
        numberOfVertex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfVertex->setReadOnly(true);

        _15->addWidget(numberOfVertex);


        verticalLayout_2->addLayout(_15);

        _14 = new QHBoxLayout();
        _14->setObjectName(QStringLiteral("_14"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        _14->addWidget(label_12);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _14->addItem(spacerItem1);

        numberOfFace = new QLineEdit(groupBox_4);
        numberOfFace->setObjectName(QStringLiteral("numberOfFace"));
        numberOfFace->setEnabled(true);
        sizePolicy.setHeightForWidth(numberOfFace->sizePolicy().hasHeightForWidth());
        numberOfFace->setSizePolicy(sizePolicy);
        numberOfFace->setMinimumSize(QSize(45, 0));
        numberOfFace->setMaximumSize(QSize(80, 16777215));
        numberOfFace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfFace->setReadOnly(true);

        _14->addWidget(numberOfFace);


        verticalLayout_2->addLayout(_14);

        _16 = new QHBoxLayout();
        _16->setObjectName(QStringLiteral("_16"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        _16->addWidget(label_14);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _16->addItem(spacerItem2);

        bodyCount = new QLineEdit(groupBox_4);
        bodyCount->setObjectName(QStringLiteral("bodyCount"));
        bodyCount->setEnabled(true);
        sizePolicy.setHeightForWidth(bodyCount->sizePolicy().hasHeightForWidth());
        bodyCount->setSizePolicy(sizePolicy);
        bodyCount->setMinimumSize(QSize(45, 0));
        bodyCount->setMaximumSize(QSize(80, 16777215));
        bodyCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bodyCount->setReadOnly(true);

        _16->addWidget(bodyCount);


        verticalLayout_2->addLayout(_16);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        reverseNormalsCmd = new QToolButton(groupBox_4);
        reverseNormalsCmd->setObjectName(QStringLiteral("reverseNormalsCmd"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reverseNormalsCmd->sizePolicy().hasHeightForWidth());
        reverseNormalsCmd->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(reverseNormalsCmd);

        assignShaderCmd = new QToolButton(groupBox_4);
        assignShaderCmd->setObjectName(QStringLiteral("assignShaderCmd"));
        sizePolicy1.setHeightForWidth(assignShaderCmd->sizePolicy().hasHeightForWidth());
        assignShaderCmd->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Shader.png"), QSize(), QIcon::Normal, QIcon::Off);
        assignShaderCmd->setIcon(icon);
        assignShaderCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(assignShaderCmd);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _21 = new QHBoxLayout();
        _21->setObjectName(QStringLiteral("_21"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        _21->addWidget(label_19);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _21->addItem(spacerItem3);

        bBoxXLenght = new QLineEdit(groupBox);
        bBoxXLenght->setObjectName(QStringLiteral("bBoxXLenght"));
        bBoxXLenght->setEnabled(true);
        sizePolicy.setHeightForWidth(bBoxXLenght->sizePolicy().hasHeightForWidth());
        bBoxXLenght->setSizePolicy(sizePolicy);
        bBoxXLenght->setMinimumSize(QSize(45, 0));
        bBoxXLenght->setMaximumSize(QSize(80, 16777215));
        bBoxXLenght->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bBoxXLenght->setReadOnly(true);

        _21->addWidget(bBoxXLenght);


        verticalLayout->addLayout(_21);

        _22 = new QHBoxLayout();
        _22->setObjectName(QStringLiteral("_22"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));

        _22->addWidget(label_20);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _22->addItem(spacerItem4);

        bBoxYLenght = new QLineEdit(groupBox);
        bBoxYLenght->setObjectName(QStringLiteral("bBoxYLenght"));
        bBoxYLenght->setEnabled(true);
        sizePolicy.setHeightForWidth(bBoxYLenght->sizePolicy().hasHeightForWidth());
        bBoxYLenght->setSizePolicy(sizePolicy);
        bBoxYLenght->setMinimumSize(QSize(45, 0));
        bBoxYLenght->setMaximumSize(QSize(80, 16777215));
        bBoxYLenght->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bBoxYLenght->setReadOnly(true);

        _22->addWidget(bBoxYLenght);


        verticalLayout->addLayout(_22);

        _23 = new QHBoxLayout();
        _23->setObjectName(QStringLiteral("_23"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));

        _23->addWidget(label_21);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _23->addItem(spacerItem5);

        bBoxZLenght = new QLineEdit(groupBox);
        bBoxZLenght->setObjectName(QStringLiteral("bBoxZLenght"));
        bBoxZLenght->setEnabled(true);
        sizePolicy.setHeightForWidth(bBoxZLenght->sizePolicy().hasHeightForWidth());
        bBoxZLenght->setSizePolicy(sizePolicy);
        bBoxZLenght->setMinimumSize(QSize(45, 0));
        bBoxZLenght->setMaximumSize(QSize(80, 16777215));
        bBoxZLenght->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bBoxZLenght->setReadOnly(true);

        _23->addWidget(bBoxZLenght);


        verticalLayout->addLayout(_23);


        verticalLayout_4->addWidget(groupBox);

        materialListGroup = new QGroupBox(dockWidgetContents);
        materialListGroup->setObjectName(QStringLiteral("materialListGroup"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(materialListGroup->sizePolicy().hasHeightForWidth());
        materialListGroup->setSizePolicy(sizePolicy2);
        materialListGroup->setFlat(true);

        verticalLayout_4->addWidget(materialListGroup);

        doneCmd = new QToolButton(dockWidgetContents);
        doneCmd->setObjectName(QStringLiteral("doneCmd"));
        sizePolicy1.setHeightForWidth(doneCmd->sizePolicy().hasHeightForWidth());
        doneCmd->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(doneCmd);

        InstanceProperty->setWidget(dockWidgetContents);

        retranslateUi(InstanceProperty);

        QMetaObject::connectSlotsByName(InstanceProperty);
    } // setupUi

    void retranslateUi(QDockWidget *InstanceProperty)
    {
        InstanceProperty->setWindowTitle(QApplication::translate("InstanceProperty", "InstanceProperty", 0));
        groupBox_4->setTitle(QApplication::translate("InstanceProperty", "Mesh", 0));
        label_13->setText(QApplication::translate("InstanceProperty", "Vertices :", 0));
        label_12->setText(QApplication::translate("InstanceProperty", "Faces :", 0));
        label_14->setText(QApplication::translate("InstanceProperty", "Meshs", 0));
        reverseNormalsCmd->setText(QApplication::translate("InstanceProperty", "Reverse Normals", 0));
        assignShaderCmd->setText(QApplication::translate("InstanceProperty", "Assign Shader", 0));
        groupBox->setTitle(QApplication::translate("InstanceProperty", "Bounding Box", 0));
        label_19->setText(QApplication::translate("InstanceProperty", "X Length", 0));
        label_20->setText(QApplication::translate("InstanceProperty", "Y Length", 0));
        label_21->setText(QApplication::translate("InstanceProperty", "Z Length", 0));
        materialListGroup->setTitle(QApplication::translate("InstanceProperty", "Materials", 0));
        doneCmd->setText(QApplication::translate("InstanceProperty", "Done", 0));
    } // retranslateUi

};

namespace Ui {
    class InstanceProperty: public Ui_InstanceProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANCEPROPERTY_H
