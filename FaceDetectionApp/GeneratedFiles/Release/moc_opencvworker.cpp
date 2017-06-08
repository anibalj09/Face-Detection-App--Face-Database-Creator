/****************************************************************************
** Meta object code from reading C++ file 'opencvworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../opencvworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencvworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_opencvWorker_t {
    QByteArrayData data[18];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_opencvWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_opencvWorker_t qt_meta_stringdata_opencvWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "opencvWorker"
QT_MOC_LITERAL(1, 13, 9), // "sendFrame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "processedF"
QT_MOC_LITERAL(4, 35, 21), // "sendDetectedFaceFrame"
QT_MOC_LITERAL(5, 57, 20), // "std::vector<cv::Mat>"
QT_MOC_LITERAL(6, 78, 13), // "detectedFaces"
QT_MOC_LITERAL(7, 92, 18), // "sendFrameTimeFrame"
QT_MOC_LITERAL(8, 111, 23), // "sendSignalErrorOnStream"
QT_MOC_LITERAL(9, 135, 16), // "receiveGrabFrame"
QT_MOC_LITERAL(10, 152, 12), // "receiveSetup"
QT_MOC_LITERAL(11, 165, 6), // "device"
QT_MOC_LITERAL(12, 172, 14), // "saveFacesColor"
QT_MOC_LITERAL(13, 187, 18), // "receiveToggleVideo"
QT_MOC_LITERAL(14, 206, 24), // "receiveShowDetectedFaces"
QT_MOC_LITERAL(15, 231, 20), // "receiveStopStreaming"
QT_MOC_LITERAL(16, 252, 23), // "recieveSaveAllFacesTime"
QT_MOC_LITERAL(17, 276, 5) // "aTime"

    },
    "opencvWorker\0sendFrame\0\0processedF\0"
    "sendDetectedFaceFrame\0std::vector<cv::Mat>\0"
    "detectedFaces\0sendFrameTimeFrame\0"
    "sendSignalErrorOnStream\0receiveGrabFrame\0"
    "receiveSetup\0device\0saveFacesColor\0"
    "receiveToggleVideo\0receiveShowDetectedFaces\0"
    "receiveStopStreaming\0recieveSaveAllFacesTime\0"
    "aTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_opencvWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       7,    1,   72,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   76,    2, 0x0a /* Public */,
      10,    2,   77,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    0,   84,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QImage, 0x80000000 | 5,    3,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void opencvWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        opencvWorker *_t = static_cast<opencvWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->sendDetectedFaceFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[2]))); break;
        case 2: _t->sendFrameTimeFrame((*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[1]))); break;
        case 3: _t->sendSignalErrorOnStream(); break;
        case 4: _t->receiveGrabFrame(); break;
        case 5: _t->receiveSetup((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->receiveToggleVideo(); break;
        case 7: _t->receiveShowDetectedFaces(); break;
        case 8: _t->receiveStopStreaming(); break;
        case 9: _t->recieveSaveAllFacesTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (opencvWorker::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&opencvWorker::sendFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (opencvWorker::*_t)(QImage , std::vector<cv::Mat> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&opencvWorker::sendDetectedFaceFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (opencvWorker::*_t)(std::vector<cv::Mat> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&opencvWorker::sendFrameTimeFrame)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (opencvWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&opencvWorker::sendSignalErrorOnStream)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject opencvWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_opencvWorker.data,
      qt_meta_data_opencvWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *opencvWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *opencvWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_opencvWorker.stringdata0))
        return static_cast<void*>(const_cast< opencvWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int opencvWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void opencvWorker::sendFrame(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void opencvWorker::sendDetectedFaceFrame(QImage _t1, std::vector<cv::Mat> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void opencvWorker::sendFrameTimeFrame(std::vector<cv::Mat> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void opencvWorker::sendSignalErrorOnStream()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
