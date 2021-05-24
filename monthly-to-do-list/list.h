#ifndef LIST_H
#define LIST_H
#include "info.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class list; }
QT_END_NAMESPACE

class list : public QMainWindow
{
    Q_OBJECT

public:

    QString information[30];

    list(QWidget *parent = nullptr);
    ~list();

private:
    Ui::list *ui;
    info * tab;

 private slots:


    void on_day22_clicked();
    void on_day1_clicked();
    void on_day2_clicked();
    void on_day3_clicked();
    void on_day4_clicked();
    void on_day5_clicked();
    void on_day6_clicked();
    void on_day7_clicked();
    void on_day8_clicked();
    void on_day9_clicked();
    void on_day10_clicked();
    void on_day11_clicked();
    void on_day12_clicked();
    void on_day13_clicked();
    void on_day14_clicked();
    void on_day15_clicked();
    void on_day16_clicked();
    void on_day17_clicked();
    void on_day18_clicked();
    void on_day20_clicked();
    void on_day19_clicked();
    void on_day21_clicked();
    void on_day23_clicked();
    void on_day24_clicked();
    void on_day25_clicked();
    void on_day26_clicked();
    void on_day27_clicked();
    void on_day28_clicked();
    void on_day29_clicked();
    void on_day30_clicked();
};
#endif // LIST_H
