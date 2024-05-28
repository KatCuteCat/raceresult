/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 624);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("* {\n"
"    font-family: 'Century Gothic', sans-serif;\n"
"    font-size: 24px;\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"color:#789;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"background-color:rgba(10,30,30,100);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: rgb(33, 83, 96);\n"
"border: none;\n"
"color: rgb(118, 135, 152);\n"
"border-left: 3px solid rgb(34, 60, 69);\n"
"border-right: 3px solid rgb(34, 60, 69);\n"
"border-bottom: 5px solid rgb(34, 60, 69);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(41, 103, 118);\n"
"border-left: 3px solid rgb(41, 72, 82);\n"
"border-right: 3px solid rgb(41, 72, 82);\n"
"border-bottom: 5px solid rgb(41, 72, 82);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: rgb(23, 60, 68);\n"
"border-left: 2px solid rgb(17, 44, 51);\n"
"border-right: 2px solid rgb(17, 44, 51);\n"
"padding-top: -3px;\n"
"border-top: 3px solid rgb(17, 44, 51);\n"
"border-bottom: 2px solid rgb(17, 44, 51);\n"
"}\n"
"\n"
"\n"
"QToolButton\n"
"{\n"
"backgroun"
                        "d-color: rgb(33, 83, 96);\n"
"border-radius:30px;\n"
"}\n"
"\n"
"\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(440, 140, 321, 291));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 170, 301, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 100, 301, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 250, 171, 31));
        pushButton->setAutoRepeatDelay(306);
        pushButton->setAutoRepeatInterval(95);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 40, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 60, 541, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font: 9pt \"Segoe UI\";\n"
"font: 700 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(520, 110, 171, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icons8-sports-mode-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(50, 50));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 RaceResults!", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
