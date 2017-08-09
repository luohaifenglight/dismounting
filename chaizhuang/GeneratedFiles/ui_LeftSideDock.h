/********************************************************************************
** Form generated from reading UI file 'LeftSideDock.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTSIDEDOCK_H
#define UI_LEFTSIDEDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeftSideDock
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *albumCmd;
    QToolButton *modelCmd;
    QToolButton *modelDisassemblyCmd;
    QToolButton *modelAssemblyCmd;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *page_3;
    QWidget *page_4;

    void setupUi(QWidget *LeftSideDock)
    {
        if (LeftSideDock->objectName().isEmpty())
            LeftSideDock->setObjectName(QStringLiteral("LeftSideDock"));
        LeftSideDock->resize(344, 603);
        verticalLayout_3 = new QVBoxLayout(LeftSideDock);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        albumCmd = new QToolButton(LeftSideDock);
        albumCmd->setObjectName(QStringLiteral("albumCmd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(albumCmd->sizePolicy().hasHeightForWidth());
        albumCmd->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Album.png"), QSize(), QIcon::Normal, QIcon::Off);
        albumCmd->setIcon(icon);
        albumCmd->setCheckable(true);
        albumCmd->setChecked(true);
        albumCmd->setAutoExclusive(true);
        albumCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(albumCmd);

        modelCmd = new QToolButton(LeftSideDock);
        modelCmd->setObjectName(QStringLiteral("modelCmd"));
        sizePolicy.setHeightForWidth(modelCmd->sizePolicy().hasHeightForWidth());
        modelCmd->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        modelCmd->setIcon(icon1);
        modelCmd->setCheckable(true);
        modelCmd->setAutoExclusive(true);
        modelCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(modelCmd);

        modelDisassemblyCmd = new QToolButton(LeftSideDock);
        modelDisassemblyCmd->setObjectName(QStringLiteral("modelDisassemblyCmd"));
        sizePolicy.setHeightForWidth(modelDisassemblyCmd->sizePolicy().hasHeightForWidth());
        modelDisassemblyCmd->setSizePolicy(sizePolicy);
        modelDisassemblyCmd->setIcon(icon1);
        modelDisassemblyCmd->setCheckable(true);
        modelDisassemblyCmd->setAutoExclusive(true);
        modelDisassemblyCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(modelDisassemblyCmd);

        modelAssemblyCmd = new QToolButton(LeftSideDock);
        modelAssemblyCmd->setObjectName(QStringLiteral("modelAssemblyCmd"));
        sizePolicy.setHeightForWidth(modelAssemblyCmd->sizePolicy().hasHeightForWidth());
        modelAssemblyCmd->setSizePolicy(sizePolicy);
        modelAssemblyCmd->setIcon(icon1);
        modelAssemblyCmd->setCheckable(true);
        modelAssemblyCmd->setAutoExclusive(true);
        modelAssemblyCmd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(modelAssemblyCmd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(LeftSideDock);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(LeftSideDock);

        QMetaObject::connectSlotsByName(LeftSideDock);
    } // setupUi

    void retranslateUi(QWidget *LeftSideDock)
    {
        LeftSideDock->setWindowTitle(QApplication::translate("LeftSideDock", "Form", 0));
#ifndef QT_NO_TOOLTIP
        albumCmd->setToolTip(QApplication::translate("LeftSideDock", "Current Album", 0));
#endif // QT_NO_TOOLTIP
        albumCmd->setText(QApplication::translate("LeftSideDock", "\351\241\271\347\233\256", 0));
#ifndef QT_NO_TOOLTIP
        modelCmd->setToolTip(QApplication::translate("LeftSideDock", "Model Structure", 0));
#endif // QT_NO_TOOLTIP
        modelCmd->setText(QApplication::translate("LeftSideDock", "\346\237\245\347\234\213", 0));
#ifndef QT_NO_TOOLTIP
        modelDisassemblyCmd->setToolTip(QApplication::translate("LeftSideDock", "Model Structure", 0));
#endif // QT_NO_TOOLTIP
        modelDisassemblyCmd->setText(QApplication::translate("LeftSideDock", "\346\213\206\350\247\243", 0));
#ifndef QT_NO_TOOLTIP
        modelAssemblyCmd->setToolTip(QApplication::translate("LeftSideDock", "Model Structure", 0));
#endif // QT_NO_TOOLTIP
        modelAssemblyCmd->setText(QApplication::translate("LeftSideDock", "\347\273\204\350\243\205", 0));
    } // retranslateUi

};

namespace Ui {
    class LeftSideDock: public Ui_LeftSideDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTSIDEDOCK_H
