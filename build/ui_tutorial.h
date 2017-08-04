/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *ok_pushButton;
    QTextEdit *tutorial_textEdit;
    QLabel *image_label;
    QLabel *info_label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        ok_pushButton = new QPushButton(Dialog);
        ok_pushButton->setObjectName(QStringLiteral("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(310, 260, 75, 23));
        tutorial_textEdit = new QTextEdit(Dialog);
        tutorial_textEdit->setObjectName(QStringLiteral("tutorial_textEdit"));
        tutorial_textEdit->setGeometry(QRect(10, 60, 381, 191));
        image_label = new QLabel(Dialog);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(20, 10, 111, 51));
        info_label = new QLabel(Dialog);
        info_label->setObjectName(QStringLiteral("info_label"));
        info_label->setGeometry(QRect(120, 10, 261, 51));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        ok_pushButton->setText(QApplication::translate("Dialog", "Ok", 0));
        tutorial_textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This is a simple tutorial that outlines the steps required in order to properly execute this program; please refer to the detailed tutorial in the teamwork2magento directory under the folder name &quot;tutorial\342\200\235 for a more thorough explanation of these steps.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">********************************************</spa"
                        "n></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">********************************************</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Step 1:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">On the left hand side of the program, near the label &quot;Select a Teamwork export file (must be in .csv format),&quot; press &quot;Browse...&quot; in order to search your computer's file directory for the Teamwork export file you wish to format into a Magento import file. This feature will only allow you to select files with the (*.csv) extension. If you accidentally selected the wrong file"
                        ", or if you wish to choose a different Teamwork export file, simply press &quot;Browse...&quot; again and choose the desired CSV file. </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Step 2:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Once the Teamwork export file is successfully selected, a preview of the file you selected will appear in the window below. When you are ready to proceed and edit the export file, press &quot;Upload Data&quot; below the file preview window. Once this upload is complete, a window will appear "
                        "and notify you if the upload was successful or not.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Note:</span><span style=\" font-size:10pt;\"> This program will fail to execute properly if you attempt to upload a file that is not a Teamwork product export file. As of version 1.0.0, there is no error checking to ensure that the user has selected a Teamwork export file. This functionality will be added in subsequent versions.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Step 3:<"
                        "/span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Once the upload was successful, the drop down menu and the fields below will become populated with values. By default, the &quot;name&quot;, &quot;description&quot;, and &quot;short description&quot; fields will all contain the same information.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The drop down menu, labeled &quot;current item&quot;, will list each item by their corresponding gg-sku value. Once you select the gg-sku of the item you wish to edit, you can enter information into the fields below and save your changes with the &quot;Update Info&quot; button. Make sure to hit the &quot;Update Info&quot; button before selecting another item by gg-sku to edit, otherwise your changes "
                        "will be lost. Once you are finished editing each item, you can proceed to the next step.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Step 4:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">After editing, pressing the &quot;Generate Preview&quot; button will display a preview of the edited data in the model field above. Subsequently, after ensuring that your export file is correctly edited through the preview, you can select a file to write the correctly formatted data to via the &quot;Browse...&quot; button, near the &quot"
                        ";Save file as (at the specified location)&quot; label, on the top right of the program. The field to the left of this button will display the full path of the selected file.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Step 5:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Once a valid file is specified, the &quot;Generate CSV&quot; button will become enabled, and upon pressing it, the program will write the correctly formatted data to the save file that was specified above. If an invalid path is specified, or if the file "
                        "you are attempting to save the information to is currently opened by another program, an error message will appear prompting you to select another path or to close any other program that opened the same file you are attempting to write to.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">********************************************</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">********************************************</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Upon completion of these steps, you should have a perfectly formatted *.csv file that is ready to be imported into a Magento databa"
                        "se! Please refer to the detailed tutorial file in the &quot;tutorial&quot; folder in the teamwork2magento directory if you experience any difficulty executing these steps. This file contains images that help guide you through the step by step process.</span></p></body></html>", 0));
        image_label->setText(QApplication::translate("Dialog", "TextLabel", 0));
        info_label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">teamwork2magento (1.0.0)</span></p><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">Tutorial Page</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
