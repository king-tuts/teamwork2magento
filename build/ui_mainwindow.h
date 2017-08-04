/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QGroupBox *importBox;
    QGridLayout *gridLayout;
    QLabel *importLabel;
    QPushButton *importBrowseButton;
    QPushButton *importUploadData;
    QPushButton *importDisplayPreview;
    QLineEdit *importLineEdit;
    QSpacerItem *importSpacer;
    QGroupBox *exportBox;
    QGridLayout *gridLayout_4;
    QPushButton *exportBrowse;
    QPushButton *exportPreview;
    QLabel *exportLabel;
    QLineEdit *exportLineEdit;
    QPushButton *exportGenerate;
    QSpacerItem *exportSpacer;
    QGroupBox *editBox;
    QGridLayout *gridLayout_6;
    QTextEdit *metaDescriptionTextEdit;
    QLabel *nameLabel;
    QLineEdit *shortDescriptionLineEdit;
    QLabel *metaKeywordLabel;
    QLineEdit *metaKeywordLineEdit;
    QLabel *descriptionLabel;
    QTextEdit *descriptionTextEdit;
    QLabel *metaDescriptionLabel;
    QLineEdit *metaTitleLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *metaTitleLabel;
    QLabel *shortDescriptionLabel;
    QGroupBox *sizeQtyBox;
    QGridLayout *gridLayout_2;
    QLabel *qtyLabel;
    QLabel *sizeLabel;
    QPushButton *updateQtyButton;
    QLineEdit *qtyLineEdit;
    QComboBox *sizeComboBox;
    QGroupBox *productBox;
    QFormLayout *formLayout;
    QLabel *currentItemLabel;
    QComboBox *itemComboBox;
    QPushButton *updateInfoButton;
    QSpacerItem *importEditSpacer;
    QSpacerItem *editExportSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(784, 736);
        MainWindow->setMinimumSize(QSize(0, 0));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        importBox = new QGroupBox(centralWidget);
        importBox->setObjectName(QStringLiteral("importBox"));
        gridLayout = new QGridLayout(importBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        importLabel = new QLabel(importBox);
        importLabel->setObjectName(QStringLiteral("importLabel"));

        gridLayout->addWidget(importLabel, 0, 0, 1, 2);

        importBrowseButton = new QPushButton(importBox);
        importBrowseButton->setObjectName(QStringLiteral("importBrowseButton"));

        gridLayout->addWidget(importBrowseButton, 1, 2, 1, 1);

        importUploadData = new QPushButton(importBox);
        importUploadData->setObjectName(QStringLiteral("importUploadData"));

        gridLayout->addWidget(importUploadData, 2, 0, 1, 1);

        importDisplayPreview = new QPushButton(importBox);
        importDisplayPreview->setObjectName(QStringLiteral("importDisplayPreview"));

        gridLayout->addWidget(importDisplayPreview, 2, 1, 1, 1);

        importLineEdit = new QLineEdit(importBox);
        importLineEdit->setObjectName(QStringLiteral("importLineEdit"));

        gridLayout->addWidget(importLineEdit, 1, 0, 1, 2);

        importSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(importSpacer, 1, 3, 1, 1);


        gridLayout_5->addWidget(importBox, 0, 0, 1, 1);

        exportBox = new QGroupBox(centralWidget);
        exportBox->setObjectName(QStringLiteral("exportBox"));
        gridLayout_4 = new QGridLayout(exportBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        exportBrowse = new QPushButton(exportBox);
        exportBrowse->setObjectName(QStringLiteral("exportBrowse"));

        gridLayout_4->addWidget(exportBrowse, 1, 2, 1, 1);

        exportPreview = new QPushButton(exportBox);
        exportPreview->setObjectName(QStringLiteral("exportPreview"));

        gridLayout_4->addWidget(exportPreview, 2, 1, 1, 1);

        exportLabel = new QLabel(exportBox);
        exportLabel->setObjectName(QStringLiteral("exportLabel"));

        gridLayout_4->addWidget(exportLabel, 0, 0, 1, 2);

        exportLineEdit = new QLineEdit(exportBox);
        exportLineEdit->setObjectName(QStringLiteral("exportLineEdit"));

        gridLayout_4->addWidget(exportLineEdit, 1, 0, 1, 2);

        exportGenerate = new QPushButton(exportBox);
        exportGenerate->setObjectName(QStringLiteral("exportGenerate"));

        gridLayout_4->addWidget(exportGenerate, 2, 0, 1, 1);

        exportSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(exportSpacer, 1, 3, 1, 1);


        gridLayout_5->addWidget(exportBox, 4, 0, 1, 1);

        editBox = new QGroupBox(centralWidget);
        editBox->setObjectName(QStringLiteral("editBox"));
        gridLayout_6 = new QGridLayout(editBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        metaDescriptionTextEdit = new QTextEdit(editBox);
        metaDescriptionTextEdit->setObjectName(QStringLiteral("metaDescriptionTextEdit"));

        gridLayout_6->addWidget(metaDescriptionTextEdit, 3, 3, 1, 1);

        nameLabel = new QLabel(editBox);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout_6->addWidget(nameLabel, 1, 0, 1, 1);

        shortDescriptionLineEdit = new QLineEdit(editBox);
        shortDescriptionLineEdit->setObjectName(QStringLiteral("shortDescriptionLineEdit"));

        gridLayout_6->addWidget(shortDescriptionLineEdit, 2, 1, 1, 1);

        metaKeywordLabel = new QLabel(editBox);
        metaKeywordLabel->setObjectName(QStringLiteral("metaKeywordLabel"));

        gridLayout_6->addWidget(metaKeywordLabel, 2, 2, 1, 1);

        metaKeywordLineEdit = new QLineEdit(editBox);
        metaKeywordLineEdit->setObjectName(QStringLiteral("metaKeywordLineEdit"));

        gridLayout_6->addWidget(metaKeywordLineEdit, 2, 3, 1, 1);

        descriptionLabel = new QLabel(editBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout_6->addWidget(descriptionLabel, 3, 0, 1, 1);

        descriptionTextEdit = new QTextEdit(editBox);
        descriptionTextEdit->setObjectName(QStringLiteral("descriptionTextEdit"));

        gridLayout_6->addWidget(descriptionTextEdit, 3, 1, 1, 1);

        metaDescriptionLabel = new QLabel(editBox);
        metaDescriptionLabel->setObjectName(QStringLiteral("metaDescriptionLabel"));

        gridLayout_6->addWidget(metaDescriptionLabel, 3, 2, 1, 1);

        metaTitleLineEdit = new QLineEdit(editBox);
        metaTitleLineEdit->setObjectName(QStringLiteral("metaTitleLineEdit"));

        gridLayout_6->addWidget(metaTitleLineEdit, 1, 3, 1, 1);

        nameLineEdit = new QLineEdit(editBox);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        gridLayout_6->addWidget(nameLineEdit, 1, 1, 1, 1);

        metaTitleLabel = new QLabel(editBox);
        metaTitleLabel->setObjectName(QStringLiteral("metaTitleLabel"));

        gridLayout_6->addWidget(metaTitleLabel, 1, 2, 1, 1);

        shortDescriptionLabel = new QLabel(editBox);
        shortDescriptionLabel->setObjectName(QStringLiteral("shortDescriptionLabel"));

        gridLayout_6->addWidget(shortDescriptionLabel, 2, 0, 1, 1);

        sizeQtyBox = new QGroupBox(editBox);
        sizeQtyBox->setObjectName(QStringLiteral("sizeQtyBox"));
        gridLayout_2 = new QGridLayout(sizeQtyBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        qtyLabel = new QLabel(sizeQtyBox);
        qtyLabel->setObjectName(QStringLiteral("qtyLabel"));

        gridLayout_2->addWidget(qtyLabel, 1, 0, 1, 1);

        sizeLabel = new QLabel(sizeQtyBox);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        gridLayout_2->addWidget(sizeLabel, 0, 0, 1, 1);

        updateQtyButton = new QPushButton(sizeQtyBox);
        updateQtyButton->setObjectName(QStringLiteral("updateQtyButton"));

        gridLayout_2->addWidget(updateQtyButton, 1, 2, 1, 1);

        qtyLineEdit = new QLineEdit(sizeQtyBox);
        qtyLineEdit->setObjectName(QStringLiteral("qtyLineEdit"));

        gridLayout_2->addWidget(qtyLineEdit, 1, 1, 1, 1);

        sizeComboBox = new QComboBox(sizeQtyBox);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));

        gridLayout_2->addWidget(sizeComboBox, 0, 1, 1, 2);


        gridLayout_6->addWidget(sizeQtyBox, 0, 3, 1, 1);

        productBox = new QGroupBox(editBox);
        productBox->setObjectName(QStringLiteral("productBox"));
        formLayout = new QFormLayout(productBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        currentItemLabel = new QLabel(productBox);
        currentItemLabel->setObjectName(QStringLiteral("currentItemLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, currentItemLabel);

        itemComboBox = new QComboBox(productBox);
        itemComboBox->setObjectName(QStringLiteral("itemComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, itemComboBox);

        updateInfoButton = new QPushButton(productBox);
        updateInfoButton->setObjectName(QStringLiteral("updateInfoButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, updateInfoButton);


        gridLayout_6->addWidget(productBox, 0, 0, 1, 2);


        gridLayout_5->addWidget(editBox, 2, 0, 1, 1);

        importEditSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(importEditSpacer, 1, 0, 1, 1);

        editExportSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(editExportSpacer, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 784, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(importLineEdit, importBrowseButton);
        QWidget::setTabOrder(importBrowseButton, importUploadData);
        QWidget::setTabOrder(importUploadData, importDisplayPreview);
        QWidget::setTabOrder(importDisplayPreview, itemComboBox);
        QWidget::setTabOrder(itemComboBox, updateInfoButton);
        QWidget::setTabOrder(updateInfoButton, nameLineEdit);
        QWidget::setTabOrder(nameLineEdit, shortDescriptionLineEdit);
        QWidget::setTabOrder(shortDescriptionLineEdit, descriptionTextEdit);
        QWidget::setTabOrder(descriptionTextEdit, metaTitleLineEdit);
        QWidget::setTabOrder(metaTitleLineEdit, metaKeywordLineEdit);
        QWidget::setTabOrder(metaKeywordLineEdit, metaDescriptionTextEdit);
        QWidget::setTabOrder(metaDescriptionTextEdit, sizeComboBox);
        QWidget::setTabOrder(sizeComboBox, qtyLineEdit);
        QWidget::setTabOrder(qtyLineEdit, updateQtyButton);
        QWidget::setTabOrder(updateQtyButton, exportLineEdit);
        QWidget::setTabOrder(exportLineEdit, exportBrowse);
        QWidget::setTabOrder(exportBrowse, exportGenerate);
        QWidget::setTabOrder(exportGenerate, exportPreview);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionTutorial);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "teamwork2magento 2.0", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0));
#ifndef QT_NO_TOOLTIP
        importBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Use this area to select and upload a Teamwork product export file for editing.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        importBox->setTitle(QApplication::translate("MainWindow", "Import", 0));
        importLabel->setText(QApplication::translate("MainWindow", "Select a Teamwork export file (must be in *.csv format):                                                    ", 0));
        importBrowseButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        importUploadData->setText(QApplication::translate("MainWindow", "Upload Data", 0));
        importDisplayPreview->setText(QApplication::translate("MainWindow", "Display Preview", 0));
#ifndef QT_NO_TOOLTIP
        importLineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Specify a valid file path in this field and press enter, or use the browse utility.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        exportBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Use this area to select a file path to export the data you have edited as a *.csv file.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        exportBox->setTitle(QApplication::translate("MainWindow", "Export", 0));
        exportBrowse->setText(QApplication::translate("MainWindow", "Browse...", 0));
        exportPreview->setText(QApplication::translate("MainWindow", "Display Preview", 0));
        exportLabel->setText(QApplication::translate("MainWindow", "Save file as (at the specified location as a *.csv file):                                                          ", 0));
        exportGenerate->setText(QApplication::translate("MainWindow", "Generate Export", 0));
#ifndef QT_NO_TOOLTIP
        editBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Use this area to edit product attributes.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        editBox->setTitle(QApplication::translate("MainWindow", "Editing", 0));
        nameLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Name:</p></body></html>", 0));
        metaKeywordLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Meta_Keyword:</p></body></html>", 0));
        descriptionLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Description:</p></body></html>", 0));
        metaDescriptionLabel->setText(QApplication::translate("MainWindow", "Meta_Description:", 0));
        metaTitleLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Meta_Title:</p></body></html>", 0));
        shortDescriptionLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Short Description:</p></body></html>", 0));
        sizeQtyBox->setTitle(QApplication::translate("MainWindow", "Size and Quantity", 0));
        qtyLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Quantity:</p></body></html>", 0));
        sizeLabel->setText(QApplication::translate("MainWindow", "Size:", 0));
        updateQtyButton->setText(QApplication::translate("MainWindow", "Update Quantity", 0));
        productBox->setTitle(QApplication::translate("MainWindow", "Product Selection", 0));
        currentItemLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Current Item:</p></body></html>", 0));
        updateInfoButton->setText(QApplication::translate("MainWindow", "Update Info", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
