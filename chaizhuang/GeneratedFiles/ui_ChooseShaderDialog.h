/********************************************************************************
** Form generated from reading UI file 'ChooseShaderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESHADERDIALOG_H
#define UI_CHOOSESHADERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseShaderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *shaderListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChooseShaderDialog)
    {
        if (ChooseShaderDialog->objectName().isEmpty())
            ChooseShaderDialog->setObjectName(QStringLiteral("ChooseShaderDialog"));
        ChooseShaderDialog->resize(486, 533);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Shader.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChooseShaderDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ChooseShaderDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        shaderListWidget = new QListWidget(ChooseShaderDialog);
        shaderListWidget->setObjectName(QStringLiteral("shaderListWidget"));
        shaderListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shaderListWidget->setProperty("showDropIndicator", QVariant(false));
        shaderListWidget->setDragDropOverwriteMode(false);
        shaderListWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        shaderListWidget->setMovement(QListView::Static);
        shaderListWidget->setResizeMode(QListView::Adjust);
        shaderListWidget->setLayoutMode(QListView::SinglePass);
        shaderListWidget->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(shaderListWidget);

        buttonBox = new QDialogButtonBox(ChooseShaderDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChooseShaderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChooseShaderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChooseShaderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChooseShaderDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseShaderDialog)
    {
        ChooseShaderDialog->setWindowTitle(QApplication::translate("ChooseShaderDialog", "Chose Shader", 0));
    } // retranslateUi

};

namespace Ui {
    class ChooseShaderDialog: public Ui_ChooseShaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESHADERDIALOG_H
