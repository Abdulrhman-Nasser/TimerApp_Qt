/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pb_stop;
    QLCDNumber *lcdNumber;
    QPushButton *pb_start;
    QDial *dial;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_red;
    QPushButton *pb_green;
    QPushButton *pb_blue;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_on;
    QPushButton *pb_off;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(583, 754);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        pb_stop = new QPushButton(groupBox);
        pb_stop->setObjectName("pb_stop");
        pb_stop->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));

        gridLayout->addWidget(pb_stop, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName("lcdNumber");

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 1);

        pb_start = new QPushButton(groupBox);
        pb_start->setObjectName("pb_start");
        pb_start->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));

        gridLayout->addWidget(pb_start, 1, 1, 1, 1);

        dial = new QDial(groupBox);
        dial->setObjectName("dial");
        dial->setEnabled(true);
        dial->setFocusPolicy(Qt::WheelFocus);
        dial->setAutoFillBackground(false);
        dial->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        dial->setMinimum(0);
        dial->setMaximum(10);
        dial->setPageStep(10);
        dial->setValue(0);
        dial->setSliderPosition(0);
        dial->setTracking(true);
        dial->setInvertedAppearance(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pb_red = new QPushButton(groupBox_2);
        pb_red->setObjectName("pb_red");
        pb_red->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pb_red);

        pb_green = new QPushButton(groupBox_2);
        pb_green->setObjectName("pb_green");
        pb_green->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 255, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pb_green);

        pb_blue = new QPushButton(groupBox_2);
        pb_blue->setObjectName("pb_blue");
        pb_blue->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pb_blue);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pb_on = new QPushButton(groupBox_2);
        pb_on->setObjectName("pb_on");
        pb_on->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(pb_on);

        pb_off = new QPushButton(groupBox_2);
        pb_off->setObjectName("pb_off");
        pb_off->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pb_off);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 583, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        pb_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pb_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "LED Control", nullptr));
        pb_red->setText(QCoreApplication::translate("MainWindow", "RED", nullptr));
        pb_green->setText(QCoreApplication::translate("MainWindow", "GREEN", nullptr));
        pb_blue->setText(QCoreApplication::translate("MainWindow", "BLUE", nullptr));
        pb_on->setText(QCoreApplication::translate("MainWindow", "Turn On", nullptr));
        pb_off->setText(QCoreApplication::translate("MainWindow", "Turn Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
