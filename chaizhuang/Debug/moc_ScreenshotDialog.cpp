/****************************************************************************
** Meta object code from reading C++ file 'ScreenshotDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/ScreenshotDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenshotDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenshotDialog_t {
    QByteArrayData data[12];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenshotDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenshotDialog_t qt_meta_stringdata_ScreenshotDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ScreenshotDialog"
QT_MOC_LITERAL(1, 17, 22), // "targetImageSizeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "activateDefaultBackground"
QT_MOC_LITERAL(4, 67, 29), // "activateTransparentBackground"
QT_MOC_LITERAL(5, 97, 23), // "activateColorBackground"
QT_MOC_LITERAL(6, 121, 23), // "activateImageBackground"
QT_MOC_LITERAL(7, 145, 19), // "editBackgroundColor"
QT_MOC_LITERAL(8, 165, 21), // "predefinedSizeChanged"
QT_MOC_LITERAL(9, 187, 21), // "BrowseBackgroundImage"
QT_MOC_LITERAL(10, 209, 18), // "imageFormatChanged"
QT_MOC_LITERAL(11, 228, 6) // "format"

    },
    "ScreenshotDialog\0targetImageSizeChanged\0"
    "\0activateDefaultBackground\0"
    "activateTransparentBackground\0"
    "activateColorBackground\0activateImageBackground\0"
    "editBackgroundColor\0predefinedSizeChanged\0"
    "BrowseBackgroundImage\0imageFormatChanged\0"
    "format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenshotDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void ScreenshotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenshotDialog *_t = static_cast<ScreenshotDialog *>(_o);
        switch (_id) {
        case 0: _t->targetImageSizeChanged(); break;
        case 1: _t->activateDefaultBackground(); break;
        case 2: _t->activateTransparentBackground(); break;
        case 3: _t->activateColorBackground(); break;
        case 4: _t->activateImageBackground(); break;
        case 5: _t->editBackgroundColor(); break;
        case 6: _t->predefinedSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->BrowseBackgroundImage(); break;
        case 8: _t->imageFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ScreenshotDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ScreenshotDialog.data,
      qt_meta_data_ScreenshotDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScreenshotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenshotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenshotDialog.stringdata))
        return static_cast<void*>(const_cast< ScreenshotDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ScreenshotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
