/****************************************************************************
** Meta object code from reading C++ file 'AlbumManagerView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_class/AlbumManagerView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlbumManagerView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlbumManagerView_t {
    QByteArrayData data[26];
    char stringdata[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumManagerView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumManagerView_t qt_meta_stringdata_AlbumManagerView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AlbumManagerView"
QT_MOC_LITERAL(1, 17, 20), // "removeUnloadFileItem"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "removeOnErrorModels"
QT_MOC_LITERAL(4, 59, 12), // "startLoading"
QT_MOC_LITERAL(5, 72, 11), // "stopLoading"
QT_MOC_LITERAL(6, 84, 19), // "currentModelChanged"
QT_MOC_LITERAL(7, 104, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 121, 14), // "displayMessage"
QT_MOC_LITERAL(9, 136, 11), // "deleteModel"
QT_MOC_LITERAL(10, 148, 8), // "GLC_uint"
QT_MOC_LITERAL(11, 157, 17), // "updateProgressBar"
QT_MOC_LITERAL(12, 175, 23), // "computeIconInBackBuffer"
QT_MOC_LITERAL(13, 199, 8), // "newAlbum"
QT_MOC_LITERAL(14, 208, 24), // "reloadCurrentModelSignal"
QT_MOC_LITERAL(15, 233, 18), // "refreshModelsIcons"
QT_MOC_LITERAL(16, 252, 15), // "modelProperties"
QT_MOC_LITERAL(17, 268, 16), // "modelItemClicked"
QT_MOC_LITERAL(18, 285, 18), // "removeUnloadModels"
QT_MOC_LITERAL(19, 304, 19), // "removeModelsOnError"
QT_MOC_LITERAL(20, 324, 18), // "beforeStartLoading"
QT_MOC_LITERAL(21, 343, 17), // "beforeStopLoading"
QT_MOC_LITERAL(22, 361, 18), // "deleteCurrentModel"
QT_MOC_LITERAL(23, 380, 18), // "reloadCurrentModel"
QT_MOC_LITERAL(24, 399, 23), // "currentModelChangedSlot"
QT_MOC_LITERAL(25, 423, 19) // "getErrorInformation"

    },
    "AlbumManagerView\0removeUnloadFileItem\0"
    "\0removeOnErrorModels\0startLoading\0"
    "stopLoading\0currentModelChanged\0"
    "QListWidgetItem*\0displayMessage\0"
    "deleteModel\0GLC_uint\0updateProgressBar\0"
    "computeIconInBackBuffer\0newAlbum\0"
    "reloadCurrentModelSignal\0refreshModelsIcons\0"
    "modelProperties\0modelItemClicked\0"
    "removeUnloadModels\0removeModelsOnError\0"
    "beforeStartLoading\0beforeStopLoading\0"
    "deleteCurrentModel\0reloadCurrentModel\0"
    "currentModelChangedSlot\0getErrorInformation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumManagerView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    2,  128,    2, 0x06 /* Public */,
       8,    1,  133,    2, 0x06 /* Public */,
       9,    1,  136,    2, 0x06 /* Public */,
      11,    1,  139,    2, 0x06 /* Public */,
      12,    1,  142,    2, 0x06 /* Public */,
      13,    1,  145,    2, 0x06 /* Public */,
      14,    1,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  151,    2, 0x0a /* Public */,
      16,    0,  152,    2, 0x0a /* Public */,
      17,    1,  153,    2, 0x08 /* Private */,
      18,    0,  156,    2, 0x08 /* Private */,
      19,    0,  157,    2, 0x08 /* Private */,
      20,    0,  158,    2, 0x08 /* Private */,
      21,    0,  159,    2, 0x08 /* Private */,
      22,    0,  160,    2, 0x08 /* Private */,
      23,    0,  161,    2, 0x08 /* Private */,
      24,    2,  162,    2, 0x08 /* Private */,
      25,    0,  167,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Void,

       0        // eod
};

void AlbumManagerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlbumManagerView *_t = static_cast<AlbumManagerView *>(_o);
        switch (_id) {
        case 0: _t->removeUnloadFileItem(); break;
        case 1: _t->removeOnErrorModels(); break;
        case 2: _t->startLoading(); break;
        case 3: _t->stopLoading(); break;
        case 4: _t->currentModelChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 5: _t->displayMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->deleteModel((*reinterpret_cast< GLC_uint(*)>(_a[1]))); break;
        case 7: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->computeIconInBackBuffer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->newAlbum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->reloadCurrentModelSignal((*reinterpret_cast< GLC_uint(*)>(_a[1]))); break;
        case 11: _t->refreshModelsIcons(); break;
        case 12: _t->modelProperties(); break;
        case 13: _t->modelItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->removeUnloadModels(); break;
        case 15: _t->removeModelsOnError(); break;
        case 16: _t->beforeStartLoading(); break;
        case 17: _t->beforeStopLoading(); break;
        case 18: _t->deleteCurrentModel(); break;
        case 19: _t->reloadCurrentModel(); break;
        case 20: _t->currentModelChangedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 21: _t->getErrorInformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlbumManagerView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::removeUnloadFileItem)) {
                *result = 0;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::removeOnErrorModels)) {
                *result = 1;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::startLoading)) {
                *result = 2;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::stopLoading)) {
                *result = 3;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(QListWidgetItem * , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::currentModelChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::displayMessage)) {
                *result = 5;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(GLC_uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::deleteModel)) {
                *result = 6;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::updateProgressBar)) {
                *result = 7;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::computeIconInBackBuffer)) {
                *result = 8;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::newAlbum)) {
                *result = 9;
            }
        }
        {
            typedef void (AlbumManagerView::*_t)(GLC_uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumManagerView::reloadCurrentModelSignal)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject AlbumManagerView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AlbumManagerView.data,
      qt_meta_data_AlbumManagerView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlbumManagerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumManagerView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumManagerView.stringdata))
        return static_cast<void*>(const_cast< AlbumManagerView*>(this));
    return QWidget::qt_metacast(_clname);
}

int AlbumManagerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void AlbumManagerView::removeUnloadFileItem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AlbumManagerView::removeOnErrorModels()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AlbumManagerView::startLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AlbumManagerView::stopLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void AlbumManagerView::currentModelChanged(QListWidgetItem * _t1, QListWidgetItem * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AlbumManagerView::displayMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AlbumManagerView::deleteModel(GLC_uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AlbumManagerView::updateProgressBar(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AlbumManagerView::computeIconInBackBuffer(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AlbumManagerView::newAlbum(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AlbumManagerView::reloadCurrentModelSignal(GLC_uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
