/********************************************************************************
** Form generated from reading UI file 'EditPosition.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOSITION_H
#define UI_EDITPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditPosition
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *tx;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QDoubleSpinBox *ty;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QDoubleSpinBox *tz;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout4;
    QLabel *label_11;
    QDoubleSpinBox *rx;
    QHBoxLayout *hboxLayout5;
    QLabel *label_9;
    QDoubleSpinBox *ry;
    QHBoxLayout *hboxLayout6;
    QLabel *label_10;
    QDoubleSpinBox *rz;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditPosition)
    {
        if (EditPosition->objectName().isEmpty())
            EditPosition->setObjectName(QStringLiteral("EditPosition"));
        EditPosition->resize(510, 260);
        QIcon icon;
        icon.addFile(QStringLiteral("../../glcviewer"), QSize(), QIcon::Normal, QIcon::Off);
        EditPosition->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(EditPosition);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(EditPosition);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

        tx = new QDoubleSpinBox(groupBox_2);
        tx->setObjectName(QStringLiteral("tx"));
        tx->setMinimumSize(QSize(83, 0));
        tx->setDecimals(3);
        tx->setMinimum(-200000);
        tx->setMaximum(200000);
        tx->setValue(0);

        hboxLayout1->addWidget(tx);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout2->addWidget(label_3);

        ty = new QDoubleSpinBox(groupBox_2);
        ty->setObjectName(QStringLiteral("ty"));
        ty->setMinimumSize(QSize(83, 0));
        ty->setDecimals(3);
        ty->setMinimum(-200000);
        ty->setMaximum(200000);

        hboxLayout2->addWidget(ty);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout3->addWidget(label_4);

        tz = new QDoubleSpinBox(groupBox_2);
        tz->setObjectName(QStringLiteral("tz"));
        tz->setMinimumSize(QSize(83, 0));
        tz->setDecimals(3);
        tz->setMinimum(-200000);
        tz->setMaximum(200000);

        hboxLayout3->addWidget(tz);


        vboxLayout1->addLayout(hboxLayout3);


        hboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        vboxLayout2 = new QVBoxLayout(groupBox_3);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        hboxLayout4->addWidget(label_11);

        rx = new QDoubleSpinBox(groupBox_3);
        rx->setObjectName(QStringLiteral("rx"));
        rx->setMinimumSize(QSize(83, 0));
        rx->setDecimals(3);
        rx->setMinimum(-200000);
        rx->setMaximum(200000);
        rx->setValue(0);

        hboxLayout4->addWidget(rx);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout5->addWidget(label_9);

        ry = new QDoubleSpinBox(groupBox_3);
        ry->setObjectName(QStringLiteral("ry"));
        ry->setMinimumSize(QSize(83, 0));
        ry->setDecimals(3);
        ry->setMinimum(-200000);
        ry->setMaximum(200000);

        hboxLayout5->addWidget(ry);


        vboxLayout2->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        hboxLayout6->addWidget(label_10);

        rz = new QDoubleSpinBox(groupBox_3);
        rz->setObjectName(QStringLiteral("rz"));
        rz->setMinimumSize(QSize(83, 0));
        rz->setDecimals(3);
        rz->setMinimum(-200000);
        rz->setMaximum(200000);

        hboxLayout6->addWidget(rz);


        vboxLayout2->addLayout(hboxLayout6);


        hboxLayout->addWidget(groupBox_3);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(EditPosition);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(EditPosition);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditPosition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditPosition, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditPosition);
    } // setupUi

    void retranslateUi(QDialog *EditPosition)
    {
        EditPosition->setWindowTitle(QApplication::translate("EditPosition", "Edit Position", 0));
        groupBox->setTitle(QApplication::translate("EditPosition", "Instance Relative Position", 0));
        groupBox_2->setTitle(QApplication::translate("EditPosition", "Translation", 0));
        label_2->setText(QApplication::translate("EditPosition", "X Value :", 0));
        label_3->setText(QApplication::translate("EditPosition", "Y Value :", 0));
        label_4->setText(QApplication::translate("EditPosition", "Z Value :", 0));
        groupBox_3->setTitle(QApplication::translate("EditPosition", "Rotation Angle", 0));
        label_11->setText(QApplication::translate("EditPosition", "X Axis :", 0));
        label_9->setText(QApplication::translate("EditPosition", "Y Axis :", 0));
        label_10->setText(QApplication::translate("EditPosition", "Z Axis :", 0));
    } // retranslateUi

};

namespace Ui {
    class EditPosition: public Ui_EditPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOSITION_H
