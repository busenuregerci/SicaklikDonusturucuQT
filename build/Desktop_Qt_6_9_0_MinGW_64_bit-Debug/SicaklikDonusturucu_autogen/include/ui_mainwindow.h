/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButtonCtoF;
    QPushButton *pushButtonFtoC;
    QLabel *labelSonuc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(829, 202);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 50, 171, 31));
        pushButtonCtoF = new QPushButton(centralwidget);
        pushButtonCtoF->setObjectName("pushButtonCtoF");
        pushButtonCtoF->setGeometry(QRect(260, 10, 321, 51));
        pushButtonFtoC = new QPushButton(centralwidget);
        pushButtonFtoC->setObjectName("pushButtonFtoC");
        pushButtonFtoC->setGeometry(QRect(260, 90, 321, 51));
        labelSonuc = new QLabel(centralwidget);
        labelSonuc->setObjectName("labelSonuc");
        labelSonuc->setGeometry(QRect(610, 40, 191, 41));
        labelSonuc->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 829, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sicaklik Donusturucu", nullptr));
        pushButtonCtoF->setText(QCoreApplication::translate("MainWindow", "Celcius To Fahreneit", nullptr));
        pushButtonFtoC->setText(QCoreApplication::translate("MainWindow", "Fahreneit To Celcius", nullptr));
        labelSonuc->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
