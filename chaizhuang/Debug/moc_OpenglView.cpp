/****************************************************************************
** Meta object code from reading C++ file 'OpenglView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../opengl_view/OpenglView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpenglView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenglView_t {
    QByteArrayData data[38];
    char stringdata[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenglView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenglView_t qt_meta_stringdata_OpenglView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OpenglView"
QT_MOC_LITERAL(1, 11, 14), // "currentQuantum"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "updateSelection"
QT_MOC_LITERAL(4, 43, 24), // "PointerViewInstanceHash*"
QT_MOC_LITERAL(5, 68, 11), // "unselectAll"
QT_MOC_LITERAL(6, 80, 13), // "hideInfoPanel"
QT_MOC_LITERAL(7, 94, 11), // "viewChanged"
QT_MOC_LITERAL(8, 106, 11), // "glInitialed"
QT_MOC_LITERAL(9, 118, 15), // "changeDefaultUp"
QT_MOC_LITERAL(10, 134, 8), // "isoView1"
QT_MOC_LITERAL(11, 143, 6), // "motion"
QT_MOC_LITERAL(12, 150, 8), // "isoView2"
QT_MOC_LITERAL(13, 159, 8), // "isoView3"
QT_MOC_LITERAL(14, 168, 8), // "isoView4"
QT_MOC_LITERAL(15, 177, 9), // "frontView"
QT_MOC_LITERAL(16, 187, 9), // "rightView"
QT_MOC_LITERAL(17, 197, 7), // "topView"
QT_MOC_LITERAL(18, 205, 6), // "zoomIn"
QT_MOC_LITERAL(19, 212, 7), // "zoomOut"
QT_MOC_LITERAL(20, 220, 9), // "selectAll"
QT_MOC_LITERAL(21, 230, 15), // "unselectAllSlot"
QT_MOC_LITERAL(22, 246, 18), // "reframeOnSelection"
QT_MOC_LITERAL(23, 265, 14), // "selectInstance"
QT_MOC_LITERAL(24, 280, 8), // "GLC_uint"
QT_MOC_LITERAL(25, 289, 29), // "changeCurrentMoverToTrackBall"
QT_MOC_LITERAL(26, 319, 29), // "changeCurrentMoverToTurnTable"
QT_MOC_LITERAL(27, 349, 23), // "changeCurrentMoverToFly"
QT_MOC_LITERAL(28, 373, 19), // "toggleOctreeDisplay"
QT_MOC_LITERAL(29, 393, 10), // "sectioning"
QT_MOC_LITERAL(30, 404, 8), // "isActive"
QT_MOC_LITERAL(31, 413, 20), // "showHideSectionPlane"
QT_MOC_LITERAL(32, 434, 14), // "sectionUpdated"
QT_MOC_LITERAL(33, 449, 12), // "toPerpective"
QT_MOC_LITERAL(34, 462, 10), // "toParallel"
QT_MOC_LITERAL(35, 473, 19), // "updateLightPosition"
QT_MOC_LITERAL(36, 493, 9), // "editLight"
QT_MOC_LITERAL(37, 503, 5) // "index"

    },
    "OpenglView\0currentQuantum\0\0updateSelection\0"
    "PointerViewInstanceHash*\0unselectAll\0"
    "hideInfoPanel\0viewChanged\0glInitialed\0"
    "changeDefaultUp\0isoView1\0motion\0"
    "isoView2\0isoView3\0isoView4\0frontView\0"
    "rightView\0topView\0zoomIn\0zoomOut\0"
    "selectAll\0unselectAllSlot\0reframeOnSelection\0"
    "selectInstance\0GLC_uint\0"
    "changeCurrentMoverToTrackBall\0"
    "changeCurrentMoverToTurnTable\0"
    "changeCurrentMoverToFly\0toggleOctreeDisplay\0"
    "sectioning\0isActive\0showHideSectionPlane\0"
    "sectionUpdated\0toPerpective\0toParallel\0"
    "updateLightPosition\0editLight\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenglView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       3,    1,  177,    2, 0x06 /* Public */,
       5,    0,  180,    2, 0x06 /* Public */,
       6,    0,  181,    2, 0x06 /* Public */,
       7,    0,  182,    2, 0x06 /* Public */,
       8,    0,  183,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  184,    2, 0x0a /* Public */,
      10,    1,  185,    2, 0x0a /* Public */,
      10,    0,  188,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  189,    2, 0x0a /* Public */,
      13,    0,  190,    2, 0x0a /* Public */,
      14,    0,  191,    2, 0x0a /* Public */,
      15,    0,  192,    2, 0x0a /* Public */,
      16,    0,  193,    2, 0x0a /* Public */,
      17,    0,  194,    2, 0x0a /* Public */,
      18,    0,  195,    2, 0x0a /* Public */,
      19,    0,  196,    2, 0x0a /* Public */,
      20,    0,  197,    2, 0x0a /* Public */,
      21,    0,  198,    2, 0x0a /* Public */,
      22,    0,  199,    2, 0x0a /* Public */,
      23,    1,  200,    2, 0x0a /* Public */,
      25,    0,  203,    2, 0x0a /* Public */,
      26,    0,  204,    2, 0x0a /* Public */,
      27,    0,  205,    2, 0x0a /* Public */,
      28,    1,  206,    2, 0x0a /* Public */,
      29,    1,  209,    2, 0x0a /* Public */,
      31,    0,  212,    2, 0x0a /* Public */,
      32,    0,  213,    2, 0x0a /* Public */,
      33,    0,  214,    2, 0x0a /* Public */,
      34,    0,  215,    2, 0x0a /* Public */,
      35,    0,  216,    2, 0x0a /* Public */,
      36,    1,  217,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
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
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,

       0        // eod
};

