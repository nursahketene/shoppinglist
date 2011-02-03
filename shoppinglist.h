#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLineEdit>
#include <QListWidget>
#include <QListWidgetItem>
#include <QList>
#include <QPushButton>
#include <QLineEdit>
#include <QSettings>
#include <QFile>
#include <QDataStream>
#include <QObject>

namespace Ui {
    class shoppinglist;
}

class shoppinglist : public QMainWindow {
    Q_OBJECT
public:
    shoppinglist(QWidget *parent = 0);
    ~shoppinglist();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::shoppinglist *ui;

public slots:

    void saveData();



private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem* item);
    void on_pushButton_clicked();
    void an_action_About_triggered();
};

#endif // SHOPPINGLIST_H
