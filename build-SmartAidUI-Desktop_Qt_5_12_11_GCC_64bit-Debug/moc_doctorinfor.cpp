/****************************************************************************
** Meta object code from reading C++ file 'doctorinfor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>

#include "../SmartAidUI/doctor/doctorinfor.h"

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doctorinfor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_doctorinfor_t
{
    QByteArrayData data[5];
    char           stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len)                                      \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(               \
        len,                                                               \
        qptrdiff(offsetof(qt_meta_stringdata_doctorinfor_t, stringdata0) + \
                 ofs - idx * sizeof(QByteArrayData)))
static const qt_meta_stringdata_doctorinfor_t qt_meta_stringdata_doctorinfor = {
    {
        QT_MOC_LITERAL(0, 0, 11),   // "doctorinfor"
        QT_MOC_LITERAL(1, 12, 12),  // "switchToLast"
        QT_MOC_LITERAL(2, 25, 0),   // ""
        QT_MOC_LITERAL(3, 26, 6),   // "onExit"
        QT_MOC_LITERAL(4, 33, 15)   // "on_save_clicked"

    },
    "doctorinfor\0switchToLast\0\0onExit\0"
    "on_save_clicked"};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_doctorinfor[] = {

    // content:
    8,  // revision
    0,  // classname
    0,
    0,  // classinfo
    3,
    14,  // methods
    0,
    0,  // properties
    0,
    0,  // enums/sets
    0,
    0,  // constructors
    0,  // flags
    1,  // signalCount

    // signals: name, argc, parameters, tag, flags
    1,
    0,
    29,
    2,
    0x06 /* Public */,

    // slots: name, argc, parameters, tag, flags
    3,
    0,
    30,
    2,
    0x08 /* Private */,
    4,
    0,
    31,
    2,
    0x08 /* Private */,

    // signals: parameters
    QMetaType::Void,

    // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

    0  // eod
};

void doctorinfor::qt_static_metacall(QObject          *_o,
                                     QMetaObject::Call _c,
                                     int               _id,
                                     void            **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod)
        {
            auto *_t = static_cast<doctorinfor *>(_o);
            Q_UNUSED(_t)
            switch (_id)
                {
                    case 0:
                        _t->switchToLast();
                        break;
                    case 1:
                        _t->onExit();
                        break;
                    case 2:
                        _t->on_save_clicked();
                        break;
                    default:;
                }
        }
    else if (_c == QMetaObject::IndexOfMethod)
        {
            int *result = reinterpret_cast<int *>(_a[0]);
            {
                using _t = void (doctorinfor::*)();
                if (*reinterpret_cast<_t *>(_a[1]) ==
                    static_cast<_t>(&doctorinfor::switchToLast))
                    {
                        *result = 0;
                        return;
                    }
            }
        }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject doctorinfor::staticMetaObject = {
    {&QWidget::staticMetaObject,
     qt_meta_stringdata_doctorinfor.data,
     qt_meta_data_doctorinfor,
     qt_static_metacall,
     nullptr,
     nullptr}};

const QMetaObject *doctorinfor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject()
                                      : &staticMetaObject;
}

void *doctorinfor::qt_metacast(const char *_clname)
{
    if (!_clname)
        return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_doctorinfor.stringdata0))
        return static_cast<void *>(this);
    return QWidget::qt_metacast(_clname);
}

int doctorinfor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod)
        {
            if (_id < 3)
                qt_static_metacall(this, _c, _id, _a);
            _id -= 3;
        }
    else if (_c == QMetaObject::RegisterMethodArgumentMetaType)
        {
            if (_id < 3)
                *reinterpret_cast<int *>(_a[0]) = -1;
            _id -= 3;
        }
    return _id;
}

// SIGNAL 0
void doctorinfor::switchToLast()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
