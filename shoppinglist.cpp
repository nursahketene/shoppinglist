#include "shoppinglist.h"
#include "ui_shoppinglist.h"

shoppinglist::shoppinglist(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::shoppinglist)

{
    ui->setupUi(this);

    //reads file.dat
    QFile file("file.dat");
    file.open(QIODevice::ReadOnly);
    QDataStream in(&file);

    //checks if file.dat exists
    if(file.exists("file.dat"))
    {
        //promps a questions for loading previous list
        //saves the user answer to result
        int result = QMessageBox::question(this,"Existing previous list", "Do you want to load the previous list",
                              QMessageBox::Ok,QMessageBox::No);

        //if the answer is OK
        if(result==QMessageBox::Ok)
        while (true)//Loop for adding every single item in the file.
        {if(in.atEnd()) break;
            QString item;
            in>>item;
        //populating listWidget
        ui->listWidget->addItem(item);

        }        
    }
    //if action quit is triggered saveData called
    connect(ui->action_Quit,SIGNAL(triggered()),this,SLOT(saveData()));
    //if actionAbout is triggered an_action_About_triggered is called 
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(an_action_About_triggered()));

}

shoppinglist::~shoppinglist()
{
    delete ui;
}

void shoppinglist::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void shoppinglist::on_pushButton_clicked()
{
    //assigning text in lineEdit to a variable called item
    QString item = ui->lineEdit->text();
    
    //this part checking if list widget is empty and list item is empty 

    //this part checking if the line editt is empty
    if (item.isEmpty())
    {
        //if empty true than gives a warning.
        //QMessageBox::information(this, "ShoppingList","Don't Leave It Empty");
    }
    else
    {
        //adds the text in lineEdit into listWidget as an item
        ui->listWidget->addItem(item);
        //clears lineEdit
        ui->lineEdit->clear();        
    }
}
void shoppinglist::an_action_About_triggered()
{
    //When actionAbout triggered it will give you a dialog box about the program
    QMessageBox::information(this, "About", "Product of Nur Sah Ketene Beta Release",
                             QMessageBox::Ok);
}

void shoppinglist::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
    //sends item as a text to line edit
    ui->lineEdit->setText(item->text());
    //removes item from the listWidget when double clicked
    ui->listWidget->takeItem(ui->listWidget->row(ui->listWidget->currentItem()));
}


//the code below is for further development
//saving qlistwidgetitems to a file.
void shoppinglist::saveData()
{
    if(ui->listWidget->count()>0)
    {

    QFile file("file.dat");
    file.open(QIODevice::WriteOnly);
    QDataStream out(&file);   // we will serialize the data into the file

    for (int i=0; i<ui->listWidget->count();i++)
    {
        out<< QString(ui->listWidget->item(i)->text());
    }  
    }
    //To Remove file if it is empty
    else
    {
        QFile::remove("file.dat");
    }
}

