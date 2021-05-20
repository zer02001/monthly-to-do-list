#include "list.h"
#include "ui_list.h"

list::list(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::list)
{
    ui->setupUi(this);

QPushButton * days[30];

for (int i = 0; i < 30; i ++){


    QString day = "day" + QString::number((i+1));

    days[i] = list::findChild<QPushButton*>(day);

    connect(days[i] , SIGNAL(released()) , this , SLOT(buttonPressed));



}




}

list::~list()
{
    delete ui;
}

