/********************************************************************************
** Form generated from reading UI file 'tables.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLES_H
#define UI_TABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_tables
{
public:

    void setupUi(QDialog *tables)
    {
        if (tables->objectName().isEmpty())
            tables->setObjectName("tables");
        tables->resize(1200, 624);
        tables->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sports-1.png);"));

        retranslateUi(tables);

        QMetaObject::connectSlotsByName(tables);
    } // setupUi

    void retranslateUi(QDialog *tables)
    {
        tables->setWindowTitle(QCoreApplication::translate("tables", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tables: public Ui_tables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLES_H
