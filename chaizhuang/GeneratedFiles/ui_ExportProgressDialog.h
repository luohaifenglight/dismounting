/********************************************************************************
** Form generated from reading UI file 'ExportProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPROGRESSDIALOG_H
#define UI_EXPORTPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportProgressDialog)
    {
        if (ExportProgressDialog->objectName().isEmpty())
            ExportProgressDialog->setObjectName(QStringLiteral("ExportProgressDialog"));
        ExportProgressDialog->resize(314, 126);
        verticalLayout = new QVBoxLayout(ExportProgressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ExportProgressDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(ExportProgressDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(ExportProgressDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportProgressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportProgressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportProgressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportProgressDialog)
    {
        ExportProgressDialog->setWindowTitle(QApplication::translate("ExportProgressDialog", "Export Current Model", 0));
        label->setText(QApplication::translate("ExportProgressDialog", "Export in Progress. Please Wait...", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportProgressDialog: public Ui_ExportProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPROGRESSDIALOG_H
