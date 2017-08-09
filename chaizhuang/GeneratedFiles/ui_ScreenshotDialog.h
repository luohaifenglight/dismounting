/********************************************************************************
** Form generated from reading UI file 'ScreenshotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTDIALOG_H
#define UI_SCREENSHOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreenshotDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *ImagePreview;
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
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultBackgroundRadio;
    QRadioButton *transparentBackgroundRadio;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *colorBackgroundRadio;
    QPushButton *editColorButton;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *imageBackgroundRadio;
    QPushButton *browseImageButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *formatComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScreenshotDialog)
    {
        if (ScreenshotDialog->objectName().isEmpty())
            ScreenshotDialog->setObjectName(QStringLiteral("ScreenshotDialog"));
        ScreenshotDialog->resize(661, 554);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/SnapShoot.png"), QSize(), QIcon::Normal, QIcon::Off);
        ScreenshotDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ScreenshotDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(ScreenshotDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ImagePreview = new QLabel(groupBox);
        ImagePreview->setObjectName(QStringLiteral("ImagePreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ImagePreview->sizePolicy().hasHeightForWidth());
        ImagePreview->setSizePolicy(sizePolicy1);
        ImagePreview->setMinimumSize(QSize(425, 200));
        ImagePreview->setMaximumSize(QSize(425, 200));
        ImagePreview->setScaledContents(false);
        ImagePreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ImagePreview);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(ScreenshotDialog);
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


        gridLayout_2->addWidget(groupBox_2, 1, 0, 2, 1);

        groupBox_3 = new QGroupBox(ScreenshotDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        defaultBackgroundRadio = new QRadioButton(groupBox_3);
        defaultBackgroundRadio->setObjectName(QStringLiteral("defaultBackgroundRadio"));
        defaultBackgroundRadio->setChecked(true);

        verticalLayout->addWidget(defaultBackgroundRadio);

        transparentBackgroundRadio = new QRadioButton(groupBox_3);
        transparentBackgroundRadio->setObjectName(QStringLiteral("transparentBackgroundRadio"));
        transparentBackgroundRadio->setEnabled(true);

        verticalLayout->addWidget(transparentBackgroundRadio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        colorBackgroundRadio = new QRadioButton(groupBox_3);
        colorBackgroundRadio->setObjectName(QStringLiteral("colorBackgroundRadio"));

        horizontalLayout_2->addWidget(colorBackgroundRadio);

        editColorButton = new QPushButton(groupBox_3);
        editColorButton->setObjectName(QStringLiteral("editColorButton"));
        editColorButton->setEnabled(false);

        horizontalLayout_2->addWidget(editColorButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        imageBackgroundRadio = new QRadioButton(groupBox_3);
        imageBackgroundRadio->setObjectName(QStringLiteral("imageBackgroundRadio"));

        horizontalLayout_3->addWidget(imageBackgroundRadio);

        browseImageButton = new QPushButton(groupBox_3);
        browseImageButton->setObjectName(QStringLiteral("browseImageButton"));
        browseImageButton->setEnabled(false);

        horizontalLayout_3->addWidget(browseImageButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupBox_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(ScreenshotDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        formatComboBox = new QComboBox(ScreenshotDialog);
        formatComboBox->setObjectName(QStringLiteral("formatComboBox"));

        horizontalLayout_4->addWidget(formatComboBox);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ScreenshotDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(ScreenshotDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ScreenshotDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ScreenshotDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ScreenshotDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreenshotDialog)
    {
        ScreenshotDialog->setWindowTitle(QApplication::translate("ScreenshotDialog", "Screenshot Setting", 0));
        groupBox->setTitle(QApplication::translate("ScreenshotDialog", "Preview", 0));
        ImagePreview->setText(QApplication::translate("ScreenshotDialog", "Preview", 0));
        groupBox_2->setTitle(QApplication::translate("ScreenshotDialog", "Image Size", 0));
        label->setText(QApplication::translate("ScreenshotDialog", "Predifined size :", 0));
#ifndef QT_NO_TOOLTIP
        comboBoxPredifinedSize->setToolTip(QApplication::translate("ScreenshotDialog", "List of predefined screenshots sizes", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ScreenshotDialog", "Width :", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxWidth->setToolTip(QApplication::translate("ScreenshotDialog", "Selected screenshot Width", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ScreenshotDialog", "Pixels", 0));
        label_3->setText(QApplication::translate("ScreenshotDialog", "Height :", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxHeight->setToolTip(QApplication::translate("ScreenshotDialog", "Selected screenshot Height", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("ScreenshotDialog", "Pixels", 0));
        imageInfos->setText(QApplication::translate("ScreenshotDialog", "Info", 0));
        groupBox_3->setTitle(QApplication::translate("ScreenshotDialog", "Background", 0));
#ifndef QT_NO_TOOLTIP
        defaultBackgroundRadio->setToolTip(QApplication::translate("ScreenshotDialog", "Use Default Background", 0));
#endif // QT_NO_TOOLTIP
        defaultBackgroundRadio->setText(QApplication::translate("ScreenshotDialog", "Default", 0));
        transparentBackgroundRadio->setText(QApplication::translate("ScreenshotDialog", "Transparent", 0));
#ifndef QT_NO_TOOLTIP
        colorBackgroundRadio->setToolTip(QApplication::translate("ScreenshotDialog", "Use Colored Background", 0));
#endif // QT_NO_TOOLTIP
        colorBackgroundRadio->setText(QApplication::translate("ScreenshotDialog", "Color", 0));
#ifndef QT_NO_TOOLTIP
        editColorButton->setToolTip(QApplication::translate("ScreenshotDialog", "Edit Background Color", 0));
#endif // QT_NO_TOOLTIP
        editColorButton->setText(QApplication::translate("ScreenshotDialog", "Edit Color...", 0));
#ifndef QT_NO_TOOLTIP
        imageBackgroundRadio->setToolTip(QApplication::translate("ScreenshotDialog", "Use Background Image", 0));
#endif // QT_NO_TOOLTIP
        imageBackgroundRadio->setText(QApplication::translate("ScreenshotDialog", "Image", 0));
#ifndef QT_NO_TOOLTIP
        browseImageButton->setToolTip(QApplication::translate("ScreenshotDialog", "Browse and select Image to use as Background", 0));
#endif // QT_NO_TOOLTIP
        browseImageButton->setText(QApplication::translate("ScreenshotDialog", "Browse Image...", 0));
        label_4->setText(QApplication::translate("ScreenshotDialog", "Image Format :", 0));
        formatComboBox->clear();
        formatComboBox->insertItems(0, QStringList()
         << QApplication::translate("ScreenshotDialog", "PNG", 0)
         << QApplication::translate("ScreenshotDialog", "JPEG", 0)
         << QApplication::translate("ScreenshotDialog", "TIFF", 0)
         << QApplication::translate("ScreenshotDialog", "BMP", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ScreenshotDialog: public Ui_ScreenshotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTDIALOG_H
