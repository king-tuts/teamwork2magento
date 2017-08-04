#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //hide editing and export box until file is uploaded
    ui->editBox->hide();
    ui->exportBox->hide();

    //adjust size constraints on the mainwindow so that it cannot be rescaled
    layout()->setSizeConstraint(QLayout::SetFixedSize);

    //initialization functions
    createStatusBar();
    createMessageBox();
    initialAccessControl();
}

MainWindow::~MainWindow()
{
    resetAllAccess();
    delete ui;
}

bool MainWindow::headerCheck()
{
    //simple function to check the header file for relevant teamwork information
    //also sets the position of the ggsku for sorting

    //declare flags
    bool nameFlag = false;
    bool priceFlag = false;
    bool manufacturerFlag = false;
    bool ggskuFlag = false;
    bool skuFlag = false;
    bool sizeFlag = false;

    //iterate through the header and check for each of these strings
    //if is is there, set the flag to true
    for (int i = 0; i < headerRow.size(); i++)
    {
        QString temp = headerRow.at(i);

        if(temp.contains("Description 4", Qt::CaseInsensitive))
            nameFlag = true;

        if(temp.contains("Base Price", Qt::CaseInsensitive))
            priceFlag = true;

        if(temp.contains("Manufacturer", Qt::CaseInsensitive))
            manufacturerFlag = true;

        if(temp.contains("Description 1", Qt::CaseInsensitive))
        {
            ggskuFlag = true;
            ggsku_pos = i;
        }

        if(temp.contains("PLU", Qt::CaseInsensitive))
            skuFlag = true;

        if(temp.contains("Attribute 2", Qt::CaseInsensitive))
            sizeFlag = true;
    }

    //return each of the flags combined with a logical "and" statement
    //will return false unless all are true (herp)
    return (nameFlag && priceFlag && manufacturerFlag &&
                ggskuFlag && skuFlag && sizeFlag);
}

void MainWindow::capturePreviousText()
{
    prevMetaDescText = ui->metaDescriptionTextEdit->toPlainText();
    prevDescText = ui->descriptionTextEdit->toPlainText();
}

void MainWindow::validateEntry(QString& text)
{
    //the function only validates manual entries into the textboxes
    //need to figure out a way to validate pasted text without
    //the program crashing

    int pos = 0;

    //if the expression contains invalid characters
    if (validator->validate(text, pos) == QRegExpValidator::Invalid)
    {
        //capture cursor position
        QTextCursor cursor(ui->descriptionTextEdit->textCursor());
        int currentPos = cursor.position() - 1;

        //conditional statements to remove the invalid character
        //only works if input is being entered 1 char at a time
        if(cursor.atStart() == true)
        {
            ui->descriptionTextEdit->setPlainText(text);
            cursor.setPosition(currentPos);
        }
        else
        {
            text.remove(cursor.position() - 1, 1);
            ui->descriptionTextEdit->setPlainText(text);
            cursor.setPosition(currentPos);
        }

        //set cursor back to original position
        ui->descriptionTextEdit->setTextCursor(cursor);
    }
}