void OpenglView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenglView *_t = static_cast<OpenglView *>(_o);
        switch (_id) {
        case 0: _t->currentQuantum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateSelection((*reinterpret_cast< PointerViewInstanceHash*(*)>(_a[1]))); break;
        case 2: _t->unselectAll(); break;
        case 3: _t->hideInfoPanel(); break;
        case 4: _t->viewChanged(); break;
        case 5: _t->glInitialed(); break;
        case 6: _t->changeDefaultUp(); break;
        case 7: _t->isoView1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->isoView1(); break;
        case 9: _t->isoView2(); break;
        case 10: _t->isoView3(); break;
        case 11: _t->isoView4(); break;
        case 12: _t->frontView(); break;
        case 13: _t->rightView(); break;
        case 14: _t->topView(); break;
        case 15: _t->zoomIn(); break;
        case 16: _t->zoomOut(); break;
        case 17: _t->selectAll(); break;
        case 18: _t->unselectAllSlot(); break;
        case 19: _t->reframeOnSelection(); break;
        case 20: _t->selectInstance((*reinterpret_cast< const GLC_uint(*)>(_a[1]))); break;
        case 21: _t->changeCurrentMoverToTrackBall(); break;
        case 22: _t->changeCurrentMoverToTurnTable(); break;
        case 23: _t->changeCurrentMoverToFly(); break;
        case 24: _t->toggleOctreeDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->sectioning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->showHideSectionPlane(); break;
        case 27: _t->sectionUpdated(); break;
        case 28: _t->toPerpective(); break;
        case 29: _t->toParallel(); break;
        case 30: _t->updateLightPosition(); break;
        case 31: _t->editLight((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenglView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::currentQuantum)) {
                *result = 0;
            }
        }
        {
            typedef void (OpenglView::*_t)(PointerViewInstanceHash * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::updateSelection)) {
                *result = 1;
            }
        }
        {
            typedef void (OpenglView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::unselectAll)) {
                *result = 2;
            }
        }
        {
            typedef void (OpenglView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::hideInfoPanel)) {
                *result = 3;
            }
        }
        {
            typedef void (OpenglView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::viewChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (OpenglView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglView::glInitialed)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject OpenglView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_OpenglView.data,
      qt_meta_data_OpenglView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenglView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenglView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenglView.stringdata))
        return static_cast<void*>(const_cast< OpenglView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int OpenglView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void OpenglView::currentQuantum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenglView::updateSelection(PointerViewInstanceHash * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenglView::unselectAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OpenglView::hideInfoPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void OpenglView::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void OpenglView::glInitialed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
