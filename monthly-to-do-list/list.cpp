#include "list.h"
#include "ui_list.h"

list::list(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::list)
{
    ui->setupUi(this);

    QPixmap bkgnd("/Users/alibi/Downloads/pastel-ui-ux-gradient-background-soft-mesh-vector-24814204.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
        
        
    int i =0;
    while (i < 30){
        information[i] = " ";
        i++;
    }
}



list::~list()
{
    delete ui;
}

void list::on_day22_clicked()
{
    tab  = new info (this);

    tab->show();
    tab->on_textEdit_windowIconTextChanged(information[21]);

    information[21] = tab->note;
}

void list::on_day1_clicked()
{
    tab  = new info (this,information[0]);
    
    tab->show();
    tab->on_textEdit_windowIconTextChanged(information[0]);

    information[0] = tab->getinfo();
}


void list::on_day2_clicked()
{
    tab  = new info (this);

    tab->show();
    tab->on_textEdit_windowIconTextChanged(information[1]);
    information[1] = tab->getinfo();
}


void list::on_day3_clicked()
{
    tab  = new info (this,information[2]);
    tab->show();
}


void list::on_day4_clicked()
{
    tab  = new info (this,information[3]);
    tab->show();
}


void list::on_day5_clicked()
{
    tab  = new info (this,information[4]);
    tab->show();
}


void list::on_day6_clicked()
{
    tab  = new info (this,information[5]);
    tab->show();
}


void list::on_day7_clicked()
{
    tab  = new info (this,information[6]);
    tab->show();
}


void list::on_day8_clicked()
{
    tab  = new info (this,information[7]);
    tab->show();
}


void list::on_day9_clicked()
{
    tab  = new info (this,information[8]);
    tab->show();
}


void list::on_day10_clicked()
{
    tab  = new info (this,information[9]);
    tab->show();
}


void list::on_day11_clicked()
{
    tab  = new info (this,information[10]);
    tab->show();
}


void list::on_day12_clicked()
{
    tab  = new info (this,information[11]);
    tab->show();
}


void list::on_day13_clicked()
{
    tab  = new info (this,information[12]);
    tab->show();
}


void list::on_day14_clicked()
{
    tab  = new info (this,information[13]);
    tab->show();
}


void list::on_day15_clicked()
{
    tab  = new info (this,information[14]);
    tab->show();
}


void list::on_day16_clicked()
{
    tab  = new info (this,information[15]);
    tab->show();
}


void list::on_day17_clicked()
{
    tab  = new info (this,information[16]);
    tab->show();
}


void list::on_day18_clicked()
{
    tab  = new info (this,information[17]);
    tab->show();
}


void list::on_day20_clicked()
{
    tab  = new info (this,information[19]);
    tab->show();
}


void list::on_day19_clicked()
{
    tab  = new info (this,information[18]);
    tab->show();
}


void list::on_day21_clicked()
{
    tab  = new info (this,information[20]);
    tab->show();
}


void list::on_day23_clicked()
{
    tab  = new info (this,information[22]);
    tab->show();
}


void list::on_day24_clicked()
{
    tab  = new info (this,information[23]);
    tab->show();
}


void list::on_day25_clicked()
{
    tab  = new info (this,information[24]);
    tab->show();
}


void list::on_day26_clicked()
{
    tab  = new info (this,information[25]);
    tab->show();
}


void list::on_day27_clicked()
{
    tab  = new info (this,information[26]);
    tab->show();
}


void list::on_day28_clicked()
{
    tab  = new info (this,information[27]);
    tab->show();
}


void list::on_day29_clicked()
{
    tab  = new info (this,information[28]);
    tab->show();
}


void list::on_day30_clicked()
{
    tab  = new info (this,information[29]);
    tab->show();
}

