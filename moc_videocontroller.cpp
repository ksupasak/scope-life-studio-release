/****************************************************************************
** Meta object code from reading C++ file 'videocontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../scope-life-studio/ScopeLifeGUI/videocontroller.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videocontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoController_t {
    const uint offsetsAndSize[88];
    char stringdata0[637];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VideoController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VideoController_t qt_meta_stringdata_VideoController = {
    {
QT_MOC_LITERAL(0, 15), // "VideoController"
QT_MOC_LITERAL(16, 4), // "back"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 6), // "finish"
QT_MOC_LITERAL(29, 20), // "callbackCaptureImage"
QT_MOC_LITERAL(50, 8), // "filename"
QT_MOC_LITERAL(59, 20), // "callbackErrorCapture"
QT_MOC_LITERAL(80, 3), // "msg"
QT_MOC_LITERAL(84, 16), // "updateRecordTime"
QT_MOC_LITERAL(101, 19), // "updateRecorderState"
QT_MOC_LITERAL(121, 29), // "QMediaRecorder::RecorderState"
QT_MOC_LITERAL(151, 5), // "state"
QT_MOC_LITERAL(157, 23), // "setExposureCompensation"
QT_MOC_LITERAL(181, 5), // "index"
QT_MOC_LITERAL(187, 20), // "displayRecorderError"
QT_MOC_LITERAL(208, 18), // "displayCameraError"
QT_MOC_LITERAL(227, 18), // "updateCameraDevice"
QT_MOC_LITERAL(246, 8), // "QAction*"
QT_MOC_LITERAL(255, 6), // "action"
QT_MOC_LITERAL(262, 20), // "processCapturedImage"
QT_MOC_LITERAL(283, 9), // "requestId"
QT_MOC_LITERAL(293, 3), // "img"
QT_MOC_LITERAL(297, 6), // "record"
QT_MOC_LITERAL(304, 7), // "capture"
QT_MOC_LITERAL(312, 15), // "onNewConnection"
QT_MOC_LITERAL(328, 18), // "processTextMessage"
QT_MOC_LITERAL(347, 7), // "message"
QT_MOC_LITERAL(355, 20), // "processBinaryMessage"
QT_MOC_LITERAL(376, 18), // "socketDisconnected"
QT_MOC_LITERAL(395, 19), // "on_back_btn_clicked"
QT_MOC_LITERAL(415, 24), // "on_finish_button_clicked"
QT_MOC_LITERAL(440, 22), // "on_capture_btn_clicked"
QT_MOC_LITERAL(463, 21), // "on_record_btn_clicked"
QT_MOC_LITERAL(485, 24), // "configureCaptureSettings"
QT_MOC_LITERAL(510, 22), // "configureVideoSettings"
QT_MOC_LITERAL(533, 22), // "configureImageSettings"
QT_MOC_LITERAL(556, 15), // "readyForCapture"
QT_MOC_LITERAL(572, 5), // "ready"
QT_MOC_LITERAL(578, 10), // "imageSaved"
QT_MOC_LITERAL(589, 2), // "id"
QT_MOC_LITERAL(592, 8), // "fileName"
QT_MOC_LITERAL(601, 17), // "processVideoFrame"
QT_MOC_LITERAL(619, 11), // "QVideoFrame"
QT_MOC_LITERAL(631, 5) // "frame"

    },
    "VideoController\0back\0\0finish\0"
    "callbackCaptureImage\0filename\0"
    "callbackErrorCapture\0msg\0updateRecordTime\0"
    "updateRecorderState\0QMediaRecorder::RecorderState\0"
    "state\0setExposureCompensation\0index\0"
    "displayRecorderError\0displayCameraError\0"
    "updateCameraDevice\0QAction*\0action\0"
    "processCapturedImage\0requestId\0img\0"
    "record\0capture\0onNewConnection\0"
    "processTextMessage\0message\0"
    "processBinaryMessage\0socketDisconnected\0"
    "on_back_btn_clicked\0on_finish_button_clicked\0"
    "on_capture_btn_clicked\0on_record_btn_clicked\0"
    "configureCaptureSettings\0"
    "configureVideoSettings\0configureImageSettings\0"
    "readyForCapture\0ready\0imageSaved\0id\0"
    "fileName\0processVideoFrame\0QVideoFrame\0"
    "frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x06,    1 /* Public */,
       3,    0,  177,    2, 0x06,    2 /* Public */,
       4,    1,  178,    2, 0x06,    3 /* Public */,
       6,    1,  181,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  184,    2, 0x0a,    7 /* Public */,
       9,    1,  185,    2, 0x0a,    8 /* Public */,
      12,    1,  188,    2, 0x0a,   10 /* Public */,
      14,    0,  191,    2, 0x0a,   12 /* Public */,
      15,    0,  192,    2, 0x0a,   13 /* Public */,
      16,    1,  193,    2, 0x0a,   14 /* Public */,
      19,    2,  196,    2, 0x0a,   16 /* Public */,
      22,    0,  201,    2, 0x0a,   19 /* Public */,
      23,    0,  202,    2, 0x0a,   20 /* Public */,
      24,    0,  203,    2, 0x08,   21 /* Private */,
      25,    1,  204,    2, 0x08,   22 /* Private */,
      27,    1,  207,    2, 0x08,   24 /* Private */,
      28,    0,  210,    2, 0x08,   26 /* Private */,
      29,    0,  211,    2, 0x08,   27 /* Private */,
      30,    0,  212,    2, 0x08,   28 /* Private */,
      31,    0,  213,    2, 0x08,   29 /* Private */,
      32,    0,  214,    2, 0x08,   30 /* Private */,
      33,    0,  215,    2, 0x08,   31 /* Private */,
      34,    0,  216,    2, 0x08,   32 /* Private */,
      35,    0,  217,    2, 0x08,   33 /* Private */,
      36,    1,  218,    2, 0x08,   34 /* Private */,
      38,    2,  221,    2, 0x08,   36 /* Private */,
      41,    1,  226,    2, 0x08,   39 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QByteArray,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   39,   40,
    QMetaType::Void, 0x80000000 | 42,   43,

       0        // eod
};

