/****************************************************************************
** Meta object code from reading C++ file 'lotery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "F:/in work/Lot4/lotery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lotery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lotery_t {
    QByteArrayData data[16];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lotery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lotery_t qt_meta_stringdata_Lotery = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Lotery"
QT_MOC_LITERAL(1, 7, 8), // "is_6_btn"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "luck_btn"
QT_MOC_LITERAL(4, 26, 10), // "start_game"
QT_MOC_LITERAL(5, 37, 4), // "game"
QT_MOC_LITERAL(6, 42, 14), // "close_win_menu"
QT_MOC_LITERAL(7, 57, 5), // "playS"
QT_MOC_LITERAL(8, 63, 8), // "set_cash"
QT_MOC_LITERAL(9, 72, 1), // "m"
QT_MOC_LITERAL(10, 74, 9), // "money_add"
QT_MOC_LITERAL(11, 84, 17), // "money_add_in_safe"
QT_MOC_LITERAL(12, 102, 16), // "on_speed_clicked"
QT_MOC_LITERAL(13, 119, 19), // "on_exit_btn_clicked"
QT_MOC_LITERAL(14, 139, 19), // "on_X_up_btn_clicked"
QT_MOC_LITERAL(15, 159, 21) // "on_X_down_btn_clicked"

    },
    "Lotery\0is_6_btn\0\0luck_btn\0start_game\0"
    "game\0close_win_menu\0playS\0set_cash\0m\0"
    "money_add\0money_add_in_safe\0"
    "on_speed_clicked\0on_exit_btn_clicked\0"
    "on_X_up_btn_clicked\0on_X_down_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lotery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    1,   85,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Lotery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lotery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->is_6_btn(); break;
        case 1: _t->luck_btn(); break;
        case 2: _t->start_game(); break;
        case 3: _t->game(); break;
        case 4: _t->close_win_menu(); break;
        case 5: _t->playS(); break;
        case 6: _t->set_cash((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->money_add(); break;
        case 8: _t->money_add_in_safe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_speed_clicked(); break;
        case 10: _t->on_exit_btn_clicked(); break;
        case 11: _t->on_X_up_btn_clicked(); break;
        case 12: _t->on_X_down_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lotery::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Lotery.data,
    qt_meta_data_Lotery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lotery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lotery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lotery.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Lotery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
