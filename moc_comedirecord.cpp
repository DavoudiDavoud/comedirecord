/****************************************************************************
** Meta object code from reading C++ file 'comedirecord.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "comedirecord.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comedirecord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComediRecord[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      27,   13,   13,   13, 0x08,
      42,   13,   13,   13, 0x08,
      55,   13,   13,   13, 0x08,
      71,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ComediRecord[] = {
    "ComediRecord\0\0incTbEvent()\0resetTbEvent()\0"
    "decTbEvent()\0enterFileName()\0"
    "recstartstop(int)\0"
};

void ComediRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComediRecord *_t = static_cast<ComediRecord *>(_o);
        switch (_id) {
        case 0: _t->incTbEvent(); break;
        case 1: _t->resetTbEvent(); break;
        case 2: _t->decTbEvent(); break;
        case 3: _t->enterFileName(); break;
        case 4: _t->recstartstop((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComediRecord::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComediRecord::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ComediRecord,
      qt_meta_data_ComediRecord, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComediRecord::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComediRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComediRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComediRecord))
        return static_cast<void*>(const_cast< ComediRecord*>(this));
    return QWidget::qt_metacast(_clname);
}

int ComediRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
