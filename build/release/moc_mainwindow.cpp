/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../teamwork2magento/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_importBrowseButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_importDisplayPreview_clicked"
QT_MOC_LITERAL(4, 74, 27), // "on_importUploadData_clicked"
QT_MOC_LITERAL(5, 102, 27), // "on_updateInfoButton_clicked"
QT_MOC_LITERAL(6, 130, 26), // "on_updateQtyButton_clicked"
QT_MOC_LITERAL(7, 157, 17), // "updateCurrentItem"
QT_MOC_LITERAL(8, 175, 18), // "updateCurrentSizes"
QT_MOC_LITERAL(9, 194, 13), // "updateSizeQty"
QT_MOC_LITERAL(10, 208, 23), // "on_exportBrowse_clicked"
QT_MOC_LITERAL(11, 232, 25), // "on_exportGenerate_clicked"
QT_MOC_LITERAL(12, 258, 24), // "on_exportPreview_clicked"
QT_MOC_LITERAL(13, 283, 27), // "validateDescriptionTextEdit"
QT_MOC_LITERAL(14, 311, 27), // "validateMetaDescriptionText"
QT_MOC_LITERAL(15, 339, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(16, 363, 24) // "on_actionAbout_triggered"

    },
    "MainWindow\0on_importBrowseButton_clicked\0"
    "\0on_importDisplayPreview_clicked\0"
    "on_importUploadData_clicked\0"
    "on_updateInfoButton_clicked\0"
    "on_updateQtyButton_clicked\0updateCurrentItem\0"
    "updateCurrentSizes\0updateSizeQty\0"
    "on_exportBrowse_clicked\0"
    "on_exportGenerate_clicked\0"
    "on_exportPreview_clicked\0"
    "validateDescriptionTextEdit\0"
    "validateMetaDescriptionText\0"
    "on_actionExit_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_importBrowseButton_clicked(); break;
        case 1: _t->on_importDisplayPreview_clicked(); break;
        case 2: _t->on_importUploadData_clicked(); break;
        case 3: _t->on_updateInfoButton_clicked(); break;
        case 4: _t->on_updateQtyButton_clicked(); break;
        case 5: _t->updateCurrentItem(); break;
        case 6: _t->updateCurrentSizes(); break;
        case 7: _t->updateSizeQty(); break;
        case 8: _t->on_exportBrowse_clicked(); break;
        case 9: _t->on_exportGenerate_clicked(); break;
        case 10: _t->on_exportPreview_clicked(); break;
        case 11: _t->validateDescriptionTextEdit(); break;
        case 12: _t->validateMetaDescriptionText(); break;
        case 13: _t->on_actionExit_triggered(); break;
        case 14: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
