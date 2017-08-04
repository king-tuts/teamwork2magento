#include "preview.h"
#include "ui_preview.h"

Preview::Preview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Preview)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);
    ui->tableView->setModel(model);
}

Preview::~Preview()
{
    delete model;
    delete ui;
}

void Preview::appendModel(QStringList input)
{
    QList<QStandardItem*> standardModel;

    for (int i = 0; i < input.size(); i++)
    {
        QStandardItem *item = new QStandardItem(input[i]);
        standardModel.append(item);
    }

    model->appendRow(standardModel);
}
