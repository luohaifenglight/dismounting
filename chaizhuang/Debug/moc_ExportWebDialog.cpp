/****************************************************************************
** Meta object code from reading C++ file 'ExportWebDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/ExportWebDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportWebDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExportWebDialog_t {
    QByteArrayData data[14];
    char stringdata[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExportWebDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExportWebDialog_t qt_meta_stringdata_ExportWebDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ExportWebDialog"
QT_MOC_LITERAL(1, 16, 20), // "thumbnailSizeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "imageSizeChanged"
QT_MOC_LITERAL(4, 55, 29), // "updateThumbnailPredifinedSize"
QT_MOC_LITERAL(5, 85, 25), // "updateImagePredifinedSize"
QT_MOC_LITERAL(6, 111, 28), // "updateImagePanelEnabledState"
QT_MOC_LITERAL(7, 140, 18), // "updateExportButton"
QT_MOC_LITERAL(8, 159, 17), // "numberOfRowChange"
QT_MOC_LITERAL(9, 177, 18), // "numberOfLineChange"
QT_MOC_LITERAL(10, 196, 6), // "browse"
QT_MOC_LITERAL(11, 203, 15), // "webTitleChanged"
QT_MOC_LITERAL(12, 219, 24), // "createSubDirStateChanged"
QT_MOC_LITERAL(13, 244, 19) // "editBackgroundColor"

    },
    "ExportWebDialog\0thumbnailSizeChanged\0"
    "\0imageSizeChanged\0updateThumbnailPredifinedSize\0"
    "updateImagePredifinedSize\0"
    "updateImagePanelEnabledState\0"
    "updateExportButton\0numberOfRowChange\0"
    "numberOfLineChange\0browse\0webTitleChanged\0"
    "createSubDirStateChanged\0editBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExportWebDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       3,    1,   77,    2, 0x08 /* Private */,
       4,    0,   80,    2, 0x08 /* Private */,
       5,    0,   81,    2, 0x08 /* Private */,
       6,    1,   82,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ExportWebDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExportWebDialog *_t = static_cast<ExportWebDialog *>(_o);
        switch (_id) {
        case 0: _t->thumbnailSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->imageSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateThumbnailPredifinedSize(); break;
        case 3: _t->updateImagePredifinedSize(); break;
        case 4: _t->updateImagePanelEnabledState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateExportButton(); break;
        case 6: _t->numberOfRowChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->numberOfLineChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->browse(); break;
        case 9: _t->webTitleChanged(); break;
        case 10: _t->createSubDirStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->editBackgroundColor(); break;
        default: ;
        }
    }
}

const QMetaObject ExportWebDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExportWebDialog.data,
      qt_meta_data_ExportWebDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExportWebDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExportWebDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExportWebDialog.stringdata))
        return static_cast<void*>(const_cast< ExportWebDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExportWebDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
