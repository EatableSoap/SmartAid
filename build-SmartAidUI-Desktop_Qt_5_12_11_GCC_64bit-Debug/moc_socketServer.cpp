/****************************************************************************
** Meta object code from reading C++ file 'socketServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>

#include "../SmartAidUI/lib/socketServer.h"

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileServer_t
{
    QByteArrayData data[14];
    char           stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len)                                           \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(                    \
        len,                                                                    \
        qptrdiff(offsetof(qt_meta_stringdata_FileServer_t, stringdata0) + ofs - \
                 idx * sizeof(QByteArrayData)))
static const qt_meta_stringdata_FileServer_t qt_meta_stringdata_FileServer = {
    {
        QT_MOC_LITERAL(0, 0, 10),     // "FileServer"
        QT_MOC_LITERAL(1, 11, 15),    // "onNewConnection"
        QT_MOC_LITERAL(2, 27, 0),     // ""
        QT_MOC_LITERAL(3, 28, 19),    // "handleClientRequest"
        QT_MOC_LITERAL(4, 48, 11),    // "QTcpSocket*"
        QT_MOC_LITERAL(5, 60, 12),    // "clientSocket"
        QT_MOC_LITERAL(6, 73, 14),    // "processCommand"
        QT_MOC_LITERAL(7, 88, 8),     // "sendFile"
        QT_MOC_LITERAL(8, 97, 12),    // "QJsonObject*"
        QT_MOC_LITERAL(9, 110, 11),   // "commandPack"
        QT_MOC_LITERAL(10, 122, 8),   // "FilePath"
        QT_MOC_LITERAL(11, 131, 12),  // "sendResponse"
        QT_MOC_LITERAL(12, 144, 14),  // "readFileHeader"
        QT_MOC_LITERAL(13, 159, 15)   // "receiveFileData"

    },
    "FileServer\0onNewConnection\0\0"
    "handleClientRequest\0QTcpSocket*\0"
    "clientSocket\0processCommand\0sendFile\0"
    "QJsonObject*\0commandPack\0FilePath\0"
    "sendResponse\0readFileHeader\0receiveFileData"};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileServer[] = {

    // content:
    8,  // revision
    0,  // classname
    0,
    0,  // classinfo
    8,
    14,  // methods
    0,
    0,  // properties
    0,
    0,  // enums/sets
    0,
    0,  // constructors
    0,  // flags
    0,  // signalCount

    // slots: name, argc, parameters, tag, flags
    1,
    0,
    54,
    2,
    0x08 /* Private */,
    3,
    1,
    55,
    2,
    0x08 /* Private */,
    6,
    1,
    58,
    2,
    0x08 /* Private */,
    7,
    3,
    61,
    2,
    0x08 /* Private */,
    7,
    2,
    68,
    2,
    0x28 /* Private | MethodCloned */,
    11,
    2,
    73,
    2,
    0x08 /* Private */,
    12,
    1,
    78,
    2,
    0x08 /* Private */,
    13,
    1,
    81,
    2,
    0x08 /* Private */,

    // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 4,
    5,
    QMetaType::Void,
    0x80000000 | 4,
    5,
    QMetaType::Void,
    0x80000000 | 4,
    0x80000000 | 8,
    QMetaType::QString,
    5,
    9,
    10,
    QMetaType::Void,
    0x80000000 | 4,
    0x80000000 | 8,
    5,
    9,
    QMetaType::Void,
    0x80000000 | 4,
    0x80000000 | 8,
    5,
    9,
    QMetaType::Void,
    0x80000000 | 4,
    5,
    QMetaType::Void,
    0x80000000 | 4,
    5,

    0  // eod
};

void FileServer::qt_static_metacall(QObject          *_o,
                                    QMetaObject::Call _c,
                                    int               _id,
                                    void            **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod)
        {
            auto *_t = static_cast<FileServer *>(_o);
            Q_UNUSED(_t)
            switch (_id)
                {
                    case 0:
                        _t->onNewConnection();
                        break;
                    case 1:
                        _t->handleClientRequest(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])));
                        break;
                    case 2:
                        _t->processCommand(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])));
                        break;
                    case 3:
                        _t->sendFile(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])),
                            (*reinterpret_cast<QJsonObject *(*)>(_a[2])),
                            (*reinterpret_cast<const QString(*)>(_a[3])));
                        break;
                    case 4:
                        _t->sendFile(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])),
                            (*reinterpret_cast<QJsonObject *(*)>(_a[2])));
                        break;
                    case 5:
                        _t->sendResponse(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])),
                            (*reinterpret_cast<QJsonObject *(*)>(_a[2])));
                        break;
                    case 6:
                        _t->readFileHeader(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])));
                        break;
                    case 7:
                        _t->receiveFileData(
                            (*reinterpret_cast<QTcpSocket *(*)>(_a[1])));
                        break;
                    default:;
                }
        }
    else if (_c == QMetaObject::RegisterMethodArgumentMetaType)
        {
            switch (_id)
                {
                    default:
                        *reinterpret_cast<int *>(_a[0]) = -1;
                        break;
                    case 1:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 2:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 3:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 4:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 5:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 6:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                    case 7:
                        switch (*reinterpret_cast<int *>(_a[1]))
                            {
                                default:
                                    *reinterpret_cast<int *>(_a[0]) = -1;
                                    break;
                                case 0:
                                    *reinterpret_cast<int *>(_a[0]) =
                                        qRegisterMetaType<QTcpSocket *>();
                                    break;
                            }
                        break;
                }
        }
}

QT_INIT_METAOBJECT const QMetaObject FileServer::staticMetaObject = {
    {&QTcpServer::staticMetaObject,
     qt_meta_stringdata_FileServer.data,
     qt_meta_data_FileServer,
     qt_static_metacall,
     nullptr,
     nullptr}};

const QMetaObject *FileServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject()
                                      : &staticMetaObject;
}

void *FileServer::qt_metacast(const char *_clname)
{
    if (!_clname)
        return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileServer.stringdata0))
        return static_cast<void *>(this);
    return QTcpServer::qt_metacast(_clname);
}

int FileServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod)
        {
            if (_id < 8)
                qt_static_metacall(this, _c, _id, _a);
            _id -= 8;
        }
    else if (_c == QMetaObject::RegisterMethodArgumentMetaType)
        {
            if (_id < 8)
                qt_static_metacall(this, _c, _id, _a);
            _id -= 8;
        }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
