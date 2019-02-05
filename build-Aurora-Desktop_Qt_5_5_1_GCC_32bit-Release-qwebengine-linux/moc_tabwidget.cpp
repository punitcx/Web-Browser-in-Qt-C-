/****************************************************************************
** Meta object code from reading C++ file 'tabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Aurora/tabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TabBar_t {
    QByteArrayData data[18];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabBar_t qt_meta_stringdata_TabBar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "TabBar"
QT_MOC_LITERAL(1, 7, 6), // "newTab"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 8), // "cloneTab"
QT_MOC_LITERAL(4, 24, 5), // "index"
QT_MOC_LITERAL(5, 30, 8), // "closeTab"
QT_MOC_LITERAL(6, 39, 13), // "closeLeftTabs"
QT_MOC_LITERAL(7, 53, 14), // "closeRightTabs"
QT_MOC_LITERAL(8, 68, 14), // "closeOtherTabs"
QT_MOC_LITERAL(9, 83, 9), // "reloadTab"
QT_MOC_LITERAL(10, 93, 12), // "reopenclosed"
QT_MOC_LITERAL(11, 106, 13), // "reloadAllTabs"
QT_MOC_LITERAL(12, 120, 16), // "tabMoveRequested"
QT_MOC_LITERAL(13, 137, 9), // "fromIndex"
QT_MOC_LITERAL(14, 147, 7), // "toIndex"
QT_MOC_LITERAL(15, 155, 18), // "selectTabShortcuts"
QT_MOC_LITERAL(16, 174, 20), // "contextMenuRequested"
QT_MOC_LITERAL(17, 195, 8) // "position"

    },
    "TabBar\0newTab\0\0cloneTab\0index\0closeTab\0"
    "closeLeftTabs\0closeRightTabs\0"
    "closeOtherTabs\0reloadTab\0reopenclosed\0"
    "reloadAllTabs\0tabMoveRequested\0fromIndex\0"
    "toIndex\0selectTabShortcuts\0"
    "contextMenuRequested\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       6,    1,  111,    2, 0x06 /* Public */,
       7,    1,  114,    2, 0x06 /* Public */,
       8,    1,  117,    2, 0x06 /* Public */,
       9,    1,  120,    2, 0x06 /* Public */,
      10,    0,  123,    2, 0x06 /* Public */,
      11,    0,  124,    2, 0x06 /* Public */,
      12,    2,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  130,    2, 0x08 /* Private */,
       3,    0,  131,    2, 0x08 /* Private */,
       5,    0,  132,    2, 0x08 /* Private */,
       6,    0,  133,    2, 0x08 /* Private */,
       7,    0,  134,    2, 0x08 /* Private */,
       8,    0,  135,    2, 0x08 /* Private */,
       9,    0,  136,    2, 0x08 /* Private */,
      16,    1,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   17,

       0        // eod
};

void TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabBar *_t = static_cast<TabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTab(); break;
        case 1: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeLeftTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeRightTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->reopenclosed(); break;
        case 8: _t->reloadAllTabs(); break;
        case 9: _t->tabMoveRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->selectTabShortcuts(); break;
        case 11: _t->cloneTab(); break;
        case 12: _t->closeTab(); break;
        case 13: _t->closeLeftTabs(); break;
        case 14: _t->closeRightTabs(); break;
        case 15: _t->closeOtherTabs(); break;
        case 16: _t->reloadTab(); break;
        case 17: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::newTab)) {
                *result = 0;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::cloneTab)) {
                *result = 1;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeTab)) {
                *result = 2;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeLeftTabs)) {
                *result = 3;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeRightTabs)) {
                *result = 4;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeOtherTabs)) {
                *result = 5;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::reloadTab)) {
                *result = 6;
            }
        }
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::reopenclosed)) {
                *result = 7;
            }
        }
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::reloadAllTabs)) {
                *result = 8;
            }
        }
        {
            typedef void (TabBar::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::tabMoveRequested)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_TabBar.data,
      qt_meta_data_TabBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TabBar.stringdata0))
        return static_cast<void*>(const_cast< TabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TabBar::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TabBar::cloneTab(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabBar::closeTab(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabBar::closeLeftTabs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TabBar::closeRightTabs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabBar::closeOtherTabs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TabBar::reloadTab(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TabBar::reopenclosed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void TabBar::reloadAllTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void TabBar::tabMoveRequested(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
struct qt_meta_stringdata_tabwidget_t {
    QByteArrayData data[58];
    char stringdata0[667];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tabwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tabwidget_t qt_meta_stringdata_tabwidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tabwidget"
QT_MOC_LITERAL(1, 10, 12), // "tlinkhovered"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "url"
QT_MOC_LITERAL(4, 28, 14), // "tstatusmessage"
QT_MOC_LITERAL(5, 43, 7), // "message"
QT_MOC_LITERAL(6, 51, 14), // "setwindowtitle"
QT_MOC_LITERAL(7, 66, 5), // "title"
QT_MOC_LITERAL(8, 72, 9), // "addrecent"
QT_MOC_LITERAL(9, 82, 8), // "WebView*"
QT_MOC_LITERAL(10, 91, 7), // "webview"
QT_MOC_LITERAL(11, 99, 8), // "bookmark"
QT_MOC_LITERAL(12, 108, 6), // "saveas"
QT_MOC_LITERAL(13, 115, 5), // "print"
QT_MOC_LITERAL(14, 121, 11), // "copyaddress"
QT_MOC_LITERAL(15, 133, 10), // "viewsource"
QT_MOC_LITERAL(16, 144, 14), // "inspectelement"
QT_MOC_LITERAL(17, 159, 6), // "newTab"
QT_MOC_LITERAL(18, 166, 8), // "makecurr"
QT_MOC_LITERAL(19, 175, 6), // "zoomin"
QT_MOC_LITERAL(20, 182, 7), // "zoomout"
QT_MOC_LITERAL(21, 190, 10), // "zoomnormal"
QT_MOC_LITERAL(22, 201, 12), // "zoomtextonly"
QT_MOC_LITERAL(23, 214, 6), // "enable"
QT_MOC_LITERAL(24, 221, 10), // "basicstyle"
QT_MOC_LITERAL(25, 232, 7), // "nostyle"
QT_MOC_LITERAL(26, 240, 12), // "editcontents"
QT_MOC_LITERAL(27, 253, 9), // "bkclicked"
QT_MOC_LITERAL(28, 263, 9), // "fwclicked"
QT_MOC_LITERAL(29, 273, 13), // "reloadclicked"
QT_MOC_LITERAL(30, 287, 8), // "setvalue"
QT_MOC_LITERAL(31, 296, 1), // "x"
QT_MOC_LITERAL(32, 298, 18), // "historyitemclicked"
QT_MOC_LITERAL(33, 317, 19), // "loadUrlInCurrentTab"
QT_MOC_LITERAL(34, 337, 8), // "cloneTab"
QT_MOC_LITERAL(35, 346, 5), // "index"
QT_MOC_LITERAL(36, 352, 11), // "closeTabsho"
QT_MOC_LITERAL(37, 364, 8), // "closeTab"
QT_MOC_LITERAL(38, 373, 13), // "closeLeftTabs"
QT_MOC_LITERAL(39, 387, 14), // "closeRightTabs"
QT_MOC_LITERAL(40, 402, 14), // "closeOtherTabs"
QT_MOC_LITERAL(41, 417, 9), // "reloadTab"
QT_MOC_LITERAL(42, 427, 12), // "reloadTabsho"
QT_MOC_LITERAL(43, 440, 12), // "reopenclosed"
QT_MOC_LITERAL(44, 453, 13), // "reloadAllTabs"
QT_MOC_LITERAL(45, 467, 7), // "nextTab"
QT_MOC_LITERAL(46, 475, 11), // "previousTab"
QT_MOC_LITERAL(47, 487, 14), // "currentChanged"
QT_MOC_LITERAL(48, 502, 18), // "webViewLoadStarted"
QT_MOC_LITERAL(49, 521, 19), // "webViewLoadFinished"
QT_MOC_LITERAL(50, 541, 18), // "webViewIconChanged"
QT_MOC_LITERAL(51, 560, 19), // "webViewTitleChanged"
QT_MOC_LITERAL(52, 580, 17), // "webViewUrlChanged"
QT_MOC_LITERAL(53, 598, 21), // "lineEditReturnPressed"
QT_MOC_LITERAL(54, 620, 20), // "windowCloseRequested"
QT_MOC_LITERAL(55, 641, 7), // "moveTab"
QT_MOC_LITERAL(56, 649, 9), // "fromIndex"
QT_MOC_LITERAL(57, 659, 7) // "toIndex"

    },
    "tabwidget\0tlinkhovered\0\0url\0tstatusmessage\0"
    "message\0setwindowtitle\0title\0addrecent\0"
    "WebView*\0webview\0bookmark\0saveas\0print\0"
    "copyaddress\0viewsource\0inspectelement\0"
    "newTab\0makecurr\0zoomin\0zoomout\0"
    "zoomnormal\0zoomtextonly\0enable\0"
    "basicstyle\0nostyle\0editcontents\0"
    "bkclicked\0fwclicked\0reloadclicked\0"
    "setvalue\0x\0historyitemclicked\0"
    "loadUrlInCurrentTab\0cloneTab\0index\0"
    "closeTabsho\0closeTab\0closeLeftTabs\0"
    "closeRightTabs\0closeOtherTabs\0reloadTab\0"
    "reloadTabsho\0reopenclosed\0reloadAllTabs\0"
    "nextTab\0previousTab\0currentChanged\0"
    "webViewLoadStarted\0webViewLoadFinished\0"
    "webViewIconChanged\0webViewTitleChanged\0"
    "webViewUrlChanged\0lineEditReturnPressed\0"
    "windowCloseRequested\0moveTab\0fromIndex\0"
    "toIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tabwidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  269,    2, 0x06 /* Public */,
       4,    1,  272,    2, 0x06 /* Public */,
       6,    1,  275,    2, 0x06 /* Public */,
       8,    1,  278,    2, 0x06 /* Public */,
      11,    0,  281,    2, 0x06 /* Public */,
      12,    0,  282,    2, 0x06 /* Public */,
      13,    0,  283,    2, 0x06 /* Public */,
      14,    0,  284,    2, 0x06 /* Public */,
      15,    0,  285,    2, 0x06 /* Public */,
      16,    0,  286,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    2,  287,    2, 0x0a /* Public */,
      17,    1,  292,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  295,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  296,    2, 0x0a /* Public */,
      20,    1,  299,    2, 0x0a /* Public */,
      21,    1,  302,    2, 0x0a /* Public */,
      22,    1,  305,    2, 0x0a /* Public */,
      24,    1,  308,    2, 0x0a /* Public */,
      25,    1,  311,    2, 0x0a /* Public */,
      26,    1,  314,    2, 0x0a /* Public */,
      27,    1,  317,    2, 0x0a /* Public */,
      28,    1,  320,    2, 0x0a /* Public */,
      29,    1,  323,    2, 0x0a /* Public */,
      29,    0,  326,    2, 0x0a /* Public */,
      30,    1,  327,    2, 0x0a /* Public */,
      32,    0,  330,    2, 0x0a /* Public */,
      33,    1,  331,    2, 0x0a /* Public */,
      34,    1,  334,    2, 0x0a /* Public */,
      34,    0,  337,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  338,    2, 0x0a /* Public */,
      37,    1,  339,    2, 0x0a /* Public */,
      37,    0,  342,    2, 0x2a /* Public | MethodCloned */,
      38,    1,  343,    2, 0x0a /* Public */,
      39,    1,  346,    2, 0x0a /* Public */,
      40,    1,  349,    2, 0x0a /* Public */,
      41,    1,  352,    2, 0x0a /* Public */,
      41,    0,  355,    2, 0x2a /* Public | MethodCloned */,
      42,    0,  356,    2, 0x0a /* Public */,
      43,    0,  357,    2, 0x0a /* Public */,
      44,    0,  358,    2, 0x0a /* Public */,
      45,    0,  359,    2, 0x0a /* Public */,
      46,    0,  360,    2, 0x0a /* Public */,
      47,    1,  361,    2, 0x08 /* Private */,
      48,    0,  364,    2, 0x08 /* Private */,
      49,    0,  365,    2, 0x08 /* Private */,
      50,    0,  366,    2, 0x08 /* Private */,
      51,    1,  367,    2, 0x08 /* Private */,
      52,    1,  370,    2, 0x08 /* Private */,
      53,    0,  373,    2, 0x08 /* Private */,
      54,    0,  374,    2, 0x08 /* Private */,
      55,    2,  375,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 9, QMetaType::Bool, QMetaType::QUrl,   18,    3,
    0x80000000 | 9, QMetaType::Bool,   18,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   56,   57,

       0        // eod
};

void tabwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tabwidget *_t = static_cast<tabwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tlinkhovered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->tstatusmessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setwindowtitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addrecent((*reinterpret_cast< WebView*(*)>(_a[1]))); break;
        case 4: _t->bookmark(); break;
        case 5: _t->saveas(); break;
        case 6: _t->print(); break;
        case 7: _t->copyaddress(); break;
        case 8: _t->viewsource(); break;
        case 9: _t->inspectelement(); break;
        case 10: { WebView* _r = _t->newTab((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< WebView**>(_a[0]) = _r; }  break;
        case 11: { WebView* _r = _t->newTab((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WebView**>(_a[0]) = _r; }  break;
        case 12: { WebView* _r = _t->newTab();
            if (_a[0]) *reinterpret_cast< WebView**>(_a[0]) = _r; }  break;
        case 13: _t->zoomin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->zoomout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->zoomnormal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->zoomtextonly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->basicstyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->nostyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->editcontents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->bkclicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->fwclicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->reloadclicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->reloadclicked(); break;
        case 24: _t->setvalue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->historyitemclicked(); break;
        case 26: _t->loadUrlInCurrentTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 27: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->cloneTab(); break;
        case 29: _t->closeTabsho(); break;
        case 30: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->closeTab(); break;
        case 32: _t->closeLeftTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->closeRightTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->reloadTab(); break;
        case 37: _t->reloadTabsho(); break;
        case 38: _t->reopenclosed(); break;
        case 39: _t->reloadAllTabs(); break;
        case 40: _t->nextTab(); break;
        case 41: _t->previousTab(); break;
        case 42: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->webViewLoadStarted(); break;
        case 44: _t->webViewLoadFinished(); break;
        case 45: _t->webViewIconChanged(); break;
        case 46: _t->webViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 48: _t->lineEditReturnPressed(); break;
        case 49: _t->windowCloseRequested(); break;
        case 50: _t->moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WebView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tabwidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::tlinkhovered)) {
                *result = 0;
            }
        }
        {
            typedef void (tabwidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::tstatusmessage)) {
                *result = 1;
            }
        }
        {
            typedef void (tabwidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::setwindowtitle)) {
                *result = 2;
            }
        }
        {
            typedef void (tabwidget::*_t)(WebView * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::addrecent)) {
                *result = 3;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::bookmark)) {
                *result = 4;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::saveas)) {
                *result = 5;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::print)) {
                *result = 6;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::copyaddress)) {
                *result = 7;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::viewsource)) {
                *result = 8;
            }
        }
        {
            typedef void (tabwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tabwidget::inspectelement)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject tabwidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_tabwidget.data,
      qt_meta_data_tabwidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tabwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tabwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tabwidget.stringdata0))
        return static_cast<void*>(const_cast< tabwidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int tabwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void tabwidget::tlinkhovered(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tabwidget::tstatusmessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tabwidget::setwindowtitle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tabwidget::addrecent(WebView * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tabwidget::bookmark()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void tabwidget::saveas()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void tabwidget::print()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void tabwidget::copyaddress()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void tabwidget::viewsource()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void tabwidget::inspectelement()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
