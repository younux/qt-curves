/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    RenderArea *renderArea;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QPushButton *btnHuygens;
    QPushButton *btnHypo;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(496, 352);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(13, 13, 471, 301));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        renderArea = new RenderArea(widget);
        renderArea->setObjectName(QStringLiteral("renderArea"));

        horizontalLayout->addWidget(renderArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnAstroid = new QPushButton(widget);
        btnAstroid->setObjectName(QStringLiteral("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(widget);
        btnCycloid->setObjectName(QStringLiteral("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        btnHuygens = new QPushButton(widget);
        btnHuygens->setObjectName(QStringLiteral("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnHypo = new QPushButton(widget);
        btnHypo->setObjectName(QStringLiteral("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        verticalSpacer = new QSpacerItem(78, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAstroid->setText(QApplication::translate("MainWindow", "Astroid", nullptr));
        btnCycloid->setText(QApplication::translate("MainWindow", "Cycloid", nullptr));
        btnHuygens->setText(QApplication::translate("MainWindow", "Huygens", nullptr));
        btnHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
