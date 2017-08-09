/********************************************************************************
** Form generated from reading UI file 'ModelManagerView.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELMANAGERVIEW_H
#define UI_MODELMANAGERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelManagerView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *modelCmdGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *modelPropertiesCmd;
    QSpacerItem *horizontalSpacer;
    QToolButton *expandCmd;
    QToolButton *collapseCmd;
    QToolButton *synchroCmd;

    void setupUi(QWidget *ModelManagerView)
    {
        if (ModelManagerView->objectName().isEmpty())
            ModelManagerView->setObjectName(QStringLiteral("ModelManagerView"));
        ModelManagerView->resize(358, 577);
        verticalLayout_2 = new QVBoxLayout(ModelManagerView);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        modelCmdGroup = new QGroupBox(ModelManagerView);
        modelCmdGroup->setObjectName(QStringLiteral("modelCmdGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modelCmdGroup->sizePolicy().hasHeightForWidth());
        modelCmdGroup->setSizePolicy(sizePolicy);
        modelCmdGroup->setFlat(true);
        verticalLayout = new QVBoxLayout(modelCmdGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modelPropertiesCmd = new QToolButton(modelCmdGroup);
        modelPropertiesCmd->setObjectName(QStringLiteral("modelPropertiesCmd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ModelProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        modelPropertiesCmd->setIcon(icon);
        modelPropertiesCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(modelPropertiesCmd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        expandCmd = new QToolButton(modelCmdGroup);
        expandCmd->setObjectName(QStringLiteral("expandCmd"));

        horizontalLayout->addWidget(expandCmd);

        collapseCmd = new QToolButton(modelCmdGroup);
        collapseCmd->setObjectName(QStringLiteral("collapseCmd"));
        collapseCmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(collapseCmd);

        synchroCmd = new QToolButton(modelCmdGroup);
        synchroCmd->setObjectName(QStringLiteral("synchroCmd"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Synchro.png"), QSize(), QIcon::Normal, QIcon::Off);
        synchroCmd->setIcon(icon1);
        synchroCmd->setIconSize(QSize(20, 20));
        synchroCmd->setCheckable(true);
        synchroCmd->setChecked(true);

        horizontalLayout->addWidget(synchroCmd);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(modelCmdGroup);


        retranslateUi(ModelManagerView);

        QMetaObject::connectSlotsByName(ModelManagerView);
    } // setupUi

    void retranslateUi(QWidget *ModelManagerView)
    {
        ModelManagerView->setWindowTitle(QApplication::translate("ModelManagerView", "Form", 0));
        modelCmdGroup->setTitle(QApplication::translate("ModelManagerView", "Model", 0));
#ifndef QT_NO_TOOLTIP
        modelPropertiesCmd->setToolTip(QApplication::translate("ModelManagerView", "Model properties", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modelPropertiesCmd->setStatusTip(QApplication::translate("ModelManagerView", "Display current model properties", 0));
#endif // QT_NO_STATUSTIP
        modelPropertiesCmd->setText(QApplication::translate("ModelManagerView", "...", 0));
#ifndef QT_NO_TOOLTIP
        expandCmd->setToolTip(QApplication::translate("ModelManagerView", "Expand selected node", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        expandCmd->setStatusTip(QApplication::translate("ModelManagerView", "Expand selected node", 0));
#endif // QT_NO_STATUSTIP
        expandCmd->setText(QApplication::translate("ModelManagerView", "Expand", 0));
#ifndef QT_NO_TOOLTIP
        collapseCmd->setToolTip(QApplication::translate("ModelManagerView", "Collapse selected node", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        collapseCmd->setStatusTip(QApplication::translate("ModelManagerView", "Collapse selected node", 0));
#endif // QT_NO_STATUSTIP
        collapseCmd->setText(QApplication::translate("ModelManagerView", "Collapse", 0));
#ifndef QT_NO_TOOLTIP
        synchroCmd->setToolTip(QApplication::translate("ModelManagerView", "Activate / deactivate synchronisation", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        synchroCmd->setStatusTip(QApplication::translate("ModelManagerView", "Activate / deactivate synchronisation", 0));
#endif // QT_NO_STATUSTIP
        synchroCmd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModelManagerView: public Ui_ModelManagerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELMANAGERVIEW_H
