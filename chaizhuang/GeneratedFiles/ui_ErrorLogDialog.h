/********************************************************************************
** Form generated from reading UI file 'ErrorLogDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORLOGDIALOG_H
#define UI_ERRORLOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorLogDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *errorTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ErrorLogDialog)
    {
        if (ErrorLogDialog->objectName().isEmpty())
            ErrorLogDialog->setObjectName(QStringLiteral("ErrorLogDialog"));
        ErrorLogDialog->resize(955, 401);
        verticalLayout = new QVBoxLayout(ErrorLogDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        errorTextEdit = new QTextEdit(ErrorLogDialog);
        errorTextEdit->setObjectName(QStringLiteral("errorTextEdit"));
        errorTextEdit->setReadOnly(true);

        verticalLayout->addWidget(errorTextEdit);

        buttonBox = new QDialogButtonBox(ErrorLogDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ErrorLogDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ErrorLogDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ErrorLogDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ErrorLogDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorLogDialog)
    {
        ErrorLogDialog->setWindowTitle(QApplication::translate("ErrorLogDialog", "Error Log", 0));
    } // retranslateUi

};

namespace Ui {
    class ErrorLogDialog: public Ui_ErrorLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORLOGDIALOG_H
