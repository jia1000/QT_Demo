#ifndef ENTRY_FORM_H
#define ENTRY_FORM_H

#include <QWidget>

namespace Ui {
class entry_form;
}

class entry_form : public QWidget
{
    Q_OBJECT

public:
    explicit entry_form(QWidget *parent = nullptr);
    ~entry_form();

private slots:
    void on_btn1_clicked();

private:
    Ui::entry_form *ui;
};

#endif // ENTRY_FORM_H