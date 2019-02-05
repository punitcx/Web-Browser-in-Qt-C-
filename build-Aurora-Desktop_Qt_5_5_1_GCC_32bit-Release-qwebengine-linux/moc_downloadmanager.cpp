/****************************************************************************
** Meta object code from reading C++ file 'downloadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Aurora/downloadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_downloaditem_t {
    QByteArrayData data[16];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_downloaditem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_downloaditem_t qt_meta_stringdata_downloaditem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "downloaditem"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "cancel"
QT_MOC_LITERAL(4, 35, 5), // "retry"
QT_MOC_LITERAL(5, 41, 4), // "open"
QT_MOC_LITERAL(6, 46, 17), // "downloadReadyRead"
QT_MOC_LITERAL(7, 64, 5), // "error"
QT_MOC_LITERAL(8, 70, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 98, 4), // "code"
QT_MOC_LITERAL(10, 103, 16), // "downloadProgress"
QT_MOC_LITERAL(11, 120, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 134, 10), // "bytesTotal"
QT_MOC_LITERAL(13, 145, 15), // "metaDataChanged"
QT_MOC_LITERAL(14, 161, 8), // "finished"
QT_MOC_LITERAL(15, 170, 10) // "initialize"

    },
    "downloaditem\0statusChanged\0\0cancel\0"
    "retry\0open\0downloadReadyRead\0error\0"
    "QNetworkReply::NetworkError\0code\0"
    "downloadProgress\0bytesReceived\0"
    "bytesTotal\0metaDataChanged\0finished\0"
    "initialize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_downloaditem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
      10,    2,   72,    2, 0x0a /* Public */,
      13,    0,   77,    2, 0x0a /* Public */,
      14,    0,   78,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void downloaditem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        downloaditem *_t = static_cast<downloaditem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->cancel(); break;
        case 2: _t->retry(); break;
        case 3: _t->open(); break;
        case 4: _t->downloadReadyRead(); break;
        case 5: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->metaDataChanged(); break;
        case 8: _t->finished(); break;
        case 9: _t->initialize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (downloaditem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&downloaditem::statusChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject downloaditem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_downloaditem.data,
      qt_meta_data_downloaditem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *downloaditem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *downloaditem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_downloaditem.stringdata0))
        return static_cast<void*>(const_cast< downloaditem*>(this));
    return QWidget::qt_metacast(_clname);
}

int downloaditem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void downloaditem::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_downloadmanager_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_downloadmanager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_downloadmanager_t qt_meta_stringdata_downloadmanager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "downloadmanager"
QT_MOC_LITERAL(1, 16, 8), // "download"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "QNetworkRequest"
QT_MOC_LITERAL(4, 42, 7), // "request"
QT_MOC_LITERAL(5, 50, 15), // "requestFileName"
QT_MOC_LITERAL(6, 66, 3), // "url"
QT_MOC_LITERAL(7, 70, 24), // "handleUnsupportedContent"
QT_MOC_LITERAL(8, 95, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 110, 5), // "reply"
QT_MOC_LITERAL(10, 116, 7), // "cleanup"
QT_MOC_LITERAL(11, 124, 4) // "save"

    },
    "downloadmanager\0download\0\0QNetworkRequest\0"
    "request\0requestFileName\0url\0"
    "handleUnsupportedContent\0QNetworkReply*\0"
    "reply\0cleanup\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_downloadmanager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       1,    1,   59,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   62,    2, 0x0a /* Public */,
       1,    1,   67,    2, 0x2a /* Public | MethodCloned */,
       7,    2,   70,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,    6,    5,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void downloadmanager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        downloadmanager *_t = static_cast<downloadmanager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 2: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->cleanup(); break;
        case 7: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject downloadmanager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_downloadmanager.data,
      qt_meta_data_downloadmanager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *downloadmanager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *downloadmanager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_downloadmanager.stringdata0))
        return static_cast<void*>(const_cast< downloadmanager*>(this));
    return QDialog::qt_metacast(_clname);
}

int downloadmanager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
