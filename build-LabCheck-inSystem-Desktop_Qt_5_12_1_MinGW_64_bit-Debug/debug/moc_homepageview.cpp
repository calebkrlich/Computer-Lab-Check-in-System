/****************************************************************************
** Meta object code from reading C++ file 'homepageview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab-Check-in-System/homepageview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homepageview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HomePageView_t {
    QByteArrayData data[20];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomePageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomePageView_t qt_meta_stringdata_HomePageView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HomePageView"
QT_MOC_LITERAL(1, 13, 17), // "StudentListChange"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_CheckInButton_clicked"
QT_MOC_LITERAL(4, 57, 25), // "on_CheckOutButton_clicked"
QT_MOC_LITERAL(5, 83, 25), // "on_AddEventButton_clicked"
QT_MOC_LITERAL(6, 109, 13), // "newEventToAdd"
QT_MOC_LITERAL(7, 123, 16), // "EventInformation"
QT_MOC_LITERAL(8, 140, 5), // "event"
QT_MOC_LITERAL(9, 146, 15), // "newStudentToAdd"
QT_MOC_LITERAL(10, 162, 18), // "StudentInformation"
QT_MOC_LITERAL(11, 181, 7), // "student"
QT_MOC_LITERAL(12, 189, 15), // "StudentToRemove"
QT_MOC_LITERAL(13, 205, 9), // "studentID"
QT_MOC_LITERAL(14, 215, 23), // "EventNewWindowToConnect"
QT_MOC_LITERAL(15, 239, 18), // "CheckInManualView*"
QT_MOC_LITERAL(16, 258, 7), // "newView"
QT_MOC_LITERAL(17, 266, 28), // "on_actionSave_logs_triggered"
QT_MOC_LITERAL(18, 295, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(19, 319, 37) // "on_actionAdd_Faculty_Member_t..."

    },
    "HomePageView\0StudentListChange\0\0"
    "on_CheckInButton_clicked\0"
    "on_CheckOutButton_clicked\0"
    "on_AddEventButton_clicked\0newEventToAdd\0"
    "EventInformation\0event\0newStudentToAdd\0"
    "StudentInformation\0student\0StudentToRemove\0"
    "studentID\0EventNewWindowToConnect\0"
    "CheckInManualView*\0newView\0"
    "on_actionSave_logs_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionAdd_Faculty_Member_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomePageView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,
      18,    0,   86,    2, 0x08 /* Private */,
      19,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HomePageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HomePageView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StudentListChange(); break;
        case 1: _t->on_CheckInButton_clicked(); break;
        case 2: _t->on_CheckOutButton_clicked(); break;
        case 3: _t->on_AddEventButton_clicked(); break;
        case 4: _t->newEventToAdd((*reinterpret_cast< EventInformation(*)>(_a[1]))); break;
        case 5: _t->newStudentToAdd((*reinterpret_cast< StudentInformation(*)>(_a[1]))); break;
        case 6: _t->StudentToRemove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->EventNewWindowToConnect((*reinterpret_cast< CheckInManualView*(*)>(_a[1]))); break;
        case 8: _t->on_actionSave_logs_triggered(); break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionAdd_Faculty_Member_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CheckInManualView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HomePageView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomePageView::StudentListChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HomePageView::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_HomePageView.data,
    qt_meta_data_HomePageView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HomePageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomePageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HomePageView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HomePageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void HomePageView::StudentListChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
