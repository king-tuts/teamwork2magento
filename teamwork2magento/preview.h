#ifndef PREVIEW_H
#define PREVIEW_H

#include <QDialog>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QList>
#include <QString>
#include <QStringList>

namespace Ui {
class Preview;
}

class Preview : public QDialog
{
    Q_OBJECT

public:
    explicit Preview(QWidget *parent = 0);
    ~Preview();

    void appendModel(QStringList input);

private:
    Ui::Preview *ui;

    QStandardItemModel *model;
};

#endif // PREVIEW_H
