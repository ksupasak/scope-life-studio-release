/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../scope-life-studio/ScopeLife/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 17), // "on_finish_clicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 19), // "on_back_btn_clicked"
QT_MOC_LITERAL(50, 12), // "startCapture"
QT_MOC_LITERAL(63, 3), // "url"
QT_MOC_LITERAL(67, 10), // "backButton"
QT_MOC_LITERAL(78, 19), // "processCaptureImage"
QT_MOC_LITERAL(98, 8), // "filename"
QT_MOC_LITERAL(107, 13), // "processFinish"
QT_MOC_LITERAL(121, 13), // "queue_timeout"
QT_MOC_LITERAL(135, 12), // "captureImage"
QT_MOC_LITERAL(148, 11), // "recordVideo"
QT_MOC_LITERAL(160, 10), // "processKey"
QT_MOC_LITERAL(171, 3), // "key"
QT_MOC_LITERAL(175, 20), // "on_start_btn_clicked"
QT_MOC_LITERAL(196, 19), // "on_info_btn_clicked"
QT_MOC_LITERAL(216, 22), // "on_setting_btn_clicked"
QT_MOC_LITERAL(239, 15), // "exitApplication"
QT_MOC_LITERAL(255, 22) // "on_library_btn_clicked"

    },
    "MainWindow\0on_finish_clicked\0\0"
    "on_back_btn_clicked\0startCapture\0url\0"
    "backButton\0processCaptureImage\0filename\0"
    "processFinish\0queue_timeout\0captureImage\0"
    "recordVideo\0processKey\0key\0"
    "on_start_btn_clicked\0on_info_btn_clicked\0"
    "on_setting_btn_clicked\0exitApplication\0"
    "on_library_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    1,  106,    2, 0x08,    3 /* Private */,
       6,    0,  109,    2, 0x08,    5 /* Private */,
       7,    1,  110,    2, 0x08,    6 /* Private */,
       9,    0,  113,    2, 0x08,    8 /* Private */,
      10,    0,  114,    2, 0x08,    9 /* Private */,
      11,    0,  115,    2, 0x08,   10 /* Private */,
      12,    0,  116,    2, 0x08,   11 /* Private */,
      13,    1,  117,    2, 0x08,   12 /* Private */,
      15,    0,  120,    2, 0x08,   14 /* Private */,
      16,    0,  121,    2, 0x08,   15 /* Private */,
      17,    0,  122,    2, 0x08,   16 /* Private */,
      18,    0,  123,    2, 0x08,   17 /* Private */,
      19,    0,  124,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_finish_clicked(); break;
        case 1: _t->on_back_btn_clicked(); break;
        case 2: _t->startCapture((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->backButton(); break;
        case 4: _t->processCaptureImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->processFinish(); break;
        case 6: _t->queue_timeout(); break;
        case 7: _t->captureImage(); break;
        case 8: _t->recordVideo(); break;
        case 9: _t->processKey((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_start_btn_clicked(); break;
        case 11: _t->on_info_btn_clicked(); break;
        case 12: _t->on_setting_btn_clicked(); break;
        case 13: _t->exitApplication(); break;
        case 14: _t->on_library_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
