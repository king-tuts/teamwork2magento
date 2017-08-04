/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QPushButton *close_pushButton;
    QTextBrowser *textBrowser;
    QLabel *image_label;
    QLabel *label;
    QPushButton *license_pushButton;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QStringLiteral("aboutDialog"));
        aboutDialog->resize(427, 369);
        close_pushButton = new QPushButton(aboutDialog);
        close_pushButton->setObjectName(QStringLiteral("close_pushButton"));
        close_pushButton->setGeometry(QRect(350, 110, 75, 23));
        textBrowser = new QTextBrowser(aboutDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(9, 139, 411, 192));
        image_label = new QLabel(aboutDialog);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(9, 9, 47, 16));
        label = new QLabel(aboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 356, 81));
        license_pushButton = new QPushButton(aboutDialog);
        license_pushButton->setObjectName(QStringLiteral("license_pushButton"));
        license_pushButton->setGeometry(QRect(250, 110, 91, 23));

        retranslateUi(aboutDialog);
        QObject::connect(close_pushButton, SIGNAL(clicked()), aboutDialog, SLOT(close()));
        QObject::connect(close_pushButton, SIGNAL(clicked()), aboutDialog, SLOT(deleteLater()));

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "Dialog", 0));
        close_pushButton->setText(QApplication::translate("aboutDialog", "Close", 0));
        textBrowser->setHtml(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:13.5pt; font-weight:600;\">GNU LESSER GENERAL PUBLIC LICENSE</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">Version 3, 29 June 2007</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">Copyright \302\251 2007 Free Software Foundation, Inc. </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">&lt;</span><a href=\"http://fsf.org/\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; text-decoration: underline; color:#0000ff;\">http://fsf.org/</span></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">&gt;</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">This version of the GNU Lesser General Public License incorporates the terms and conditions of version 3 of the GNU General Public License, supplemented by the additional permissions listed below.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section0\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">0</span><span style=\" font-fami"
                        "ly:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Additional Definitions.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">As used herein, \342\200\234this License\342\200\235 refers to version 3 of the GNU Lesser General Public License, and the \342\200\234GNU GPL\342\200\235 refers to version 3 of the GNU General Public License.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">\342\200\234The Library\342\200\235 refers to a covered work governed by this License, other than an Application or a Combined Work as defined below.</span><span style=\" font-size:8pt;\"> </span>"
                        "</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">An \342\200\234Application\342\200\235 is any work that makes use of an interface provided by the Library, but which is not otherwise based on the Library. Defining a subclass of a class defined by the Library is deemed a mode of using an interface provided by the Library.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">A \342\200\234Combined Work\342\200\235 is a work produced by combining or linking an Application with the Library. The particular version of the Library with which the Combined Work was made is also called the \342\200\234Linked Version\342\200\235.</span><span styl"
                        "e=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">The \342\200\234Minimal Corresponding Source\342\200\235 for a Combined Work means the Corresponding Source for the Combined Work, excluding any source code for portions of the Combined Work that, considered in isolation, are based on the Application, and not on the Linked Version.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">The \342\200\234Corresponding Application Code\342\200\235 for a Combined Work means the object code and/or source code for the Application, including any data and utility programs needed for reproducing the Combined Work from t"
                        "he Application, but excluding the System Libraries of the Combined Work.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section1\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">1</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Exception to Section 3 of the GNU GPL.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">You may convey a covered work under sections 3 and 4 of this License without being bound by section 3 of the GNU GPL.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section2\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">2</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Conveying Modified Versions.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">If you modify a copy of the Library, and, in your modifications, a facility refers to a function or data to be supplied by an Application that uses the facility (other than as an argument passed when the facility is invoked), then you may convey a copy of the modified version:</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\""
                        " font-size:8pt;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">a) under this License, provided that you make a good faith effort to ensure that, in the event an Application does not supply the function or data, the facility still operates, and performs whatever part of its purpose remains meaningful, or</span> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">b) under the GNU GPL, with none of the additional permissions of this License applicable to that copy.</span> </li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section3\"></a><span style=\" f"
                        "ont-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">3</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Object Code Incorporating Material from Library Header Files.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">The object code form of an Application may incorporate material from a header file that is part of the Library. You may convey such object code under terms of your choice, provided that, if the incorporated material is not limited to numerical parameters, data structure layouts and accessors, or small macros, inline functions and templates (ten or fewer lines in length), you do both of the following:</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; marg"
                        "in-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">a) Give prominent notice with each copy of the object code that the Library is used in it and that the Library and its use are covered by this License.</span> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">b) Accompany the object code with a copy of the GNU GPL and this license document.</span> </li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section4\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weig"
                        "ht:600;\">4</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Combined Works.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">You may convey a Combined Work under terms of your choice that, taken together, effectively do not restrict modification of the portions of the Library contained in the Combined Work and reverse engineering for debugging such modifications, if you also do each of the following:</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'T"
                        "imes New Roman,serif'; font-size:12pt;\">a) Give prominent notice with each copy of the Combined Work that the Library is used in it and that the Library and its use are covered by this License.</span> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">b) Accompany the Combined Work with a copy of the GNU GPL and this license document.</span> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">c) For a Combined Work that displays copyright notices during execution, include the copyright notice for the Library among these notices, as well as a reference directing the user to the copies of the GNU GPL and this license document.</spa"
                        "n> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">d) Do one of the following: </span></li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 2;\"><li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">0) Convey the Minimal Corresponding Source under the terms of this License, and the Corresponding Application Code in a form suitable for, and under terms that permit, the user to recombine or relink the Application with a modified version of the Linked Version to produce a modified Combined Work, in the manner specified by section 6 of the GNU GPL for conveying Correspo"
                        "nding Source.</span> </li>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">1) Use a suitable shared library mechanism for linking with the Library. A suitable mechanism is one that (a) uses at run time a copy of the Library already present on the user's computer system, and (b) will operate properly with a modified version of the Library that is interface-compatible with the Linked Version.</span> </li></ul>\n"
