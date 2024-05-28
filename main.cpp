#include "mainwindow.h"
#include <QApplication>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // supposemsiep, sctc nu connecting db
    if (!createConnection())
        return 1;


    w.show();

    return a.exec();
}
