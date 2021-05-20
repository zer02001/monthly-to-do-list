#ifndef LIST_H
#define LIST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class list; }
QT_END_NAMESPACE

class list : public QMainWindow
{
    Q_OBJECT

public:
    list(QWidget *parent = nullptr);
    ~list();

private:
    Ui::list *ui;
 private slots:
    void buttonPressed();

};
#endif // LIST_H
