#include "tables.h"
#include "ui_tables.h"

tables::tables(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tables)
{
    ui->setupUi(this);
}

tables::~tables()
{
    delete ui;
}
