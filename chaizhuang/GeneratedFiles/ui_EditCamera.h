/********************************************************************************
** Form generated from reading UI file 'EditCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCAMERA_H
#define UI_EDITCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditCamera
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QDoubleSpinBox *xEye;
    QDoubleSpinBox *yEye;
    QDoubleSpinBox *zEye;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout2;
    QDoubleSpinBox *xTarget;
    QDoubleSpinBox *yTarget;
    QDoubleSpinBox *zTarget;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QDoubleSpinBox *distance;
    QHBoxLayout *hboxLayout1;
    QLabel *label_4;
    QDoubleSpinBox *angle;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *EditCamera)
    {
        if (EditCamera->objectName().isEmpty())
            EditCamera->setObjectName(QStringLiteral("EditCamera"));
        EditCamera->resize(185, 436);
        EditCamera->setFocusPolicy(Qt::ClickFocus);
        vboxLayout = new QVBoxLayout(EditCamera);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox_2 = new QGroupBox(EditCamera);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        xEye = new QDoubleSpinBox(groupBox_2);
        xEye->setObjectName(QStringLiteral("xEye"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xEye->sizePolicy().hasHeightForWidth());
        xEye->setSizePolicy(sizePolicy);
        xEye->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        xEye->setDecimals(1);
        xEye->setMinimum(-1e+08);
        xEye->setMaximum(1e+08);

        vboxLayout1->addWidget(xEye);

        yEye = new QDoubleSpinBox(groupBox_2);
        yEye->setObjectName(QStringLiteral("yEye"));
        yEye->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        yEye->setDecimals(1);
        yEye->setMinimum(-1e+08);
        yEye->setMaximum(1e+08);

        vboxLayout1->addWidget(yEye);

        zEye = new QDoubleSpinBox(groupBox_2);
        zEye->setObjectName(QStringLiteral("zEye"));
        zEye->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        zEye->setDecimals(1);
        zEye->setMinimum(-1e+08);
        zEye->setMaximum(1e+08);

        vboxLayout1->addWidget(zEye);


        vboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(EditCamera);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(true);
        vboxLayout2 = new QVBoxLayout(groupBox_3);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        xTarget = new QDoubleSpinBox(groupBox_3);
        xTarget->setObjectName(QStringLiteral("xTarget"));
        xTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        xTarget->setDecimals(1);
        xTarget->setMinimum(-1e+08);
        xTarget->setMaximum(1e+08);

        vboxLayout2->addWidget(xTarget);

        yTarget = new QDoubleSpinBox(groupBox_3);
        yTarget->setObjectName(QStringLiteral("yTarget"));
        yTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        yTarget->setDecimals(1);
        yTarget->setMinimum(-1e+08);
        yTarget->setMaximum(1e+08);

        vboxLayout2->addWidget(yTarget);

        zTarget = new QDoubleSpinBox(groupBox_3);
        zTarget->setObjectName(QStringLiteral("zTarget"));
        zTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        zTarget->setDecimals(1);
        zTarget->setMinimum(-1e+08);
        zTarget->setMaximum(1e+08);

        vboxLayout2->addWidget(zTarget);


        vboxLayout->addWidget(groupBox_3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_3 = new QLabel(EditCamera);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout->addWidget(label_3);

        distance = new QDoubleSpinBox(EditCamera);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        distance->setDecimals(1);
        distance->setMinimum(0);
        distance->setMaximum(1e+08);

        hboxLayout->addWidget(distance);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_4 = new QLabel(EditCamera);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout1->addWidget(label_4);

        angle = new QDoubleSpinBox(EditCamera);
        angle->setObjectName(QStringLiteral("angle"));
        angle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        angle->setDecimals(0);
        angle->setMinimum(1);
        angle->setMaximum(170);

        hboxLayout1->addWidget(angle);


        vboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(EditCamera);

        QMetaObject::connectSlotsByName(EditCamera);
    } // setupUi

    void retranslateUi(QWidget *EditCamera)
    {
        EditCamera->setWindowTitle(QApplication::translate("EditCamera", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("EditCamera", "Eye", 0));
        groupBox_3->setTitle(QApplication::translate("EditCamera", "Target", 0));
        label_3->setText(QApplication::translate("EditCamera", "Dist", 0));
        label_4->setText(QApplication::translate("EditCamera", "Angle", 0));
    } // retranslateUi

};

namespace Ui {
    class EditCamera: public Ui_EditCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCAMERA_H
