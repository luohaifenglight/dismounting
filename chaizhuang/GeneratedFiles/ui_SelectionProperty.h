/********************************************************************************
** Form generated from reading UI file 'SelectionProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONPROPERTY_H
#define UI_SELECTIONPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectionProperty
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *selectionName;
    QHBoxLayout *hboxLayout;
    QLabel *label_5;
    QSpacerItem *spacerItem;
    QLineEdit *numberOfVertex;
    QHBoxLayout *hboxLayout1;
    QLabel *label_6;
    QSpacerItem *spacerItem1;
    QLineEdit *numberOfFace;
    QHBoxLayout *hboxLayout2;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QLineEdit *numberOfSubMaterial;
    QToolButton *reverseNormalsCmd;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *hideShowCmd;
    QToolButton *assignShaderCmd;
    QHBoxLayout *horizontalLayout;
    QLabel *numberOfObjectLabel;
    QLineEdit *numberOfObject;
    QToolButton *editPropertyCmd;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *SelectionProperty)
    {
        if (SelectionProperty->objectName().isEmpty())
            SelectionProperty->setObjectName(QStringLiteral("SelectionProperty"));
        SelectionProperty->resize(206, 391);
        verticalLayout = new QVBoxLayout(SelectionProperty);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectionName = new QLineEdit(SelectionProperty);
        selectionName->setObjectName(QStringLiteral("selectionName"));
        selectionName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectionName->sizePolicy().hasHeightForWidth());
        selectionName->setSizePolicy(sizePolicy);
        selectionName->setMinimumSize(QSize(45, 0));
        selectionName->setMaximumSize(QSize(16777215, 16777215));
        selectionName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        selectionName->setReadOnly(true);

        verticalLayout->addWidget(selectionName);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_5 = new QLabel(SelectionProperty);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout->addWidget(label_5);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        numberOfVertex = new QLineEdit(SelectionProperty);
        numberOfVertex->setObjectName(QStringLiteral("numberOfVertex"));
        numberOfVertex->setEnabled(true);
        sizePolicy.setHeightForWidth(numberOfVertex->sizePolicy().hasHeightForWidth());
        numberOfVertex->setSizePolicy(sizePolicy);
        numberOfVertex->setMinimumSize(QSize(45, 0));
        numberOfVertex->setMaximumSize(QSize(80, 16777215));
        numberOfVertex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfVertex->setReadOnly(true);

        hboxLayout->addWidget(numberOfVertex);


        verticalLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_6 = new QLabel(SelectionProperty);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout1->addWidget(label_6);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        numberOfFace = new QLineEdit(SelectionProperty);
        numberOfFace->setObjectName(QStringLiteral("numberOfFace"));
        numberOfFace->setEnabled(true);
        sizePolicy.setHeightForWidth(numberOfFace->sizePolicy().hasHeightForWidth());
        numberOfFace->setSizePolicy(sizePolicy);
        numberOfFace->setMinimumSize(QSize(45, 0));
        numberOfFace->setMaximumSize(QSize(80, 16777215));
        numberOfFace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfFace->setReadOnly(true);

        hboxLayout1->addWidget(numberOfFace);


        verticalLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label = new QLabel(SelectionProperty);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout2->addWidget(label);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        numberOfSubMaterial = new QLineEdit(SelectionProperty);
        numberOfSubMaterial->setObjectName(QStringLiteral("numberOfSubMaterial"));
        numberOfSubMaterial->setEnabled(true);
        sizePolicy.setHeightForWidth(numberOfSubMaterial->sizePolicy().hasHeightForWidth());
        numberOfSubMaterial->setSizePolicy(sizePolicy);
        numberOfSubMaterial->setMinimumSize(QSize(45, 0));
        numberOfSubMaterial->setMaximumSize(QSize(80, 16777215));
        numberOfSubMaterial->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfSubMaterial->setReadOnly(true);

        hboxLayout2->addWidget(numberOfSubMaterial);


        verticalLayout->addLayout(hboxLayout2);

        reverseNormalsCmd = new QToolButton(SelectionProperty);
        reverseNormalsCmd->setObjectName(QStringLiteral("reverseNormalsCmd"));
        reverseNormalsCmd->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reverseNormalsCmd->sizePolicy().hasHeightForWidth());
        reverseNormalsCmd->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(reverseNormalsCmd);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        hideShowCmd = new QToolButton(SelectionProperty);
        hideShowCmd->setObjectName(QStringLiteral("hideShowCmd"));
        hideShowCmd->setEnabled(false);
        sizePolicy1.setHeightForWidth(hideShowCmd->sizePolicy().hasHeightForWidth());
        hideShowCmd->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ShowNoShow.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideShowCmd->setIcon(icon);
        hideShowCmd->setIconSize(QSize(20, 20));
        hideShowCmd->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(hideShowCmd);

        assignShaderCmd = new QToolButton(SelectionProperty);
        assignShaderCmd->setObjectName(QStringLiteral("assignShaderCmd"));
        sizePolicy1.setHeightForWidth(assignShaderCmd->sizePolicy().hasHeightForWidth());
        assignShaderCmd->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Shader.png"), QSize(), QIcon::Normal, QIcon::Off);
        assignShaderCmd->setIcon(icon1);
        assignShaderCmd->setIconSize(QSize(20, 20));
        assignShaderCmd->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(assignShaderCmd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        numberOfObjectLabel = new QLabel(SelectionProperty);
        numberOfObjectLabel->setObjectName(QStringLiteral("numberOfObjectLabel"));

        horizontalLayout->addWidget(numberOfObjectLabel);

        numberOfObject = new QLineEdit(SelectionProperty);
        numberOfObject->setObjectName(QStringLiteral("numberOfObject"));
        numberOfObject->setReadOnly(true);

        horizontalLayout->addWidget(numberOfObject);


        verticalLayout->addLayout(horizontalLayout);

        editPropertyCmd = new QToolButton(SelectionProperty);
        editPropertyCmd->setObjectName(QStringLiteral("editPropertyCmd"));
        editPropertyCmd->setEnabled(false);
        sizePolicy1.setHeightForWidth(editPropertyCmd->sizePolicy().hasHeightForWidth());
        editPropertyCmd->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/InstanceProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        editPropertyCmd->setIcon(icon2);
        editPropertyCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(editPropertyCmd);

        spacerItem3 = new QSpacerItem(81, 139, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem3);


        retranslateUi(SelectionProperty);

        QMetaObject::connectSlotsByName(SelectionProperty);
    } // setupUi

    void retranslateUi(QWidget *SelectionProperty)
    {
        SelectionProperty->setWindowTitle(QApplication::translate("SelectionProperty", "Form", 0));
        label_5->setText(QApplication::translate("SelectionProperty", "Vertices :", 0));
        label_6->setText(QApplication::translate("SelectionProperty", "Faces :", 0));
        label->setText(QApplication::translate("SelectionProperty", "Materials :", 0));
        reverseNormalsCmd->setText(QApplication::translate("SelectionProperty", "Reverse Normals", 0));
        hideShowCmd->setText(QApplication::translate("SelectionProperty", "Show / Hide", 0));
        assignShaderCmd->setText(QApplication::translate("SelectionProperty", "AssignShader", 0));
        numberOfObjectLabel->setText(QApplication::translate("SelectionProperty", "Nbr", 0));
        editPropertyCmd->setText(QApplication::translate("SelectionProperty", "Instance Properties", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectionProperty: public Ui_SelectionProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONPROPERTY_H
