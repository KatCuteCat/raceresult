#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tables.h"
#include <QPixmap>
#include <QPalette>
#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Установка начального фонового изображения
    QPixmap pixmap(":/new/prefix1/sports-1.png");
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event); // Обработка базового события

    // Изменение фонового изображения при изменении размера окна
    QPixmap pixmap(":/new/prefix1/sports-1.png");
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));
    this->setPalette(palette);
}

void MainWindow::on_pushButton_clicked()
{
    tables t;
    t.setModal(true);
    t.exec();
}

