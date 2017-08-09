/********************************************************************************
** Form generated from reading UI file 'ListOfMaterial.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTOFMATERIAL_H
#define UI_LISTOFMATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListOfMaterial
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *materialList;
    QHBoxLayout *NumberLayout;
    QLabel *labelNbrSubMaterial;
    QLineEdit *numberOfSubMaterial;

    void setupUi(QWidget *ListOfMaterial)
    {
        if (ListOfMaterial->objectName().isEmpty())
            ListOfMaterial->setObjectName(QStringLiteral("ListOfMaterial"));
        ListOfMaterial->resize(281, 565);
        verticalLayout = new QVBoxLayout(ListOfMaterial);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        materialList = new QListWidget(ListOfMaterial);
        materialList->setObjectName(QStringLiteral("materialList"));
        materialList->setMinimumSize(QSize(0, 0));
        materialList->setSortingEnabled(false);

        verticalLayout->addWidget(materialList);

        NumberLayout = new QHBoxLayout();
        NumberLayout->setObjectName(QStringLiteral("NumberLayout"));
        labelNbrSubMaterial = new QLabel(ListOfMaterial);
        labelNbrSubMaterial->setObjectName(QStringLiteral("labelNbrSubMaterial"));

        NumberLayout->addWidget(labelNbrSubMaterial);

        numberOfSubMaterial = new QLineEdit(ListOfMaterial);
        numberOfSubMaterial->setObjectName(QStringLiteral("numberOfSubMaterial"));
        numberOfSubMaterial->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfSubMaterial->setReadOnly(true);

        NumberLayout->addWidget(numberOfSubMaterial);


        verticalLayout->addLayout(NumberLayout);


        retranslateUi(ListOfMaterial);

        QMetaObject::connectSlotsByName(ListOfMaterial);
    } // setupUi

    void retranslateUi(QWidget *ListOfMaterial)
    {
        ListOfMaterial->setWindowTitle(QApplication::translate("ListOfMaterial", "Form", 0));
        labelNbrSubMaterial->setText(QApplication::translate("ListOfMaterial", "Number :", 0));
    } // retranslateUi

};

namespace Ui {
    class ListOfMaterial: public Ui_ListOfMaterial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTOFMATERIAL_H
