/********************************************************************************
** Form generated from reading UI file 'MultiScreenshotsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISCREENSHOTSDIALOG_H
#define UI_MULTISCREENSHOTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MultiScreenshotsDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *previewOpenglGroup;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSpinBox *nbrOfShots;
    QSpinBox *motionLength;
    QLabel *label_7;
    QRadioButton *gravityX;
    QRadioButton *gravityY;
    QRadioButton *gravityZ;
    QLabel *label_9;
    QRadioButton *gravityCam;
    QLineEdit *baseShotName;
    QPushButton *reverseCmd;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxPredifinedSize;
    QLabel *label_2;
    QSpinBox *spinBoxWidth;
    QLabel *label_5;
    QLabel *label_3;
    QSpinBox *spinBoxHeight;
    QLabel *label_6;
    QLabel *imageInfos;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QRadioButton *defaultBackgroundRadio;
    QRadioButton *colorBackgroundRadio;
    QPushButton *editColorButton;
    QRadioButton *imageBackgroundRadio;
    QPushButton *browseImageButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MultiScreenshotsDialog)
    {
        if (MultiScreenshotsDialog->objectName().isEmpty())
            MultiScreenshotsDialog->setObjectName(QStringLiteral("MultiScreenshotsDialog"));
        MultiScreenshotsDialog->resize(673, 652);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/TurnTable.png"), QSize(), QIcon::Normal, QIcon::Off);
        MultiScreenshotsDialog->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(MultiScreenshotsDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        previewOpenglGroup = new QGroupBox(MultiScreenshotsDialog);
        previewOpenglGroup->setObjectName(QStringLiteral("previewOpenglGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(previewOpenglGroup->sizePolicy().hasHeightForWidth());
        previewOpenglGroup->setSizePolicy(sizePolicy);
        previewOpenglGroup->setMinimumSize(QSize(0, 320));

        gridLayout_4->addWidget(previewOpenglGroup, 0, 0, 1, 3);

        groupBox_4 = new QGroupBox(MultiScreenshotsDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        nbrOfShots = new QSpinBox(groupBox_4);
        nbrOfShots->setObjectName(QStringLiteral("nbrOfShots"));
        nbrOfShots->setMaximum(3600);
        nbrOfShots->setValue(90);

        gridLayout_3->addWidget(nbrOfShots, 0, 1, 1, 1);

        motionLength = new QSpinBox(groupBox_4);
        motionLength->setObjectName(QStringLiteral("motionLength"));
        motionLength->setMinimum(1);
        motionLength->setMaximum(10);
        motionLength->setValue(3);

        gridLayout_3->addWidget(motionLength, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        gravityX = new QRadioButton(groupBox_4);
        gravityX->setObjectName(QStringLiteral("gravityX"));

        gridLayout_3->addWidget(gravityX, 1, 4, 1, 1);

        gravityY = new QRadioButton(groupBox_4);
        gravityY->setObjectName(QStringLiteral("gravityY"));

        gridLayout_3->addWidget(gravityY, 1, 5, 1, 1);

        gravityZ = new QRadioButton(groupBox_4);
        gravityZ->setObjectName(QStringLiteral("gravityZ"));

        gridLayout_3->addWidget(gravityZ, 1, 6, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 1, 3, 1, 1);

        gravityCam = new QRadioButton(groupBox_4);
        gravityCam->setObjectName(QStringLiteral("gravityCam"));

        gridLayout_3->addWidget(gravityCam, 1, 7, 1, 1);

        baseShotName = new QLineEdit(groupBox_4);
        baseShotName->setObjectName(QStringLiteral("baseShotName"));

        gridLayout_3->addWidget(baseShotName, 0, 3, 1, 5);

        reverseCmd = new QPushButton(groupBox_4);
        reverseCmd->setObjectName(QStringLiteral("reverseCmd"));

        gridLayout_3->addWidget(reverseCmd, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 3);

        groupBox_2 = new QGroupBox(MultiScreenshotsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        comboBoxPredifinedSize = new QComboBox(groupBox_2);
        comboBoxPredifinedSize->setObjectName(QStringLiteral("comboBoxPredifinedSize"));

        gridLayout->addWidget(comboBoxPredifinedSize, 0, 2, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxWidth = new QSpinBox(groupBox_2);
        spinBoxWidth->setObjectName(QStringLiteral("spinBoxWidth"));
        spinBoxWidth->setMinimum(16);
        spinBoxWidth->setMaximum(6000);

        gridLayout->addWidget(spinBoxWidth, 1, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxHeight = new QSpinBox(groupBox_2);
        spinBoxHeight->setObjectName(QStringLiteral("spinBoxHeight"));
        spinBoxHeight->setMinimum(16);
        spinBoxHeight->setMaximum(6000);

        gridLayout->addWidget(spinBoxHeight, 2, 1, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        imageInfos = new QLabel(groupBox_2);
        imageInfos->setObjectName(QStringLiteral("imageInfos"));
        imageInfos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageInfos, 3, 0, 1, 4);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(MultiScreenshotsDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        defaultBackgroundRadio = new QRadioButton(groupBox_3);
        defaultBackgroundRadio->setObjectName(QStringLiteral("defaultBackgroundRadio"));
        defaultBackgroundRadio->setChecked(true);

        gridLayout_2->addWidget(defaultBackgroundRadio, 0, 0, 1, 1);

        colorBackgroundRadio = new QRadioButton(groupBox_3);
        colorBackgroundRadio->setObjectName(QStringLiteral("colorBackgroundRadio"));

        gridLayout_2->addWidget(colorBackgroundRadio, 1, 0, 1, 1);

        editColorButton = new QPushButton(groupBox_3);
        editColorButton->setObjectName(QStringLiteral("editColorButton"));
        editColorButton->setEnabled(false);

        gridLayout_2->addWidget(editColorButton, 1, 1, 1, 1);

        imageBackgroundRadio = new QRadioButton(groupBox_3);
        imageBackgroundRadio->setObjectName(QStringLiteral("imageBackgroundRadio"));

        gridLayout_2->addWidget(imageBackgroundRadio, 2, 0, 1, 1);

        browseImageButton = new QPushButton(groupBox_3);
        browseImageButton->setObjectName(QStringLiteral("browseImageButton"));
        browseImageButton->setEnabled(false);

        gridLayout_2->addWidget(browseImageButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 1, 1, 2);

        buttonBox = new QDialogButtonBox(MultiScreenshotsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::SaveAll);

        gridLayout_4->addWidget(buttonBox, 3, 0, 1, 3);


        retranslateUi(MultiScreenshotsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MultiScreenshotsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MultiScreenshotsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MultiScreenshotsDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiScreenshotsDialog)
    {
        MultiScreenshotsDialog->setWindowTitle(QApplication::translate("MultiScreenshotsDialog", "Multi Screenshot Setting", 0));
        previewOpenglGroup->setTitle(QApplication::translate("MultiScreenshotsDialog", "Preview", 0));
        groupBox_4->setTitle(QApplication::translate("MultiScreenshotsDialog", "Turn Table Shots Setting", 0));
        label_4->setText(QApplication::translate("MultiScreenshotsDialog", "Number of shots :", 0));
        label_7->setText(QApplication::translate("MultiScreenshotsDialog", "Lenght (second) :", 0));
        gravityX->setText(QApplication::translate("MultiScreenshotsDialog", "X", 0));
        gravityY->setText(QApplication::translate("MultiScreenshotsDialog", "Y", 0));
        gravityZ->setText(QApplication::translate("MultiScreenshotsDialog", "Z", 0));
        label_9->setText(QApplication::translate("MultiScreenshotsDialog", "Gravity :", 0));
        gravityCam->setText(QApplication::translate("MultiScreenshotsDialog", "Camera Up", 0));
        reverseCmd->setText(QApplication::translate("MultiScreenshotsDialog", "Reverse", 0));
        label_8->setText(QApplication::translate("MultiScreenshotsDialog", "Base Shot Name :", 0));
        groupBox_2->setTitle(QApplication::translate("MultiScreenshotsDialog", "Image Size", 0));
        label->setText(QApplication::translate("MultiScreenshotsDialog", "Predifined size :", 0));
#ifndef QT_NO_TOOLTIP
        comboBoxPredifinedSize->setToolTip(QApplication::translate("MultiScreenshotsDialog", "List of predefined screenshots sizes", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MultiScreenshotsDialog", "Width :", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxWidth->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Selected screenshot Width", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MultiScreenshotsDialog", "Pixels", 0));
        label_3->setText(QApplication::translate("MultiScreenshotsDialog", "Height :", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxHeight->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Selected screenshot Height", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MultiScreenshotsDialog", "Pixels", 0));
        imageInfos->setText(QApplication::translate("MultiScreenshotsDialog", "Info", 0));
        groupBox_3->setTitle(QApplication::translate("MultiScreenshotsDialog", "Background", 0));
#ifndef QT_NO_TOOLTIP
        defaultBackgroundRadio->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Use Default Background", 0));
#endif // QT_NO_TOOLTIP
        defaultBackgroundRadio->setText(QApplication::translate("MultiScreenshotsDialog", "Default", 0));
#ifndef QT_NO_TOOLTIP
        colorBackgroundRadio->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Use Colored Background", 0));
#endif // QT_NO_TOOLTIP
        colorBackgroundRadio->setText(QApplication::translate("MultiScreenshotsDialog", "Color", 0));
#ifndef QT_NO_TOOLTIP
        editColorButton->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Edit Background Color", 0));
#endif // QT_NO_TOOLTIP
        editColorButton->setText(QApplication::translate("MultiScreenshotsDialog", "Edit...", 0));
#ifndef QT_NO_TOOLTIP
        imageBackgroundRadio->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Use Background Image", 0));
#endif // QT_NO_TOOLTIP
        imageBackgroundRadio->setText(QApplication::translate("MultiScreenshotsDialog", "Image", 0));
#ifndef QT_NO_TOOLTIP
        browseImageButton->setToolTip(QApplication::translate("MultiScreenshotsDialog", "Browse and select Image to use as Background", 0));
#endif // QT_NO_TOOLTIP
        browseImageButton->setText(QApplication::translate("MultiScreenshotsDialog", "Browse...", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiScreenshotsDialog: public Ui_MultiScreenshotsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISCREENSHOTSDIALOG_H
