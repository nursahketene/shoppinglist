#include <QtGui/QApplication>
#include "shoppinglist.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    shoppinglist w;
    w.show();
    return a.exec();

}
