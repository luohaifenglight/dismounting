/****************************************************************************
** Meta object code from reading C++ file 'MultiScreenshotsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/MultiScreenshotsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiScreenshotsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiScreenshotsDialog_t {
    QByteArrayData data[13];
    char stringdata[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiScreenshotsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiScreenshotsDialog_t qt_meta_stringdata_MultiScreenshotsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MultiScreenshotsDialog"
QT_MOC_LITERAL(1, 23, 22), // "targetImageSizeChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 25), // "activateDefaultBackground"
QT_MOC_LITERAL(4, 73, 23), // "activateColorBackground"
QT_MOC_LITERAL(5, 97, 23), // "activateImageBackground"
QT_MOC_LITERAL(6, 121, 19), // "editBackgroundColor"
QT_MOC_LITERAL(7, 141, 21), // "predefinedSizeChanged"
QT_MOC_LITERAL(8, 163, 21), // "BrowseBackgroundImage"
QT_MOC_LITERAL(9, 185, 20), // "numberOfShotsChanged"
QT_MOC_LITERAL(10, 206, 18), // "motionLengthChange"
QT_MOC_LITERAL(11, 225, 17), // "gravityAxisChange"
QT_MOC_LITERAL(12, 243, 15) // "reverseRotation"

    },
    "MultiScreenshotsDialog\0targetImageSizeChanged\0"
    "\0activateDefaultBackground\0"
    "activateColorBackground\0activateImageBackground\0"
    "editBackgroundColor\0predefinedSizeChanged\0"
    "BrowseBackgroundImage\0numberOfShotsChanged\0"
    "motionLengthChange\0gravityAxisChange\0"
    "reverseRotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiScreenshotsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiScreenshotsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiScreenshotsDialog *_t = static_cast<MultiScreenshotsDialog *>(_o);
        switch (_id) {
        case 0: _t->targetImageSizeChanged(); break;
        case 1: _t->activateDefaultBackground(); break;
        case 2: _t->activateColorBackground(); break;
        case 3: _t->activateImageBackground(); break;
        case 4: _t->editBackgroundColor(); break;
        case 5: _t->predefinedSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->BrowseBackgroundImage(); break;
        case 7: _t->numberOfShotsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->motionLengthChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->gravityAxisChange(); break;
        case 10: _t->reverseRotation(); break;
        default: ;
        }
    }
}

const QMetaObject MultiScreenshotsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MultiScreenshotsDialog.data,
      qt_meta_data_MultiScreenshotsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiScreenshotsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiScreenshotsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiScreenshotsDialog.stringdata))
        return static_cast<void*>(const_cast< MultiScreenshotsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MultiScreenshotsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
