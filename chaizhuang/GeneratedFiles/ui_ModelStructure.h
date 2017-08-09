/********************************************************************************
** Form generated from reading UI file 'ModelStructure.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELSTRUCTURE_H
#define UI_MODELSTRUCTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelStructure
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *structure;

    void setupUi(QWidget *ModelStructure)
    {
        if (ModelStructure->objectName().isEmpty())
            ModelStructure->setObjectName(QStringLiteral("ModelStructure"));
        ModelStructure->resize(354, 576);
        verticalLayout = new QVBoxLayout(ModelStructure);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        structure = new QTreeWidget(ModelStructure);
        structure->setObjectName(QStringLiteral("structure"));
        structure->setContextMenuPolicy(Qt::ActionsContextMenu);
        structure->setEditTriggers(QAbstractItemView::NoEditTriggers);
        structure->setSelectionMode(QAbstractItemView::ExtendedSelection);
        structure->setSelectionBehavior(QAbstractItemView::SelectRows);
        structure->setIconSize(QSize(16, 16));
        structure->setIndentation(20);
        structure->setAnimated(false);
        structure->setHeaderHidden(true);
        structure->setExpandsOnDoubleClick(false);
        structure->setColumnCount(1);

        verticalLayout->addWidget(structure);


        retranslateUi(ModelStructure);

        QMetaObject::connectSlotsByName(ModelStructure);
    } // setupUi

    void retranslateUi(QWidget *ModelStructure)
    {
        ModelStructure->setWindowTitle(QApplication::translate("ModelStructure", "Form", 0));
        QTreeWidgetItem *___qtreewidgetitem = structure->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ModelStructure", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class ModelStructure: public Ui_ModelStructure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELSTRUCTURE_H
