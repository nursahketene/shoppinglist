/********************************************************************************
** Form generated from reading UI file 'shoppinglist.ui'
**
** Created: Fri Jun 4 13:58:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGLIST_H
#define UI_SHOPPINGLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shoppinglist
{
public:
    QAction *action_Quit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *shoppinglist)
    {
        if (shoppinglist->objectName().isEmpty())
            shoppinglist->setObjectName(QString::fromUtf8("shoppinglist"));
        shoppinglist->resize(310, 384);
        action_Quit = new QAction(shoppinglist);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionAbout = new QAction(shoppinglist);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(shoppinglist);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAcceptDrops(true);

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addWidget(groupBox);

        shoppinglist->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(shoppinglist);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 310, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        shoppinglist->setMenuBar(menuBar);
        mainToolBar = new QToolBar(shoppinglist);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        shoppinglist->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(shoppinglist);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        shoppinglist->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Quit);
        menu_File->addAction(actionAbout);

        retranslateUi(shoppinglist);
        QObject::connect(action_Quit, SIGNAL(triggered()), shoppinglist, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), shoppinglist, SLOT(on_push_button_clicked()));

        QMetaObject::connectSlotsByName(shoppinglist);
    } // setupUi

    void retranslateUi(QMainWindow *shoppinglist)
    {
        shoppinglist->setWindowTitle(QApplication::translate("shoppinglist", "shoppinglist", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("shoppinglist", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Quit->setToolTip(QApplication::translate("shoppinglist", "Quit Shopping List", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Quit->setShortcut(QApplication::translate("shoppinglist", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("shoppinglist", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("shoppinglist", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("shoppinglist", "Shopping List", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("shoppinglist", "OK", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("shoppinglist", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class shoppinglist: public Ui_shoppinglist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGLIST_H
