/********************************************************************************
** Form generated from reading UI file 'ModelProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELPROPERTIES_H
#define UI_MODELPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModelProperties
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *location;
    QLabel *label;
    QLineEdit *sizeText;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QTreeWidget *attachedFiles;
    QLabel *label_2;
    QLineEdit *attachedSize;
    QLabel *label_5;
    QLineEdit *attachedNumber;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *numberOfMeshs;
    QLabel *label_8;
    QLineEdit *numberOfVertexs;
    QLabel *label_9;
    QLineEdit *numberOfFaces;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxMaterials;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *numberOfMaterials;
    QPushButton *listOfMaterialsButton;
    QGroupBox *materialListGroup;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModelProperties)
    {
        if (ModelProperties->objectName().isEmpty())
            ModelProperties->setObjectName(QStringLiteral("ModelProperties"));
        ModelProperties->resize(807, 584);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModelProperties->sizePolicy().hasHeightForWidth());
        ModelProperties->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ModelProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModelProperties->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ModelProperties);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(ModelProperties);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(false);
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        name = new QLineEdit(groupBox_3);
        name->setObjectName(QStringLiteral("name"));
        name->setReadOnly(true);

        gridLayout->addWidget(name, 0, 1, 1, 5);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        location = new QLineEdit(groupBox_3);
        location->setObjectName(QStringLiteral("location"));
        location->setReadOnly(true);

        gridLayout->addWidget(location, 1, 1, 1, 5);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        sizeText = new QLineEdit(groupBox_3);
        sizeText->setObjectName(QStringLiteral("sizeText"));
        sizeText->setReadOnly(true);

        gridLayout->addWidget(sizeText, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(144, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 4);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        attachedFiles = new QTreeWidget(groupBox_2);
        attachedFiles->setObjectName(QStringLiteral("attachedFiles"));

        gridLayout_5->addWidget(attachedFiles, 0, 0, 1, 5);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        attachedSize = new QLineEdit(groupBox_2);
        attachedSize->setObjectName(QStringLiteral("attachedSize"));
        attachedSize->setReadOnly(true);

        gridLayout_5->addWidget(attachedSize, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 1, 2, 1, 1);

        attachedNumber = new QLineEdit(groupBox_2);
        attachedNumber->setObjectName(QStringLiteral("attachedNumber"));
        attachedNumber->setReadOnly(true);

        gridLayout_5->addWidget(attachedNumber, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 4, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 6);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(ModelProperties);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        groupBox_5->setFlat(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        numberOfMeshs = new QLineEdit(groupBox_5);
        numberOfMeshs->setObjectName(QStringLiteral("numberOfMeshs"));
        numberOfMeshs->setEnabled(true);
        numberOfMeshs->setMaximumSize(QSize(80, 16777215));
        numberOfMeshs->setFocusPolicy(Qt::NoFocus);
        numberOfMeshs->setAcceptDrops(false);
        numberOfMeshs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfMeshs->setReadOnly(true);

        gridLayout_4->addWidget(numberOfMeshs, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        numberOfVertexs = new QLineEdit(groupBox_5);
        numberOfVertexs->setObjectName(QStringLiteral("numberOfVertexs"));
        numberOfVertexs->setEnabled(true);
        numberOfVertexs->setMaximumSize(QSize(80, 16777215));
        numberOfVertexs->setAcceptDrops(false);
        numberOfVertexs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfVertexs->setReadOnly(true);

        gridLayout_4->addWidget(numberOfVertexs, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        numberOfFaces = new QLineEdit(groupBox_5);
        numberOfFaces->setObjectName(QStringLiteral("numberOfFaces"));
        numberOfFaces->setEnabled(true);
        numberOfFaces->setMaximumSize(QSize(80, 16777215));
        numberOfFaces->setAcceptDrops(false);
        numberOfFaces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfFaces->setReadOnly(true);

        gridLayout_4->addWidget(numberOfFaces, 2, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        horizontalSpacer_2 = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_5);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBoxMaterials = new QGroupBox(ModelProperties);
        groupBoxMaterials->setObjectName(QStringLiteral("groupBoxMaterials"));
        groupBoxMaterials->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBoxMaterials);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(groupBoxMaterials);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        numberOfMaterials = new QLineEdit(groupBoxMaterials);
        numberOfMaterials->setObjectName(QStringLiteral("numberOfMaterials"));
        numberOfMaterials->setEnabled(true);
        numberOfMaterials->setMaximumSize(QSize(80, 16777215));
        numberOfMaterials->setFocusPolicy(Qt::NoFocus);
        numberOfMaterials->setAcceptDrops(false);
        numberOfMaterials->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfMaterials->setReadOnly(true);

        gridLayout_2->addWidget(numberOfMaterials, 0, 1, 1, 1);

        listOfMaterialsButton = new QPushButton(groupBoxMaterials);
        listOfMaterialsButton->setObjectName(QStringLiteral("listOfMaterialsButton"));
        listOfMaterialsButton->setCheckable(true);

        gridLayout_2->addWidget(listOfMaterialsButton, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBoxMaterials);

        materialListGroup = new QGroupBox(ModelProperties);
        materialListGroup->setObjectName(QStringLiteral("materialListGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(materialListGroup->sizePolicy().hasHeightForWidth());
        materialListGroup->setSizePolicy(sizePolicy1);
        materialListGroup->setMinimumSize(QSize(300, 0));
        materialListGroup->setFlat(true);
        materialListGroup->setCheckable(false);

        verticalLayout_2->addWidget(materialListGroup);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ModelProperties);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(ModelProperties);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModelProperties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModelProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModelProperties);
    } // setupUi

    void retranslateUi(QDialog *ModelProperties)
    {
        ModelProperties->setWindowTitle(QApplication::translate("ModelProperties", "Model Properties", 0));
        groupBox_3->setTitle(QApplication::translate("ModelProperties", "File Properties", 0));
        label_4->setText(QApplication::translate("ModelProperties", "Name :", 0));
        label_3->setText(QApplication::translate("ModelProperties", "Location :", 0));
        label->setText(QApplication::translate("ModelProperties", "Size :", 0));
        groupBox_2->setTitle(QApplication::translate("ModelProperties", "Attached Files", 0));
        QTreeWidgetItem *___qtreewidgetitem = attachedFiles->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ModelProperties", "1", 0));
        label_2->setText(QApplication::translate("ModelProperties", "Size :", 0));
        label_5->setText(QApplication::translate("ModelProperties", "Number :", 0));
        groupBox_5->setTitle(QApplication::translate("ModelProperties", "Model Properties", 0));
        label_7->setText(QApplication::translate("ModelProperties", "Number of Bodies :", 0));
        label_8->setText(QApplication::translate("ModelProperties", "Number of Vertices :", 0));
        label_9->setText(QApplication::translate("ModelProperties", "Number of Faces :", 0));
        groupBoxMaterials->setTitle(QApplication::translate("ModelProperties", "Materials", 0));
        label_10->setText(QApplication::translate("ModelProperties", "Number of Materials :", 0));
        listOfMaterialsButton->setText(QApplication::translate("ModelProperties", "List", 0));
        materialListGroup->setTitle(QApplication::translate("ModelProperties", "Material List", 0));
    } // retranslateUi

};

namespace Ui {
    class ModelProperties: public Ui_ModelProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELPROPERTIES_H
