/****************************************************************************
** Meta object code from reading C++ file 'facedetectionapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../facedetectionapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facedetectionapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FaceDetectionApp_t {
    QByteArrayData data[29];
    char stringdata0[529];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaceDetectionApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaceDetectionApp_t qt_meta_stringdata_FaceDetectionApp = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FaceDetectionApp"
QT_MOC_LITERAL(1, 17, 9), // "sendSetup"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "sendToggleVideo"
QT_MOC_LITERAL(4, 44, 19), // "sendShowDetectFaces"
QT_MOC_LITERAL(5, 64, 17), // "sendStopStreaming"
QT_MOC_LITERAL(6, 82, 16), // "sendSaveAllFaces"
QT_MOC_LITERAL(7, 99, 5), // "aTime"
QT_MOC_LITERAL(8, 105, 19), // "on_StartBtn_clicked"
QT_MOC_LITERAL(9, 125, 19), // "on_AboutBtn_clicked"
QT_MOC_LITERAL(10, 145, 22), // "on_SettingsBtn_clicked"
QT_MOC_LITERAL(11, 168, 18), // "on_NextBtn_clicked"
QT_MOC_LITERAL(12, 187, 20), // "on_GoBackBtn_clicked"
QT_MOC_LITERAL(13, 208, 21), // "on_GoBack2Btn_clicked"
QT_MOC_LITERAL(14, 230, 21), // "on_GoBack3Btn_clicked"
QT_MOC_LITERAL(15, 252, 21), // "on_GoBack4Btn_clicked"
QT_MOC_LITERAL(16, 274, 23), // "on_SaveFacesBtn_clicked"
QT_MOC_LITERAL(17, 298, 26), // "on_ChooseFolderBtn_clicked"
QT_MOC_LITERAL(18, 325, 24), // "on_TestWebcamBtn_clicked"
QT_MOC_LITERAL(19, 350, 12), // "receiveFrame"
QT_MOC_LITERAL(20, 363, 6), // "aFrame"
QT_MOC_LITERAL(21, 370, 19), // "receiveToggleStream"
QT_MOC_LITERAL(22, 390, 15), // "showDetectFaces"
QT_MOC_LITERAL(23, 406, 17), // "receiveFaceVector"
QT_MOC_LITERAL(24, 424, 20), // "std::vector<cv::Mat>"
QT_MOC_LITERAL(25, 445, 11), // "facesVector"
QT_MOC_LITERAL(26, 457, 19), // "receiveSaveAllFaces"
QT_MOC_LITERAL(27, 477, 21), // "recieveFrameTimeFrame"
QT_MOC_LITERAL(28, 499, 29) // "receiveDisableEverythingError"

    },
    "FaceDetectionApp\0sendSetup\0\0sendToggleVideo\0"
    "sendShowDetectFaces\0sendStopStreaming\0"
    "sendSaveAllFaces\0aTime\0on_StartBtn_clicked\0"
    "on_AboutBtn_clicked\0on_SettingsBtn_clicked\0"
    "on_NextBtn_clicked\0on_GoBackBtn_clicked\0"
    "on_GoBack2Btn_clicked\0on_GoBack3Btn_clicked\0"
    "on_GoBack4Btn_clicked\0on_SaveFacesBtn_clicked\0"
    "on_ChooseFolderBtn_clicked\0"
    "on_TestWebcamBtn_clicked\0receiveFrame\0"
    "aFrame\0receiveToggleStream\0showDetectFaces\0"
    "receiveFaceVector\0std::vector<cv::Mat>\0"
    "facesVector\0receiveSaveAllFaces\0"
    "recieveFrameTimeFrame\0"
    "receiveDisableEverythingError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaceDetectionApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  129,    2, 0x06 /* Public */,
       3,    0,  134,    2, 0x06 /* Public */,
       4,    0,  135,    2, 0x06 /* Public */,
       5,    0,  136,    2, 0x06 /* Public */,
       6,    1,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  140,    2, 0x08 /* Private */,
       9,    0,  141,    2, 0x08 /* Private */,
      10,    0,  142,    2, 0x08 /* Private */,
      11,    0,  143,    2, 0x08 /* Private */,
      12,    0,  144,    2, 0x08 /* Private */,
      13,    0,  145,    2, 0x08 /* Private */,
      14,    0,  146,    2, 0x08 /* Private */,
      15,    0,  147,    2, 0x08 /* Private */,
      16,    0,  148,    2, 0x08 /* Private */,
      17,    0,  149,    2, 0x08 /* Private */,
      18,    0,  150,    2, 0x08 /* Private */,
      19,    1,  151,    2, 0x08 /* Private */,
      21,    0,  154,    2, 0x08 /* Private */,
      22,    0,  155,    2, 0x08 /* Private */,
      23,    2,  156,    2, 0x08 /* Private */,
      26,    0,  161,    2, 0x08 /* Private */,
      27,    1,  162,    2, 0x08 /* Private */,
      28,    0,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
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
    QMetaType::Void, QMetaType::QImage,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage, 0x80000000 | 24,   20,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,

       0        // eod
};

void FaceDetectionApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FaceDetectionApp *_t = static_cast<FaceDetectionApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSetup((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->sendToggleVideo(); break;
        case 2: _t->sendShowDetectFaces(); break;
        case 3: _t->sendStopStreaming(); break;
        case 4: _t->sendSaveAllFaces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_StartBtn_clicked(); break;
        case 6: _t->on_AboutBtn_clicked(); break;
        case 7: _t->on_SettingsBtn_clicked(); break;
        case 8: _t->on_NextBtn_clicked(); break;
        case 9: _t->on_GoBackBtn_clicked(); break;
        case 10: _t->on_GoBack2Btn_clicked(); break;
        case 11: _t->on_GoBack3Btn_clicked(); break;
        case 12: _t->on_GoBack4Btn_clicked(); break;
        case 13: _t->on_SaveFacesBtn_clicked(); break;
        case 14: _t->on_ChooseFolderBtn_clicked(); break;
        case 15: _t->on_TestWebcamBtn_clicked(); break;
        case 16: _t->receiveFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 17: _t->receiveToggleStream(); break;
        case 18: _t->showDetectFaces(); break;
        case 19: _t->receiveFaceVector((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[2]))); break;
        case 20: _t->receiveSaveAllFaces(); break;
        case 21: _t->recieveFrameTimeFrame((*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[1]))); break;
        case 22: _t->receiveDisableEverythingError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FaceDetectionApp::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FaceDetectionApp::sendSetup)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FaceDetectionApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FaceDetectionApp::sendToggleVideo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FaceDetectionApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FaceDetectionApp::sendShowDetectFaces)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FaceDetectionApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FaceDetectionApp::sendStopStreaming)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FaceDetectionApp::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FaceDetectionApp::sendSaveAllFaces)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject FaceDetectionApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FaceDetectionApp.data,
      qt_meta_data_FaceDetectionApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaceDetectionApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaceDetectionApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaceDetectionApp.stringdata0))
        return static_cast<void*>(const_cast< FaceDetectionApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FaceDetectionApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void FaceDetectionApp::sendSetup(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FaceDetectionApp::sendToggleVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FaceDetectionApp::sendShowDetectFaces()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FaceDetectionApp::sendStopStreaming()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FaceDetectionApp::sendSaveAllFaces(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
