/****************************************************************************
** Meta object code from reading C++ file 'shoppinglist.h'
**
** Created: Fri Jun 4 13:58:38 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shoppinglist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppinglist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_shoppinglist[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      30,   25,   13,   13, 0x08,
      80,   13,   13,   13, 0x08,
     104,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_shoppinglist[] = {
    "shoppinglist\0\0saveData()\0item\0"
    "on_listWidget_itemDoubleClicked(QListWidgetItem*)\0"
    "on_pushButton_clicked()\0"
    "an_action_About_triggered()\0"
};

const QMetaObject shoppinglist::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_shoppinglist,
      qt_meta_data_shoppinglist, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &shoppinglist::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *shoppinglist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *shoppinglist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_shoppinglist))
        return static_cast<void*>(const_cast< shoppinglist*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int shoppinglist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveData(); break;
        case 1: on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: on_pushButton_clicked(); break;
        case 3: an_action_About_triggered(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
