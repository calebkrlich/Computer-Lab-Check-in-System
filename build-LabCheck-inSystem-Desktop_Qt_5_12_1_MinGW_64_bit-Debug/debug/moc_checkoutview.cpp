/****************************************************************************
** Meta object code from reading C++ file 'checkoutview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab-Check-in-System/checkoutview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkoutview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CheckOutView_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckOutView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckOutView_t qt_meta_stringdata_CheckOutView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CheckOutView"
QT_MOC_LITERAL(1, 13, 20), // "EventStudentCheckOut"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "studentID"
QT_MOC_LITERAL(4, 45, 23), // "on_CancelButton_clicked"
QT_MOC_LITERAL(5, 69, 25) // "on_CheckOutButton_clicked"

    },
    "CheckOutView\0EventStudentCheckOut\0\0"
    "studentID\0on_CancelButton_clicked\0"
    "on_CheckOutButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckOutView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CheckOutView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckOutView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EventStudentCheckOut((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->on_CancelButton_clicked(); break;
        case 2: _t->on_CheckOutButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckOutView::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckOutView::EventStudentCheckOut)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CheckOutView::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CheckOutView.data,
    qt_meta_data_CheckOutView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CheckOutView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckOutView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckOutView.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CheckOutView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CheckOutView::EventStudentCheckOut(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