void MainWindow::validateDescriptionTextEdit()
{
    //capture current text and send it to validator function
    QString text = ui->descriptionTextEdit->toPlainText();

    //define regexp
    QRegExp edits("[^-_,!%().:;'|/ A-Za-z0-9]{1,}");

    if (text.contains(edits) && !(text.size() == prevDescText.size() + 1))
    {
        ui->descriptionTextEdit->setText(prevDescText);

        messageBoxTitle = "Operation Failed";
        messageBoxText = "<b>Cannot paste text with invalid characters!</b><br><br>"
                         "<u>Acceptable characters consist of the following:</u><br>"
                         "Any alphanumeric characters (a-z uppercase or lowercase and any digit)<br>"
                         "hyphens (-), underscores (_), commas (,), exclamation points (!),<br>"
                         "percent symbol (%), left and right parentheses, periods (.),<br>"
                         "colons (:), semicolons(;), single quotes('),<br>"
                         "pipe character (|), and forward slash (/)";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
    else
    {
        validateEntry(text);
    }
}

void MainWindow::validateMetaDescriptionText()
{
    //capture current text and send it to validator function
    QString text = ui->metaDescriptionTextEdit->toPlainText();

    //define regexp
    QRegExp edits("[^-_,!%().:;'|/ A-Za-z0-9]{1,}");

    if ((text.contains(edits)) && !(text.size() == prevMetaDescText.size() + 1))
    {
        ui->metaDescriptionTextEdit->setText(prevMetaDescText);

        messageBoxTitle = "Operation Failed";
        messageBoxText = "<b>Cannot paste text with invalid characters!</b><br><br>"
                         "Acceptable characters consist of the following:<br>"
                         "Any alphanumeric characters (a-z uppercase or lowercase and any digit)<br>"
                         "hyphens (-), underscores (_), commas (,), exclamation points (!),<br>"
                         "percent symbol (%), left and right parentheses, periods (.),<br>"
                         "colons (:), semicolons(;), single quotes('),<br>"
                         "pipe character (|), and forward slash (/)";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
    else
    {
        validateEntry(text);
    }
}

void MainWindow::setRegExps()
{
    //initialization function for the regexps on input lines

    //special regexp for quantity field
    //also sets the validator on the lineEdit
    QRegExp rx("[0-9]{1,5}");
    ui->qtyLineEdit->setValidator(new QRegExpValidator(rx, this));

    //regexp for the lineEdits
    //also sets validators for each lineEdit
    QRegExp edits("[-_,!%().:;'|/ A-Za-z0-9]{1,1024}");
    validator = new QRegExpValidator(edits, this);

    ui->nameLineEdit->setValidator(validator);
    ui->shortDescriptionLineEdit->setValidator(validator);
    ui->metaTitleLineEdit->setValidator(validator);
    ui->metaKeywordLineEdit->setValidator(validator);

    //connect textChanged() signals in the textEdits to the validator functions
    QObject::connect(ui->descriptionTextEdit, SIGNAL(textChanged()),
                     this, SLOT(validateDescriptionTextEdit()));

    QObject::connect(ui->metaDescriptionTextEdit, SIGNAL(textChanged()),
                     this, SLOT(validateMetaDescriptionText()));

    prevDescText = "null";
    prevMetaDescText = "null";
}

void MainWindow::executeProgressDialog(const QString& labelText, const QString& cancelText,
                                       int min, int max, QWidget* parent)
{
    //initializes and starts a progressDialog for possible expensive operations
    progress = new QProgressDialog(labelText, cancelText, min, max, parent);
    progress->setWindowModality(Qt::WindowModal);
    progress->setWindowTitle("Initializing");
    progress->setWindowIcon(QIcon(":/images/bmp_icon4exe.bmp"));
    progress->setValue(min);

    //sets the attribute of the dialog to delete itself when it is closed
    progress->setAttribute(Qt::WA_DeleteOnClose);
    progress->show();
}

void MainWindow::createStatusBar()
{
    //initialization function for the status bar at the bottom of the program window
    statusLabel = new QLabel;
    statusLabel->setAlignment(Qt::AlignLeft);
    statusLabel->setTextFormat(Qt::RichText);
    statusLabel->setMinimumSize(statusLabel->sizeHint());

    ui->statusBar->addWidget(statusLabel);
    statusLabel->setText("<i>Welcome to teamwork2magento!</i>");
}

void MainWindow::createMessageBox()
{
    //initialization function for messageBox dialogs
    msgBox.setWindowIcon(QIcon(":/images/bmp_icon4exe.bmp"));
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    messageBoxTitle = "null";
    messageBoxText = "null";
}

void MainWindow::setMessageBox(QString &title, QString &text, bool hasCancelButton)
{
    //function to set attributes of the messageBox
    //passes a simple flag to determine the exisitence of a cancel button
    msgBox.setWindowTitle(title);
    msgBox.setText(text);

    if (hasCancelButton == true)
    {
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
    }

    if (hasCancelButton == false)
    {
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
    }
}

void MainWindow::executeMessageBox(bool cancelFlag)
{
    //execution function for the messagebox dialog
    int return_value = msgBox.exec();

    //if the flag passed is true, aka this has a cancel button
    if (cancelFlag == true)
    {
        switch(return_value)
        {
            case QMessageBox::Ok:
                msgBox.close();
                close();
                break;

            case QMessageBox::Cancel:
                msgBox.close();
                break;

             default:
                //should never be reached
                break;
        }
    }

    //otherwise no cancel button
    if (cancelFlag == false)
    {
        switch (return_value)
        {
            case QMessageBox::Ok:
                msgBox.close();
                break;

            default:
                //should never be reached
                break;
        }
    }
}

void MainWindow::initialAccessControl()
{
    //simple function that initially disables certain features
    ui->importUploadData->setEnabled(false);
    ui->importDisplayPreview->setEnabled(false);
    ui->editBox->setEnabled(false);
    ui->exportBox->setEnabled(false);
}

void MainWindow::resetAllAccess()
{
    //resets all features to the original import box before a file was selected
    ui->importDisplayPreview->setEnabled(false);
    ui->importUploadData->setEnabled(false);
    ui->editBox->setEnabled(false);
    ui->exportBox->setEnabled(false);

    //functions to clear data and lineEdits/textEdits
    clearData();
    clearTextFields();
}

void MainWindow::clearData()
{
    //conditional statement to clear preexisting data in "tempPtrList"
    //needed if a data upload is performed twice
    //aka user decides to quit editing an uploaded csv and then opens and uploads another
    if(tempPtrList.empty() == false)
    {
        qDeleteAll(tempPtrList);
        tempPtrList.clear();
    }

    //conditional statement to clear preexisting data in "objPtrList"
    if(objPtrList.empty() == false)
    {
        qDeleteAll(objPtrList);
        objPtrList.clear();
    }
}

void MainWindow::clearTextFields()
{
    //clears text in any input field
    ui->importLineEdit->clear();

    ui->itemComboBox->clear();
    ui->nameLineEdit->clear();
    ui->descriptionTextEdit->clear();
    ui->shortDescriptionLineEdit->clear();
    ui->metaTitleLineEdit->clear();
    ui->metaDescriptionTextEdit->clear();
    ui->metaKeywordLineEdit->clear();

    ui->sizeComboBox->clear();
    ui->qtyLineEdit->clear();

    ui->exportLineEdit->clear();
}

void MainWindow::writeData()
{
    //open the file
    QFile file(ui->exportLineEdit->text());

    //if file is open
    if (file.open(QIODevice::WriteOnly))
    {
        //put the file in a textstream
        QTextStream output (&file);

        //create dummy object to write the header line
        export_obj *header = new simple_obj();
        header->export_obj::printObject(output);
        delete header;

        //create and start progressDialog for writing algorithm
        executeProgressDialog(QString("Writing data..."), QString("Cancel"), 0, objPtrList.size(), this);
        progress->setValue(0);

        //iterate through entire data structure and call the write function for each
        //also updates the progressdialog with each iteration
        for (int j = 0; j < objPtrList.size(); j++)
        {
            objPtrList[j]->printObject(output);
            progress->setValue(j);
            QApplication::processEvents();
        }
        //set progressdialog value to the maximum
        //progressdialog automatically closes when it reaches max
        progress->setValue(objPtrList.size());

        statusLabel->setText("Export successfully generated!");

        //initialize and execute the messagebox
        messageBoxTitle = "Success!";
        messageBoxText = "Successfully exported data!";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
    else
    {
        statusLabel->setText("<i>Failed to generate export file</i>");

        //initialize and execute the messagebox
        messageBoxTitle = "Export failed";
        messageBoxText = "Error: unable to write data.\n\n"
                         "Either this file is already in use with another program,\n"
                         "or an invalid file path was specified above.";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
}

void MainWindow::readData()
{
    //open the file
    QFile file(ui->importLineEdit->text());

    //if file is open
    if (file.open(QIODevice::ReadOnly))
    {
        //execute the progressdialog
        executeProgressDialog(QString("Reading data..."), QString("Cancel"),
                              0, file.size(), this);
        progress->setValue(0);

        //algorithm for reading data from the csv file
        while (!file.atEnd())
        {
            //"file.readLine()" reads in the one line at a time to conserve memory

            //alternate option is "file.readAll(), which returns the entire file
            //as a QString; however this consumes significant amounts of memory
            //with large files and is not stable for large data sets

            //read in one line
            QString data = file.readLine();
            QString temp;
            QChar character;

            //place the line in a text stream
            QTextStream textStream(&data);

            //update percentage in progressdialog
            progress->setValue(file.pos());

            //algorithm for processing a line in the teamwork export file
            //originally written by Ronie P. Martinez <ronmarti18@gmail.com>
            while (!textStream.atEnd())
            {
                textStream >> character;

                //if the next character is a comma (aka at the end of a cell)
                if (character == ',')
                {
                    checkString(temp, character);
                }

                //if the next character is a newline (aka at the end of a row)
                else if (character == '\n')
                {
                    checkString(temp, character);
                }

                //special case for end of stream
                else if (textStream.atEnd())
                {
                    temp.append(character);
                    checkString(temp);
                }

                //if the next character isn't a newline or a comma
                //(aka if we are reading in a string in the middle of a cell
                else
                {
                    temp.append(character);
                }
            }
            QApplication::processEvents();
        }
        //set progressdialog value to max to close it
        progress->setValue(file.size());

        //close the file
        file.close();

        statusLabel->setText("<i>File successfully uploaded!</i>");

        //enable preview of uploaded data
        ui->importDisplayPreview->setEnabled(true);

        //call function to place data into custom data structure
        formatData();
    }
    else
    {
        //execute failure messagebox if file was unable to be opened
        statusLabel->setText("<i>Failed to open the specified file.</i>");
        messageBoxTitle = "Import failed";
        messageBoxText = "  Please specify a valid file path to continue\t";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
}

//original checkString function written by Ronie P. Martinez <ronmarti18@gmail.com>
//i have only made minor changes to suit my implementation needs
void MainWindow::checkString(QString &temp, QChar character)
{
    //if the string in temp has an even number of double quotes
    if(temp.count("\"")%2 == 0)
    {
        //if temp has a double quote at the beginning AND the end
        if (temp.startsWith( QChar('\"')) && temp.endsWith( QChar('\"') ) )
        {
             //removes the double quotes at the beginning and the end of the string
             temp.remove( QRegExp("^\"") );
             temp.remove( QRegExp("\"$") );
        }

        //replaces two doubles quotes in a row with a single double quote
        temp.replace("\"\"", "\"");

        //append contents of a cell to the tempCsvLine
        tempCsvLine.append(temp);

        //only executes if a newline character was passed in via "character"
        //meaning it only executes when an entire row exists in "standardItemlist"
        //or if it reaches the end of the file (which is the end of an entire row)
        if (character != QChar(','))
        {
            //appends an entire row to "theCsv"
            theCsv.push_back(tempCsvLine);

            //clears previous data for the next row to be read in
            tempCsvLine.clear();
        }

        //clears the temporary string for the next cell
        temp.clear();
    }

    //if the string doesn't have an even number of double quotes, just read it in normally
    else
    {
        temp.append(character);
    }
}

void MainWindow::formatData()
{
    statusLabel->setText("<i>Formatting data...</i>");

    //clear any pre-exisiting data inside tempPtrList/objPtrList
    clearData();

    //pull header information for position variables and remove from list
    //data without header is left inside "theCsv"
    headerRow = theCsv.front();
    theCsv.pop_front();

    //if the uploaded data passes the header check
    if(headerCheck())
    {
        //execute progressdialog
        executeProgressDialog(QString("Formating data..."), QString("Cancel"),
                              0, theCsv.size(), this);
        progress->setValue(0);

        //initialization of all items in the upload file as simple_obj
        //processData() uses this list of pointers for comparisions/decisions
        for (int i = 0; i < theCsv.size(); i++)
        {
            progress->setValue(i);
            QApplication::processEvents();
            export_obj *entry = new simple_obj(theCsv[i], headerRow);
            tempPtrList.push_back(entry);
        }
        //set progressdialog value to max to close it
        progress->setValue(theCsv.size());

        statusLabel->setText("<i>Data successfully formatted!</i>");

        //process "simple_obj" objects to determine if "config_obj" objects
        //need to be added to the data structure for output
        processData();

        //populate the dropdown menu for item selection
        populateMainDropDown();

        //set regexps and validators on the lineEdits/textEdits
        setRegExps();

        //show the editbox and enable buttons/lineEdits/textEdits
        ui->editBox->show();
        ui->editBox->setEnabled(true);

        //show the export groupbox and enable preview of formatted data
        ui->exportBox->show();
        ui->exportBox->setEnabled(true);
        ui->exportPreview->setEnabled(true);
        ui->exportGenerate->setEnabled(false);

        //execute success messagebox and edit statusLabel
        statusLabel->setText("Upload completed successfully!");

        messageBoxTitle = "Success!";
        messageBoxText = "  Upload complete!\t";

        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();

        //capture initial text for validating purposes
        capturePreviousText();
    }
    else
    {
        //execute failure messagebox if file failed headercheck
        statusLabel->setText("<i>Upload failed: incorrect file format</i>");
        messageBoxTitle = "Failure";
        messageBoxText = "  Please specify a properly formatted\t\n"
                         "  import file and try again\t";
        setMessageBox(messageBoxTitle, messageBoxText);
        executeMessageBox();
    }
}

//unimplemented
void MainWindow::sortData()
{
    //function to sort the data by gg_sku value
    statusLabel->setText("<i>Sorting data...</i>");

    statusLabel->setText("<i>Data successfully sorted!</i>");
}

void MainWindow::processData()
{
    statusLabel->setText("<i>Processing data...</i>");

    QStringList tempList; //for temp storing simple skus to be associated with config
    QString empty;        //for comparisions

    bool config_flag = false;   //flag to create config


    //initialize progressdialog
    executeProgressDialog(QString("Processing data..."), QString("Cancel"),
                          0, tempPtrList.size(), this);

    //algorithm for creating config items based on simples list
    //O(N) worst case complexity; appending items to QList are constant complexity
    for (int i = 0; i < tempPtrList.size(); i++)
    {

        //beginning of list special case
        if (i == 0)
        {
            if(tempPtrList[i]->get_gg_sku() == tempPtrList[i+1]->get_gg_sku())
                tempList.append(tempPtrList[i]->get_sku());

            if(tempPtrList[i]->get_gg_sku() != tempPtrList[i+1]->get_gg_sku() &&
                tempPtrList[i]->get_size() != empty)
            {
                tempList.append(tempPtrList[i]->get_sku());
                config_flag = true;
            }
        }

        //middle of list
        if ( (i > 0) && (i < tempPtrList.size() - 1) )
        {
            if(tempPtrList[i]->get_gg_sku() == tempPtrList[i+1]->get_gg_sku())
                tempList.append(tempPtrList[i]->get_sku());

            if(tempPtrList[i]->get_gg_sku() != tempPtrList[i+1]->get_gg_sku() &&
                tempPtrList[i]->get_gg_sku() == tempPtrList[i-1]->get_gg_sku())
            {
                tempList.append(tempPtrList[i]->get_sku());
                config_flag = true;
            }

            if(tempPtrList[i]->get_gg_sku() != tempPtrList[i+1]->get_gg_sku() &&
                tempPtrList[i]->get_gg_sku() != tempPtrList[i-1]->get_gg_sku() &&
                tempPtrList[i]->get_size() != empty)
            {
                tempList.append(tempPtrList[i]->get_sku());
                config_flag = true;
            }
        }

        //end of list
        if(i == tempPtrList.size() - 1)
        {
            if(tempPtrList[i]->get_gg_sku() == tempPtrList[i-1]->get_gg_sku())
            {
                tempList.append(tempPtrList[i]->get_sku());
                config_flag = true;
            }

            if(tempPtrList[i]->get_gg_sku() != tempPtrList[i-1]->get_gg_sku() &&
                tempPtrList[i]->get_size() != empty)
            {
                tempList.append(tempPtrList[i]->get_sku());
                config_flag = true;
            }
        }

        //create simple_obj and append it to the list
        export_obj *tempPtr = new simple_obj(theCsv[i], headerRow);
        objPtrList.push_back(tempPtr);

        //category/visibility//ggsku setting for simples with no size attribute
        //aka simples that arent associated with a config
        if(objPtrList.back()->get_size() == empty)
        {
            objPtrList.back()->set_sku(objPtrList.back()->get_gg_sku());
            objPtrList.back()->set_category_ids("158");
            objPtrList.back()->set_visibility("Catalog, Search");
        }

        //flag setting to create config at the end of a list of simples
        if(config_flag == true)
        {
            export_obj *entry = new config_obj(theCsv[i], headerRow);
            entry->generateAssociated(tempList);
            entry->set_qty("0");
            objPtrList.push_back(entry);

            tempList.clear();
            config_flag = false;
        }
        //update progressdialog percentage
        progress->setValue(i);
    }
    //set progressdialog value to max to close it
    progress->setValue(tempPtrList.size());

    //delete previously stored "simple_obj" objects from the tempPtrList
    qDeleteAll(tempPtrList);
    tempPtrList.clear();
}

void MainWindow::populateMainDropDown()
{
    statusLabel->setText("Populating item list...");
    //initialize progressdialog
    executeProgressDialog(QString("Populating item list..."), QString("Cancel"),
                          0, objPtrList.size(), this);
    progress->setValue(0);

    //iterate through each item in the objPtrList
    //if the item doesn't already exist, add it to the dropdown combobox
    for (int i = 0; i < objPtrList.size(); i++)
    {
        progress->setValue(i);
        QApplication::processEvents();

        if(ui->itemComboBox->findText(objPtrList[i]->get_gg_sku()) < 0)
            ui->itemComboBox->addItem(objPtrList[i]->get_gg_sku());
    }
    //set progressdialog to max to close
    progress->setValue(objPtrList.size());

    //functions to initialize/pull info from uploaded data into text fields
    updateCurrentItem();
    updateCurrentSizes();
    updateSizeQty();

    //manually connect indexChanged signals to appropriate functions
    QObject::connect(ui->itemComboBox, SIGNAL(currentIndexChanged(QString)),
                     this, SLOT(updateCurrentItem()));

    QObject::connect(ui->itemComboBox, SIGNAL(currentIndexChanged(QString)),
                     this, SLOT(updateCurrentSizes()));

    QObject::connect(ui->sizeComboBox, SIGNAL(currentIndexChanged(QString)),
                     this, SLOT(updateSizeQty()));
}

void MainWindow::updateCurrentItem()
{
    //iterate through entire objPtrList and, if there is a match,
    //set all of the associated information in the text fields
    for (int i = 0; i < objPtrList.size(); i++)
    {
        if(ui->itemComboBox->currentText() == objPtrList[i]->get_gg_sku())
        {
            ui->nameLineEdit->setText(objPtrList[i]->get_name());
            ui->descriptionTextEdit->setPlainText(objPtrList[i]->get_description());
            ui->shortDescriptionLineEdit->setText(objPtrList[i]->get_short_description());
            ui->metaTitleLineEdit->setText(objPtrList[i]->get_meta_title());
            ui->metaDescriptionTextEdit->setPlainText(objPtrList[i]->get_meta_description());
            ui->metaKeywordLineEdit->setText(objPtrList[i]->get_meta_keyword());

            return;
        }
    }
}

void MainWindow::updateCurrentSizes()
{
    //clear previous data in the size combobox
    ui->sizeComboBox->clear();

    QString empty;
    bool has_size = false;

    //iterate through entire objPtrList for a match
    //if there is a match, place the size in the sizeCombobox
    for (int i = 0; i < objPtrList.size(); i++)
    {
        if(ui->itemComboBox->currentText() == objPtrList[i]->get_gg_sku() &&
            ui->sizeComboBox->findText(objPtrList[i]->get_size()) < 0 &&
            objPtrList[i]->get_size() != empty)
        {
            ui->sizeComboBox->addItem(objPtrList[i]->get_size());
            has_size = true;
        }
    }

    //if there were no matches (aka an item without a size attribute)
    //place "none" in the combo box
    if (has_size == false)
    {
        ui->sizeComboBox->addItem("None");
    }
}

void MainWindow::updateSizeQty()
{
    bool has_size = false;

    //iterate through objPtrList to grab the appropriate qty for each size
    for (int i = 0; i < objPtrList.size(); i++)
    {
        if(ui->itemComboBox->currentText() == objPtrList[i]->get_gg_sku() &&
            ui->sizeComboBox->currentText() == objPtrList[i]->get_size())
        {
            ui->qtyLineEdit->setText(objPtrList[i]->get_qty());
            has_size = true;
        }
    }

    //if there was no size attribute, set the qty for sizeless item
    if (has_size == false)
    {
        for (int j = 0; j < objPtrList.size(); j++)
        {
            if(ui->itemComboBox->currentText() == objPtrList[j]->get_gg_sku())
                ui->qtyLineEdit->setText(objPtrList[j]->get_qty());
        }
    }
}

void MainWindow::on_importBrowseButton_clicked()
{
    //grab importfile name
    QString importFileName = ui->importLineEdit->text();

    //temporarily store a copy in case of canceled file selection
    QString temp = ui->importLineEdit->text();
    QString empty;

    //open QFileDialog for file selection
    importFileName = QFileDialog::getOpenFileName(this, "Select a *.csv file to upload",
                                                  QDir::homePath(), "CSV (*.csv)");

    //if text exists in the importLineEdit, aka a file was selected
    if(importFileName.isEmpty() == false)
    {
        //if the import file name was actually changed
        if(importFileName != temp)
        {
            //reset access to edit and export groupboxes and hide them
            resetAllAccess();
            ui->editBox->hide();
            ui->exportBox->hide();
        }

        statusLabel->setText("<i>Import file selected</i>");
        ui->importLineEdit->setText(importFileName);
        ui->importUploadData->setEnabled(true);
    }

    if (ui->importLineEdit->text() == empty)
        statusLabel->setText("<i>No file path specified.</i>");
}


void MainWindow::on_importDisplayPreview_clicked()
{
    statusLabel->setText("<i>Generating preview...</i>");


    //if there is data inside of the uploaded csv
    if(theCsv.isEmpty() == false)
    {
        //dynamically allocate space for the preview
        Preview *displayPreview = new Preview(this);

        //append the header to the preview
        displayPreview->appendModel(headerRow);

        //iterate through entire csv file and add each row
        for (int i = 0; i < theCsv.size(); i++)
        {
            displayPreview->appendModel(theCsv[i]);
        }

        //initialize and show the preview
        displayPreview->setWindowModality(Qt::WindowModal);
        displayPreview->setAttribute(Qt::WA_DeleteOnClose);
        displayPreview->show();

        statusLabel->setText("<i>Preview successfully generated!</i>");
    }
}

void MainWindow::on_importUploadData_clicked()
{
    //if there is preexisting data in the variable "theCsv",
    //clear it before reading in more data
    if(theCsv.isEmpty() == false)
    {
        theCsv.clear();
    }

    //call function to read data
    readData();
}

void MainWindow::on_updateInfoButton_clicked()
{
    //iterate through each item in objPtrList,
    //if there is a match, update text fields with appropriate info
    for (int i = 0; i < objPtrList.size(); i++)
    {
        if(ui->itemComboBox->currentText() == objPtrList[i]->get_gg_sku())
        {
            objPtrList[i]->set_name(ui->nameLineEdit->text());
            objPtrList[i]->set_description(ui->descriptionTextEdit->toPlainText());
            objPtrList[i]->set_short_description(ui->shortDescriptionLineEdit->text());
            objPtrList[i]->set_meta_title(ui->metaTitleLineEdit->text());
            objPtrList[i]->set_meta_description(ui->metaDescriptionTextEdit->toPlainText());
            objPtrList[i]->set_meta_keyword(ui->metaKeywordLineEdit->text());
        }
    }

    //call function to update qty for the item
    on_updateQtyButton_clicked();

    statusLabel->setText("Product information successfully updated!");
}

void MainWindow::on_updateQtyButton_clicked()
{
    //iteratr through entire objPtrList and grab appropriate qty
    for (int i = 0; i < objPtrList.size(); i++)
    {
        //if the item has sizes, display qty for currently selected size
        if(objPtrList[i]->get_gg_sku() == ui->itemComboBox->currentText() &&
            objPtrList[i]->get_size() == ui->sizeComboBox->currentText())
        {
            objPtrList[i]->set_qty(ui->qtyLineEdit->text());
        }

        //if item has no sizes, display qty for sizeless item
        if(objPtrList[i]->get_gg_sku() == ui->itemComboBox->currentText() &&
            ui->sizeComboBox->currentText() == "None")
        {
            objPtrList[i]->set_qty(ui->qtyLineEdit->text());
        }
    }
    statusLabel->setText("");
    statusLabel->setText("Quantity successfully updated!");
}

void MainWindow::on_exportBrowse_clicked()
{
    //declare variable for export path
    QString exportFilePath;

    //use filedialog to get the export file path
    exportFilePath = QFileDialog::getSaveFileName(this, "Save As",
                                                  QDir::homePath(), "CSV (*.csv)");

    //if the filepath is not empty, set path in text field,
    //and then enable the export button for writing data
    if (exportFilePath.isEmpty() == false)
    {
        statusLabel->setText("<i>Export file selected</i>");
        ui->exportLineEdit->setText(exportFilePath);
        ui->exportGenerate->setEnabled(true);
    }
}

void MainWindow::on_exportGenerate_clicked()
{
    statusLabel->setText("Generating export file...");

    //call write function
    writeData();
}

void MainWindow::on_exportPreview_clicked()
{
    statusLabel->setText("<i>Generating preview...</i>");

    //if there is data in objPtrList
    if (objPtrList.empty() == false)
    {
        //dynamically allocate preview object
        Preview *displayPreview = new Preview(this);

        //create dummy object for the header row
        export_obj *header = new simple_obj();
        displayPreview->appendModel(header->export_obj::getPreviewList());
        delete header;

        //iterate through entire objPtrList and add each row for display
        for (int i = 0; i < objPtrList.size(); i++)
        {
            displayPreview->appendModel(objPtrList[i]->getPreviewList());
        }

        //initialize the preview attributes
        displayPreview->setWindowModality(Qt::WindowModal);
        displayPreview->setAttribute(Qt::WA_DeleteOnClose);
        displayPreview->show();
    }

    statusLabel->setText("<i>Preview successfully generated!</i>");
}

void MainWindow::on_actionExit_triggered()
{
    //special case messagebox for warning on exit

    messageBoxTitle = "Exiting program";
    messageBoxText = "Are you sure you want to exit the program?\n\n"
                    "Any work that has not been exported will be lost";

    setMessageBox(messageBoxTitle, messageBoxText, true);
    executeMessageBox(true);
}

void MainWindow::on_actionAbout_triggered()
{
    //convenience function for about box

       QMessageBox::about(this, "About teamwork2magento",
                          "<h2>teamwork2magento 2.0</h2>"
                          "<p>Created and developed by Robert E. Tuttle III"
                          "<p>Please report any bugs or errors to: "
                          "<u><i>kingtuts915@gmail.com</i></u>");
}
