/****************************************************************************
** Meta object code from reading C++ file 'labelrotation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui/labelrotation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labelrotation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabelRotation_t {
    QByteArrayData data[23];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelRotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelRotation_t qt_meta_stringdata_LabelRotation = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LabelRotation"
QT_MOC_LITERAL(1, 14, 22), // "on_routeButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "on_poiSelectButton_clicked"
QT_MOC_LITERAL(4, 65, 15), // "on_poi_selected"
QT_MOC_LITERAL(5, 81, 44), // "std::map<std::string,std::set..."
QT_MOC_LITERAL(6, 126, 6), // "filter"
QT_MOC_LITERAL(7, 133, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(8, 155, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(9, 185, 4), // "arg1"
QT_MOC_LITERAL(10, 190, 15), // "on_step_changed"
QT_MOC_LITERAL(11, 206, 4), // "step"
QT_MOC_LITERAL(12, 211, 5), // "total"
QT_MOC_LITERAL(13, 217, 5), // "angle"
QT_MOC_LITERAL(14, 223, 27), // "on_stepSpinner_valueChanged"
QT_MOC_LITERAL(15, 251, 30), // "on_stepSpinner_editingFinished"
QT_MOC_LITERAL(16, 282, 26), // "on_stepSlider_valueChanged"
QT_MOC_LITERAL(17, 309, 5), // "value"
QT_MOC_LITERAL(18, 315, 29), // "on_runHeuristicButton_clicked"
QT_MOC_LITERAL(19, 345, 16), // "on_viewport_info"
QT_MOC_LITERAL(20, 362, 4), // "zoom"
QT_MOC_LITERAL(21, 367, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(22, 389, 28) // "on_angleSpinBox_valueChanged"

    },
    "LabelRotation\0on_routeButton_clicked\0"
    "\0on_poiSelectButton_clicked\0on_poi_selected\0"
    "std::map<std::string,std::set<std::string> >\0"
    "filter\0on_playButton_clicked\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_step_changed\0step\0total\0angle\0"
    "on_stepSpinner_valueChanged\0"
    "on_stepSpinner_editingFinished\0"
    "on_stepSlider_valueChanged\0value\0"
    "on_runHeuristicButton_clicked\0"
    "on_viewport_info\0zoom\0on_saveButton_clicked\0"
    "on_angleSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelRotation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    3,   88,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    2,  103,    2, 0x08 /* Private */,
      21,    0,  108,    2, 0x08 /* Private */,
      22,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Double,   11,   12,   13,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   13,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void LabelRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelRotation *_t = static_cast<LabelRotation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_routeButton_clicked(); break;
        case 1: _t->on_poiSelectButton_clicked(); break;
        case 2: _t->on_poi_selected((*reinterpret_cast< std::map<std::string,std::set<std::string> >(*)>(_a[1]))); break;
        case 3: _t->on_playButton_clicked(); break;
        case 4: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_step_changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->on_stepSpinner_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_stepSpinner_editingFinished(); break;
        case 8: _t->on_stepSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_runHeuristicButton_clicked(); break;
        case 10: _t->on_viewport_info((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->on_saveButton_clicked(); break;
        case 12: _t->on_angleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabelRotation::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LabelRotation.data,
      qt_meta_data_LabelRotation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelRotation.stringdata0))
        return static_cast<void*>(const_cast< LabelRotation*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LabelRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
