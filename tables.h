#ifndef TABLES_H
#define TABLES_H

#include <QDialog>

namespace Ui {
class tables;
}

class tables : public QDialog
{
    Q_OBJECT

public:
    explicit tables(QWidget *parent = nullptr);
    ~tables();

private:
    Ui::tables *ui;
};

#endif // TABLES_H