"<li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">e) Provide Installation Information, but only if you would otherwise be required to provide such information under section 6 of the GNU GPL, and only to the extent that such informat"
                        "ion is necessary to install and execute a modified version of the Combined Work produced by recombining or relinking the Application with a modified version of the Linked Version. (If you use option 4d0, the Installation Information must accompany the Minimal Corresponding Source and Corresponding Application Code. If you use option 4d1, you must provide the Installation Information in the manner specified by section 6 of the GNU GPL for conveying Corresponding Source.)</span> </li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section5\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">5</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Combined Libraries.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">You may place library facilities that are a work based on the Library side by side in a single library together with other library facilities that are not Applications and are not covered by this License, and convey such a combined library under terms of your choice, if you do both of the following:</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:8pt;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">a) Accompany the combined library with a copy of the same work based on the Library, uncombined with any other library facilities, conveyed under the terms of this License.</span> </li>\n"
"<li style=\" font-size:8pt;\""
                        " align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">b) Give prominent notice with the combined library that part of it is a work based on the Library, and explaining where to find the accompanying uncombined form of the same work.</span> </li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"section6\"></a><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">6</span><span style=\" font-family:'Times New Roman,serif'; font-size:12pt; font-weight:600;\">. Revised Versions of the GNU Lesser General Public License.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Times New Roman,serif'; font-size:12pt;\">The Free Software Foundation may publish revised and/or new versions of the GNU Lesser General Public License from time to time. Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">Each version is given a distinguishing version number. If the Library as you received it specifies that a certain numbered version of the GNU Lesser General Public License \342\200\234or any later version\342\200\235 applies to it, you have the option of following the terms and conditions either of that published version or of any later version published by the Free Software Foundation. If the Library as you received it does not specify a ve"
                        "rsion number of the GNU Lesser General Public License, you may choose any version of the GNU Lesser General Public License ever published by the Free Software Foundation.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:12pt;\">If the Library as you received it specifies that a proxy can decide whether future versions of the GNU Lesser General Public License shall apply, that proxy's public statement of acceptance of any version is permanent authorization for you to choose that version for the Library.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\302\240 </span></p></body></html>", 0));
        image_label->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label->setText(QApplication::translate("aboutDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt; font-weight:600;\">teamwork2magento (2.0)</span></p><p align=\"right\">Created and developed by Robert E. Tuttle III</p><p align=\"center\">Please report bugs or program failure errors to &lt;kingtuts915@gmail.com&gt;<br/></p><p><br/></p></body></html>", 0));
        license_pushButton->setText(QApplication::translate("aboutDialog", "License Info >>", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
