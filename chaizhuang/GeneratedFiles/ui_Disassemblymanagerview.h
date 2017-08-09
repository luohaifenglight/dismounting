/********************************************************************************
** Form generated from reading UI file 'Disassemblymanagerview.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISASSEMBLYMANAGERVIEW_H
#define UI_DISASSEMBLYMANAGERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Disassemblymanagerview
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *projectName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTableWidget *modelList;
    QTableWidget *modelDetail;

    void setupUi(QWidget *Disassemblymanagerview)
    {
        if (Disassemblymanagerview->objectName().isEmpty())
            Disassemblymanagerview->setObjectName(QStringLiteral("Disassemblymanagerview"));
        Disassemblymanagerview->resize(400, 442);
        Disassemblymanagerview->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(Disassemblymanagerview);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalGroupBox = new QGroupBox(Disassemblymanagerview);
        verticalGroupBox->setObjectName(QStringLiteral("verticalGroupBox"));
        verticalGroupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(verticalGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(verticalGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        projectName = new QLabel(verticalGroupBox);
        projectName->setObjectName(QStringLiteral("projectName"));

        horizontalLayout_2->addWidget(projectName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(verticalGroupBox);

        splitter = new QSplitter(Disassemblymanagerview);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        modelList = new QTableWidget(splitter);
        modelList->setObjectName(QStringLiteral("modelList"));
        splitter->addWidget(modelList);
        modelDetail = new QTableWidget(splitter);
        modelDetail->setObjectName(QStringLiteral("modelDetail"));
        splitter->addWidget(modelDetail);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(Disassemblymanagerview);

        QMetaObject::connectSlotsByName(Disassemblymanagerview);
    } // setupUi

    void retranslateUi(QWidget *Disassemblymanagerview)
    {
        Disassemblymanagerview->setWindowTitle(QApplication::translate("Disassemblymanagerview", "Form", 0));
        label->setText(QApplication::translate("Disassemblymanagerview", "\346\213\206\350\247\243\351\241\271\347\233\256:", 0));
        projectName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Disassemblymanagerview: public Ui_Disassemblymanagerview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISASSEMBLYMANAGERVIEW_H
