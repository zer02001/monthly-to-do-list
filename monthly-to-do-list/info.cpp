#include "info.h"
#include "ui_info.h"
#include <QTextEdit>
info::info(QWidget *parent, QString info) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);


    ui->lineEdit->setText(info);
note = info;

QPixmap bkgnd("/Users/alibi/Downloads/pastel-ui-ux-gradient-background-soft-mesh-vector-24814204.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}


void info::on_textEdit_windowIconTextChanged( QString &iconText)
{
ui->lineEdit->setText(iconText);

//note = iconText;

}

info::~info()
{
    delete ui;
}

void info::on_Save_clicked()
{


    QString information = ui->lineEdit->displayText();


   note  = information;

this ->hide();
}

QString info::getinfo(){

return note;

}








