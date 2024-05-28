#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>

inline bool createConnection() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setPort(5432);
    db.setDatabaseName("postgres");
    db.setUserName("postgres");
    db.setPassword("Ronchic100");
    if (!db.open()) {
        QMessageBox::warning(0, "Database Error", db.lastError().text());
        return false;
    } else {
        QMessageBox::information(0, "Connection", "Successful connection!");
        return true;
    }
}
#endif
