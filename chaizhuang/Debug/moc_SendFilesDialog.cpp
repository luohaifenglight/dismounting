/****************************************************************************
** Meta object code from reading C++ file 'SendFilesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/SendFilesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendFilesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendFilesDialog_t {
    QByteArrayData data[13];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendFilesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendFilesDialog_t qt_meta_stringdata_SendFilesDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SendFilesDialog"
QT_MOC_LITERAL(1, 16, 6), // "browse"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "sendAllFiles"
QT_MOC_LITERAL(4, 37, 16), // "sendSelectedFile"
QT_MOC_LITERAL(5, 54, 15), // "notSendAllFiles"
QT_MOC_LITERAL(6, 70, 19), // "notSendSelectedFile"
QT_MOC_LITERAL(7, 90, 22), // "originSelectionChanged"
QT_MOC_LITERAL(8, 113, 27), // "destinationSelectionChanged"
QT_MOC_LITERAL(9, 141, 20), // "updateTargetFilePath"
QT_MOC_LITERAL(10, 162, 24), // "createFolderStateChanged"
QT_MOC_LITERAL(11, 187, 25), // "copyAlbumFileStateChanged"
QT_MOC_LITERAL(12, 213, 20) // "albumNameTextChanged"

    },
    "SendFilesDialog\0browse\0\0sendAllFiles\0"
    "sendSelectedFile\0notSendAllFiles\0"
    "notSendSelectedFile\0originSelectionChanged\0"
    "destinationSelectionChanged\0"
    "updateTargetFilePath\0createFolderStateChanged\0"
    "copyAlbumFileStateChanged\0"
    "albumNameTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendFilesDialog[] = {

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
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void SendFilesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendFilesDialog *_t = static_cast<SendFilesDialog *>(_o);
        switch (_id) {
        case 0: _t->browse(); break;
        case 1: _t->sendAllFiles(); break;
        case 2: _t->sendSelectedFile(); break;
        case 3: _t->notSendAllFiles(); break;
        case 4: _t->notSendSelectedFile(); break;
        case 5: _t->originSelectionChanged(); break;
        case 6: _t->destinationSelectionChanged(); break;
        case 7: _t->updateTargetFilePath(); break;
        case 8: _t->createFolderStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->copyAlbumFileStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->albumNameTextChanged(); break;
        default: ;
        }
    }
}

const QMetaObject SendFilesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendFilesDialog.data,
      qt_meta_data_SendFilesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendFilesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendFilesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendFilesDialog.stringdata))
        return static_cast<void*>(const_cast< SendFilesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendFilesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
