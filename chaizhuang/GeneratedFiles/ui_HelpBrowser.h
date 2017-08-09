/********************************************************************************
** Form generated from reading UI file 'HelpBrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QPushButton *buttonHome;
    QPushButton *buttonBack;
    QPushButton *buttonNext;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QStringLiteral("HelpBrowser"));
        HelpBrowser->resize(518, 373);
        vboxLayout = new QVBoxLayout(HelpBrowser);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        buttonHome = new QPushButton(HelpBrowser);
        buttonHome->setObjectName(QStringLiteral("buttonHome"));

        hboxLayout1->addWidget(buttonHome);

        buttonBack = new QPushButton(HelpBrowser);
        buttonBack->setObjectName(QStringLiteral("buttonBack"));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/FlecheBack.png"));
        buttonBack->setIcon(icon);
        buttonBack->setIconSize(QSize(62, 16));

        hboxLayout1->addWidget(buttonBack);

        buttonNext = new QPushButton(HelpBrowser);
        buttonNext->setObjectName(QStringLiteral("buttonNext"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/FlecheNext.png"));
        buttonNext->setIcon(icon1);
        buttonNext->setIconSize(QSize(62, 16));

        hboxLayout1->addWidget(buttonNext);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(HelpBrowser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        hboxLayout->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout);

        textBrowser = new QTextBrowser(HelpBrowser);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        vboxLayout->addWidget(textBrowser);


        retranslateUi(HelpBrowser);
        QObject::connect(buttonBox, SIGNAL(accepted()), HelpBrowser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HelpBrowser, SLOT(reject()));
        QObject::connect(buttonHome, SIGNAL(clicked()), textBrowser, SLOT(home()));
        QObject::connect(buttonBack, SIGNAL(clicked()), textBrowser, SLOT(backward()));
        QObject::connect(buttonNext, SIGNAL(clicked()), textBrowser, SLOT(forward()));
        QObject::connect(textBrowser, SIGNAL(backwardAvailable(bool)), buttonBack, SLOT(setEnabled(bool)));
        QObject::connect(textBrowser, SIGNAL(forwardAvailable(bool)), buttonNext, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QDialog *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QApplication::translate("HelpBrowser", "Dialog", 0));
        buttonHome->setText(QApplication::translate("HelpBrowser", "Home", 0));
        buttonBack->setText(QString());
        buttonNext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H
