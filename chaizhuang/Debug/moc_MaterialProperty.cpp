/****************************************************************************
** Meta object code from reading C++ file 'MaterialProperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/MaterialProperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MaterialProperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MaterialProperty_t {
    QByteArrayData data[15];
    char stringdata[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaterialProperty_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaterialProperty_t qt_meta_stringdata_MaterialProperty = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MaterialProperty"
QT_MOC_LITERAL(1, 17, 15), // "materialUpdated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "GLC_Material*"
QT_MOC_LITERAL(4, 48, 18), // "changeAmbientColor"
QT_MOC_LITERAL(5, 67, 18), // "changeDiffuseColor"
QT_MOC_LITERAL(6, 86, 19), // "changeSpecularColor"
QT_MOC_LITERAL(7, 106, 19), // "changeEmissiveColor"
QT_MOC_LITERAL(8, 126, 18), // "setTextureFileName"
QT_MOC_LITERAL(9, 145, 22), // "textureFileNameChanged"
QT_MOC_LITERAL(10, 168, 12), // "textureState"
QT_MOC_LITERAL(11, 181, 5), // "apply"
QT_MOC_LITERAL(12, 187, 6), // "cancel"
QT_MOC_LITERAL(13, 194, 9), // "enableCmd"
QT_MOC_LITERAL(14, 204, 13) // "opacityChange"

    },
    "MaterialProperty\0materialUpdated\0\0"
    "GLC_Material*\0changeAmbientColor\0"
    "changeDiffuseColor\0changeSpecularColor\0"
    "changeEmissiveColor\0setTextureFileName\0"
    "textureFileNameChanged\0textureState\0"
    "apply\0cancel\0enableCmd\0opacityChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaterialProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MaterialProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaterialProperty *_t = static_cast<MaterialProperty *>(_o);
        switch (_id) {
        case 0: _t->materialUpdated((*reinterpret_cast< GLC_Material*(*)>(_a[1]))); break;
        case 1: _t->changeAmbientColor(); break;
        case 2: _t->changeDiffuseColor(); break;
        case 3: _t->changeSpecularColor(); break;
        case 4: _t->changeEmissiveColor(); break;
        case 5: _t->setTextureFileName(); break;
        case 6: _t->textureFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->textureState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->apply(); break;
        case 9: _t->cancel(); break;
        case 10: _t->enableCmd(); break;
        case 11: _t->opacityChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MaterialProperty::*_t)(GLC_Material * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaterialProperty::materialUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MaterialProperty::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_MaterialProperty.data,
      qt_meta_data_MaterialProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MaterialProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialProperty.stringdata))
        return static_cast<void*>(const_cast< MaterialProperty*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int MaterialProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MaterialProperty::materialUpdated(GLC_Material * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
