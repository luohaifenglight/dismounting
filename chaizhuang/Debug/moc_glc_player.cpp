/****************************************************************************
** Meta object code from reading C++ file 'glc_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glc_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glc_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_glc_player_t {
    QByteArrayData data[82];
    char stringdata[1417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_glc_player_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_glc_player_t qt_meta_stringdata_glc_player = {
    {
QT_MOC_LITERAL(0, 0, 10), // "glc_player"
QT_MOC_LITERAL(1, 11, 15), // "updateSelection"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "PointerViewInstanceHash*"
QT_MOC_LITERAL(4, 53, 13), // "hideInfoPanel"
QT_MOC_LITERAL(5, 67, 11), // "unselectAll"
QT_MOC_LITERAL(6, 79, 10), // "showOrHide"
QT_MOC_LITERAL(7, 90, 14), // "hideUnselected"
QT_MOC_LITERAL(8, 105, 7), // "showAll"
QT_MOC_LITERAL(9, 113, 16), // "swapVisibleSpace"
QT_MOC_LITERAL(10, 130, 17), // "updateProgressBar"
QT_MOC_LITERAL(11, 148, 26), // "updateProgressBarForExport"
QT_MOC_LITERAL(12, 175, 8), // "newModel"
QT_MOC_LITERAL(13, 184, 8), // "newAlbum"
QT_MOC_LITERAL(14, 193, 12), // "confirmation"
QT_MOC_LITERAL(15, 206, 4), // "open"
QT_MOC_LITERAL(16, 211, 9), // "openAlbum"
QT_MOC_LITERAL(17, 221, 18), // "openModelsFromPath"
QT_MOC_LITERAL(18, 240, 9), // "saveAlbum"
QT_MOC_LITERAL(19, 250, 11), // "saveAlbumAs"
QT_MOC_LITERAL(20, 262, 14), // "openRecentFile"
QT_MOC_LITERAL(21, 277, 15), // "openRecentAlbum"
QT_MOC_LITERAL(22, 293, 12), // "sendToFolder"
QT_MOC_LITERAL(23, 306, 11), // "exportToWeb"
QT_MOC_LITERAL(24, 318, 18), // "exportCurrentModel"
QT_MOC_LITERAL(25, 337, 16), // "instanceProperty"
QT_MOC_LITERAL(26, 354, 20), // "viewMaterialProperty"
QT_MOC_LITERAL(27, 375, 13), // "GLC_Material*"
QT_MOC_LITERAL(28, 389, 18), // "viewListOfMaterial"
QT_MOC_LITERAL(29, 408, 12), // "assignShader"
QT_MOC_LITERAL(30, 421, 7), // "reframe"
QT_MOC_LITERAL(31, 429, 10), // "selectMode"
QT_MOC_LITERAL(32, 440, 14), // "viewCenterMode"
QT_MOC_LITERAL(33, 455, 7), // "panMode"
QT_MOC_LITERAL(34, 463, 10), // "rotateMode"
QT_MOC_LITERAL(35, 474, 8), // "zoomMode"
QT_MOC_LITERAL(36, 483, 12), // "showSettings"
QT_MOC_LITERAL(37, 496, 10), // "fileOpened"
QT_MOC_LITERAL(38, 507, 14), // "loadFileFailed"
QT_MOC_LITERAL(39, 522, 22), // "currentFileItemChanged"
QT_MOC_LITERAL(40, 545, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(41, 562, 25), // "displayMessageInStatusBar"
QT_MOC_LITERAL(42, 588, 20), // "removeUnloadFileItem"
QT_MOC_LITERAL(43, 609, 17), // "removeItemOnError"
QT_MOC_LITERAL(44, 627, 18), // "startLoadingButton"
QT_MOC_LITERAL(45, 646, 17), // "stopLoadingButton"
QT_MOC_LITERAL(46, 664, 12), // "takeSnapShot"
QT_MOC_LITERAL(47, 677, 14), // "takeMultiShots"
QT_MOC_LITERAL(48, 692, 10), // "deleteItem"
QT_MOC_LITERAL(49, 703, 8), // "GLC_uint"
QT_MOC_LITERAL(50, 712, 31), // "albumManagementVisibilityToggle"
QT_MOC_LITERAL(51, 744, 32), // "instancePropertyVisibilityToggle"
QT_MOC_LITERAL(52, 777, 32), // "albumManagementVisibilityChanged"
QT_MOC_LITERAL(53, 810, 33), // "instancePropertyVisibilityCha..."
QT_MOC_LITERAL(54, 844, 30), // "cameraPropertyVisibilityToggle"
QT_MOC_LITERAL(55, 875, 31), // "cameraPropertyVisibilityChanged"
QT_MOC_LITERAL(56, 907, 33), // "selectionPropertyVisibilityTo..."
QT_MOC_LITERAL(57, 941, 34), // "selectionPropertyVisibilityCh..."
QT_MOC_LITERAL(58, 976, 19), // "pointsRenderingMode"
QT_MOC_LITERAL(59, 996, 22), // "wireframeRenderingMode"
QT_MOC_LITERAL(60, 1019, 20), // "shadingRenderingMode"
QT_MOC_LITERAL(61, 1040, 27), // "shadingAndWireRenderingMode"
QT_MOC_LITERAL(62, 1068, 11), // "aboutPlayer"
QT_MOC_LITERAL(63, 1080, 10), // "fullScreen"
QT_MOC_LITERAL(64, 1091, 4), // "help"
QT_MOC_LITERAL(65, 1096, 10), // "updateView"
QT_MOC_LITERAL(66, 1107, 19), // "getErrorInformation"
QT_MOC_LITERAL(67, 1127, 15), // "editLightDialog"
QT_MOC_LITERAL(68, 1143, 17), // "twoSidedLightning"
QT_MOC_LITERAL(69, 1161, 23), // "computeIconInBackBuffer"
QT_MOC_LITERAL(70, 1185, 12), // "forceCurrent"
QT_MOC_LITERAL(71, 1198, 18), // "returnToNormalMode"
QT_MOC_LITERAL(72, 1217, 12), // "chooseShader"
QT_MOC_LITERAL(73, 1230, 11), // "reloadModel"
QT_MOC_LITERAL(74, 1242, 26), // "updateCurrentEntryMaterial"
QT_MOC_LITERAL(75, 1269, 11), // "glInitialed"
QT_MOC_LITERAL(76, 1281, 29), // "changeCurrentMoverToTrackBall"
QT_MOC_LITERAL(77, 1311, 29), // "changeCurrentMoverToTurnTable"
QT_MOC_LITERAL(78, 1341, 23), // "changeCurrentMoverToFly"
QT_MOC_LITERAL(79, 1365, 27), // "changeCurrentProjectionMode"
QT_MOC_LITERAL(80, 1393, 12), // "showErrorLog"
QT_MOC_LITERAL(81, 1406, 10) // "sectioning"

    },
    "glc_player\0updateSelection\0\0"
    "PointerViewInstanceHash*\0hideInfoPanel\0"
    "unselectAll\0showOrHide\0hideUnselected\0"
    "showAll\0swapVisibleSpace\0updateProgressBar\0"
    "updateProgressBarForExport\0newModel\0"
    "newAlbum\0confirmation\0open\0openAlbum\0"
    "openModelsFromPath\0saveAlbum\0saveAlbumAs\0"
    "openRecentFile\0openRecentAlbum\0"
    "sendToFolder\0exportToWeb\0exportCurrentModel\0"
    "instanceProperty\0viewMaterialProperty\0"
    "GLC_Material*\0viewListOfMaterial\0"
    "assignShader\0reframe\0selectMode\0"
    "viewCenterMode\0panMode\0rotateMode\0"
    "zoomMode\0showSettings\0fileOpened\0"
    "loadFileFailed\0currentFileItemChanged\0"
    "QListWidgetItem*\0displayMessageInStatusBar\0"
    "removeUnloadFileItem\0removeItemOnError\0"
    "startLoadingButton\0stopLoadingButton\0"
    "takeSnapShot\0takeMultiShots\0deleteItem\0"
    "GLC_uint\0albumManagementVisibilityToggle\0"
    "instancePropertyVisibilityToggle\0"
    "albumManagementVisibilityChanged\0"
    "instancePropertyVisibilityChanged\0"
    "cameraPropertyVisibilityToggle\0"
    "cameraPropertyVisibilityChanged\0"
    "selectionPropertyVisibilityToggle\0"
    "selectionPropertyVisibilityChanged\0"
    "pointsRenderingMode\0wireframeRenderingMode\0"
    "shadingRenderingMode\0shadingAndWireRenderingMode\0"
    "aboutPlayer\0fullScreen\0help\0updateView\0"
    "getErrorInformation\0editLightDialog\0"
    "twoSidedLightning\0computeIconInBackBuffer\0"
    "forceCurrent\0returnToNormalMode\0"
    "chooseShader\0reloadModel\0"
    "updateCurrentEntryMaterial\0glInitialed\0"
    "changeCurrentMoverToTrackBall\0"
    "changeCurrentMoverToTurnTable\0"
    "changeCurrentMoverToFly\0"
    "changeCurrentProjectionMode\0showErrorLog\0"
    "sectioning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_glc_player[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  394,    2, 0x0a /* Public */,
       4,    0,  397,    2, 0x0a /* Public */,
       5,    0,  398,    2, 0x08 /* Private */,
       6,    0,  399,    2, 0x08 /* Private */,
       7,    0,  400,    2, 0x08 /* Private */,
       8,    0,  401,    2, 0x08 /* Private */,
       9,    0,  402,    2, 0x08 /* Private */,
      10,    1,  403,    2, 0x08 /* Private */,
      11,    1,  406,    2, 0x08 /* Private */,
      12,    0,  409,    2, 0x08 /* Private */,
      13,    1,  410,    2, 0x08 /* Private */,
      13,    0,  413,    2, 0x28 /* Private | MethodCloned */,
      15,    0,  414,    2, 0x08 /* Private */,
      16,    0,  415,    2, 0x08 /* Private */,
      17,    0,  416,    2, 0x08 /* Private */,
      18,    0,  417,    2, 0x08 /* Private */,
      19,    0,  418,    2, 0x08 /* Private */,
      20,    0,  419,    2, 0x08 /* Private */,
      21,    0,  420,    2, 0x08 /* Private */,
      22,    0,  421,    2, 0x08 /* Private */,
      23,    0,  422,    2, 0x08 /* Private */,
      24,    0,  423,    2, 0x08 /* Private */,
      25,    0,  424,    2, 0x08 /* Private */,
      26,    1,  425,    2, 0x08 /* Private */,
      28,    0,  428,    2, 0x08 /* Private */,
      29,    0,  429,    2, 0x08 /* Private */,
      30,    0,  430,    2, 0x08 /* Private */,
      31,    0,  431,    2, 0x08 /* Private */,
      32,    0,  432,    2, 0x08 /* Private */,
      33,    0,  433,    2, 0x08 /* Private */,
      34,    0,  434,    2, 0x08 /* Private */,
      35,    0,  435,    2, 0x08 /* Private */,
      36,    0,  436,    2, 0x08 /* Private */,
      37,    0,  437,    2, 0x08 /* Private */,
      38,    0,  438,    2, 0x08 /* Private */,
      39,    2,  439,    2, 0x08 /* Private */,
      41,    1,  444,    2, 0x08 /* Private */,
      42,    0,  447,    2, 0x08 /* Private */,
      43,    0,  448,    2, 0x08 /* Private */,
      44,    0,  449,    2, 0x08 /* Private */,
      45,    0,  450,    2, 0x08 /* Private */,
      46,    0,  451,    2, 0x08 /* Private */,
      47,    0,  452,    2, 0x08 /* Private */,
      48,    1,  453,    2, 0x08 /* Private */,
      50,    0,  456,    2, 0x08 /* Private */,
      51,    0,  457,    2, 0x08 /* Private */,
      52,    1,  458,    2, 0x08 /* Private */,
      53,    1,  461,    2, 0x08 /* Private */,
      54,    0,  464,    2, 0x08 /* Private */,
      55,    1,  465,    2, 0x08 /* Private */,
      56,    0,  468,    2, 0x08 /* Private */,
      57,    1,  469,    2, 0x08 /* Private */,
      58,    0,  472,    2, 0x08 /* Private */,
      59,    0,  473,    2, 0x08 /* Private */,
      60,    0,  474,    2, 0x08 /* Private */,
      61,    0,  475,    2, 0x08 /* Private */,
      62,    0,  476,    2, 0x08 /* Private */,
      63,    0,  477,    2, 0x08 /* Private */,
      64,    0,  478,    2, 0x08 /* Private */,
      65,    0,  479,    2, 0x08 /* Private */,
      66,    0,  480,    2, 0x08 /* Private */,
      67,    0,  481,    2, 0x08 /* Private */,
      68,    0,  482,    2, 0x08 /* Private */,
      69,    2,  483,    2, 0x08 /* Private */,
      69,    1,  488,    2, 0x28 /* Private | MethodCloned */,
      71,    0,  491,    2, 0x08 /* Private */,
      72,    0,  492,    2, 0x08 /* Private */,
      73,    1,  493,    2, 0x08 /* Private */,
      74,    1,  496,    2, 0x08 /* Private */,
      75,    0,  499,    2, 0x08 /* Private */,
      76,    0,  500,    2, 0x08 /* Private */,
      77,    0,  501,    2, 0x08 /* Private */,
      78,    0,  502,    2, 0x08 /* Private */,
      79,    0,  503,    2, 0x08 /* Private */,
      80,    0,  504,    2, 0x08 /* Private */,
      81,    0,  505,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   14,
    QMetaType::Bool,
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
    QMetaType::Void, 0x80000000 | 27,    2,
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
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,   70,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void glc_player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        glc_player *_t = static_cast<glc_player *>(_o);
        switch (_id) {
        case 0: _t->updateSelection((*reinterpret_cast< PointerViewInstanceHash*(*)>(_a[1]))); break;
        case 1: _t->hideInfoPanel(); break;
        case 2: _t->unselectAll(); break;
        case 3: _t->showOrHide(); break;
        case 4: _t->hideUnselected(); break;
        case 5: _t->showAll(); break;
        case 6: _t->swapVisibleSpace(); break;
        case 7: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateProgressBarForExport((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->newModel(); break;
        case 10: { bool _r = _t->newAlbum((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->newAlbum();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->open(); break;
        case 13: _t->openAlbum(); break;
        case 14: _t->openModelsFromPath(); break;
        case 15: _t->saveAlbum(); break;
        case 16: _t->saveAlbumAs(); break;
        case 17: _t->openRecentFile(); break;
        case 18: _t->openRecentAlbum(); break;
        case 19: _t->sendToFolder(); break;
        case 20: _t->exportToWeb(); break;
        case 21: _t->exportCurrentModel(); break;
        case 22: _t->instanceProperty(); break;
        case 23: _t->viewMaterialProperty((*reinterpret_cast< GLC_Material*(*)>(_a[1]))); break;
        case 24: _t->viewListOfMaterial(); break;
        case 25: _t->assignShader(); break;
        case 26: _t->reframe(); break;
        case 27: _t->selectMode(); break;
        case 28: _t->viewCenterMode(); break;
        case 29: _t->panMode(); break;
        case 30: _t->rotateMode(); break;
        case 31: _t->zoomMode(); break;
        case 32: _t->showSettings(); break;
        case 33: _t->fileOpened(); break;
        case 34: _t->loadFileFailed(); break;
        case 35: _t->currentFileItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 36: _t->displayMessageInStatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->removeUnloadFileItem(); break;
        case 38: _t->removeItemOnError(); break;
        case 39: _t->startLoadingButton(); break;
        case 40: _t->stopLoadingButton(); break;
        case 41: _t->takeSnapShot(); break;
        case 42: _t->takeMultiShots(); break;
        case 43: _t->deleteItem((*reinterpret_cast< const GLC_uint(*)>(_a[1]))); break;
        case 44: _t->albumManagementVisibilityToggle(); break;
        case 45: _t->instancePropertyVisibilityToggle(); break;
        case 46: _t->albumManagementVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->instancePropertyVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->cameraPropertyVisibilityToggle(); break;
        case 49: _t->cameraPropertyVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->selectionPropertyVisibilityToggle(); break;
        case 51: _t->selectionPropertyVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->pointsRenderingMode(); break;
        case 53: _t->wireframeRenderingMode(); break;
        case 54: _t->shadingRenderingMode(); break;
        case 55: _t->shadingAndWireRenderingMode(); break;
        case 56: _t->aboutPlayer(); break;
        case 57: _t->fullScreen(); break;
        case 58: _t->help(); break;
        case 59: _t->updateView(); break;
        case 60: _t->getErrorInformation(); break;
        case 61: _t->editLightDialog(); break;
        case 62: _t->twoSidedLightning(); break;
        case 63: _t->computeIconInBackBuffer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->computeIconInBackBuffer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->returnToNormalMode(); break;
        case 66: _t->chooseShader(); break;
        case 67: _t->reloadModel((*reinterpret_cast< GLC_uint(*)>(_a[1]))); break;
        case 68: _t->updateCurrentEntryMaterial((*reinterpret_cast< GLC_Material*(*)>(_a[1]))); break;
        case 69: _t->glInitialed(); break;
        case 70: _t->changeCurrentMoverToTrackBall(); break;
        case 71: _t->changeCurrentMoverToTurnTable(); break;
        case 72: _t->changeCurrentMoverToFly(); break;
        case 73: _t->changeCurrentProjectionMode(); break;
        case 74: _t->showErrorLog(); break;
        case 75: _t->sectioning(); break;
        default: ;
        }
    }
}

const QMetaObject glc_player::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_glc_player.data,
      qt_meta_data_glc_player,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *glc_player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *glc_player::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_glc_player.stringdata))
        return static_cast<void*>(const_cast< glc_player*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int glc_player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 76;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