void VideoController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->finish(); break;
        case 2: _t->callbackCaptureImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->callbackErrorCapture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateRecordTime(); break;
        case 5: _t->updateRecorderState((*reinterpret_cast< QMediaRecorder::RecorderState(*)>(_a[1]))); break;
        case 6: _t->setExposureCompensation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->displayRecorderError(); break;
        case 8: _t->displayCameraError(); break;
        case 9: _t->updateCameraDevice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->processCapturedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 11: _t->record(); break;
        case 12: _t->capture(); break;
        case 13: _t->onNewConnection(); break;
        case 14: _t->processTextMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->processBinaryMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 16: _t->socketDisconnected(); break;
        case 17: _t->on_back_btn_clicked(); break;
        case 18: _t->on_finish_button_clicked(); break;
        case 19: _t->on_capture_btn_clicked(); break;
        case 20: _t->on_record_btn_clicked(); break;
        case 21: _t->configureCaptureSettings(); break;
        case 22: _t->configureVideoSettings(); break;
        case 23: _t->configureImageSettings(); break;
        case 24: _t->readyForCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->processVideoFrame((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QVideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoController::back)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoController::finish)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoController::callbackCaptureImage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoController::callbackErrorCapture)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject VideoController::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VideoController.offsetsAndSize,
    qt_meta_data_VideoController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VideoController_t
, QtPrivate::TypeAndForceComplete<VideoController, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMediaRecorder::RecorderState, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVideoFrame, std::false_type>


>,
    nullptr
} };


const QMetaObject *VideoController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoController.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VideoController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void VideoController::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoController::finish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoController::callbackCaptureImage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoController::callbackErrorCapture(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
