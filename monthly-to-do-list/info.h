#ifndef INFO_H
#define INFO_H

#include <QDialog>

namespace Ui {
class info;
}

class info : public QDialog
{
    Q_OBJECT

public:
    QString note;
    explicit info(QWidget *parent = nullptr, QString info="");
    QString getinfo();
    ~info();

public slots:
    void on_textEdit_windowIconTextChanged( QString &iconText);

private slots:
    void on_Save_clicked();

private:
    Ui::info *ui;
};

#endif // INFO_H
