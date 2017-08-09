/****************************************************************************
** Meta object code from reading C++ file 'Disassemblymanagerview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/Disassemblymanagerview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Disassemblymanagerview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Disassemblymanagerview_t {
    QByteArrayData data[8];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Disassemblymanagerview_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Disassemblymanagerview_t qt_meta_stringdata_Disassemblymanagerview = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Disassemblymanagerview"
QT_MOC_LITERAL(1, 23, 7), // "showAll"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "refreshModelView"
QT_MOC_LITERAL(4, 49, 20), // "modelListCellClicked"
QT_MOC_LITERAL(5, 70, 3), // "row"
QT_MOC_LITERAL(6, 74, 6), // "column"
QT_MOC_LITERAL(7, 81, 26) // "modelDetailListCellClicked"

    },
    "Disassemblymanagerview\0showAll\0\0"
    "refreshModelView\0modelListCellClicked\0"
    "row\0column\0modelDetailListCellClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Disassemblymanagerview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x08 /* Private */,
       7,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

void Disassemblymanagerview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Disassemblymanagerview *_t = static_cast<Disassemblymanagerview *>(_o);
        switch (_id) {
        case 0: _t->showAll(); break;
        case 1: _t->refreshModelView(); break;
        case 2: _t->modelListCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->modelDetailListCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Disassemblymanagerview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Disassemblymanagerview::showAll)) {
                *result = 0;
            }
        }
        {
            typedef void (Disassemblymanagerview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Disassemblymanagerview::refreshModelView)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Disassemblymanagerview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Disassemblymanagerview.data,
      qt_meta_data_Disassemblymanagerview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Disassemblymanagerview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Disassemblymanagerview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Disassemblymanagerview.stringdata))
        return static_cast<void*>(const_cast< Disassemblymanagerview*>(this));
    return QWidget::qt_metacast(_clname);
}

int Disassemblymanagerview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Disassemblymanagerview::showAll()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Disassemblymanagerview::refreshModelView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
