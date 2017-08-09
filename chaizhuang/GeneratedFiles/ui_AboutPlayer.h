/********************************************************************************
** Form generated from reading UI file 'AboutPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPLAYER_H
#define UI_ABOUTPLAYER_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QLabel *label_GLC_Lib;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutPlayer)
    {
        if (AboutPlayer->objectName().isEmpty())
            AboutPlayer->setObjectName(QStringLiteral("AboutPlayer"));
        AboutPlayer->resize(565, 556);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutPlayer->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AboutPlayer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AboutPlayer);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Logo80x80.png")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(AboutPlayer);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(AboutPlayer);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(13);
        label_3->setFont(font1);
        label_3->setAutoFillBackground(true);
        label_3->setTextFormat(Qt::RichText);
        label_3->setOpenExternalLinks(true);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(AboutPlayer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(true);
        QFont font2;
        font2.setKerning(true);
        textBrowser->setFont(font2);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        textBrowser->setAcceptDrops(false);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Sunken);
        textBrowser->setOpenExternalLinks(true);

        vboxLayout->addWidget(textBrowser);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AboutPlayer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/GLC_logo_blanc.png")));

        hboxLayout->addWidget(label_4);

        label_GLC_Lib = new QLabel(groupBox_2);
        label_GLC_Lib->setObjectName(QStringLiteral("label_GLC_Lib"));
        label_GLC_Lib->setFont(font);

        hboxLayout->addWidget(label_GLC_Lib);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(AboutPlayer);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutPlayer);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutPlayer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutPlayer, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutPlayer);
    } // setupUi

    void retranslateUi(QDialog *AboutPlayer)
    {
        AboutPlayer->setWindowTitle(QApplication::translate("AboutPlayer", "About GLC_Player", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("AboutPlayer", "GLC_Player 2.3.0", 0));
        label_3->setText(QApplication::translate("AboutPlayer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><span style=\" font-family:'MS Shell Dlg'; font-size:10pt;\">Author :	Laurent Ribon</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg'; font-size:10pt; font-weight:600;\"><span style=\" font-weight:400;\">Home Page :	</span><a href=\"http://www.glc-player.net\"><span style=\" font-weight:400; text-decoration: underline; color:#0000ff;\">http://www.glc-player.net</span></a></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("AboutPlayer", "GNU General Public Licence", 0));
        textBrowser->setHtml(QApplication::translate("AboutPlayer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">GLC-Player is free software; you can redistribute it and/or modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">it under the terms of the GNU General Public License as published by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'M"
                        "S Shell Dlg 2'; font-size:10pt;\">the Free Software Foundation; either version 2 of the License, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">(at your option) any later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">GLC-Player is distributed in the hope that it will be useful,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">but WITHOUT ANY WARRANTY; wit"
                        "hout even the implied warranty of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">GNU General Public License for more details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">You should have received a copy of the GNU General Public License</span></p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">along with GLC-Player; if not, write to the Free Software</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"></p></body></html>", 0));
        groupBox_2->setTitle(QString());
        label_4->setText(QString());
        label_GLC_Lib->setText(QApplication::translate("AboutPlayer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.glc-lib.net\"><span style=\" text-decoration: underline; color:#0000ff;\">GLC_Lib</span></a></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutPlayer: public Ui_AboutPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPLAYER_H
