/****************************************************************************
** Meta object code from reading C++ file 'poifilterchooser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui/poifilterchooser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poifilterchooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_POIFilterChooser_t {
    QByteArrayData data[9];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_POIFilterChooser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_POIFilterChooser_t qt_meta_stringdata_POIFilterChooser = {
    {
QT_MOC_LITERAL(0, 0, 16), // "POIFilterChooser"
QT_MOC_LITERAL(1, 17, 7), // "onClose"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 44), // "std::map<std::string,std::set..."
QT_MOC_LITERAL(4, 71, 9), // "selection"
QT_MOC_LITERAL(5, 81, 13), // "onTreeClicked"
QT_MOC_LITERAL(6, 95, 5), // "index"
QT_MOC_LITERAL(7, 101, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(8, 123, 21) // "on_buttonBox_rejected"

    },
    "POIFilterChooser\0onClose\0\0"
    "std::map<std::string,std::set<std::string> >\0"
    "selection\0onTreeClicked\0index\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_POIFilterChooser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void POIFilterChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        POIFilterChooser *_t = static_cast<POIFilterChooser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClose((*reinterpret_cast< std::map<std::string,std::set<std::string> >(*)>(_a[1]))); break;
        case 1: _t->onTreeClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (POIFilterChooser::*_t)(std::map<std::string,std::set<std::string>> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&POIFilterChooser::onClose)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject POIFilterChooser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_POIFilterChooser.data,
      qt_meta_data_POIFilterChooser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *POIFilterChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *POIFilterChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_POIFilterChooser.stringdata0))
        return static_cast<void*>(const_cast< POIFilterChooser*>(this));
    return QDialog::qt_metacast(_clname);
}

int POIFilterChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void POIFilterChooser::onClose(std::map<std::string,std::set<std::string>> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
