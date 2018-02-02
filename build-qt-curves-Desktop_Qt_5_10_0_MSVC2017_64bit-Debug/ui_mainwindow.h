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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    RenderArea *renderArea;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnBackgroundColor;
    QPushButton *btnLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QPushButton *btnHuygens;
    QPushButton *btnHypo;
    QPushButton *btnLine;
    QPushButton *btnCircle;
    QPushButton *btnEllipse;
    QPushButton *btnFunny;
    QPushButton *btnStar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(528, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));

        verticalLayout_2->addWidget(renderArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnBackgroundColor = new QPushButton(centralWidget);
        btnBackgroundColor->setObjectName(QStringLiteral("btnBackgroundColor"));

        horizontalLayout_4->addWidget(btnBackgroundColor);

        btnLineColor = new QPushButton(centralWidget);
        btnLineColor->setObjectName(QStringLiteral("btnLineColor"));

        horizontalLayout_4->addWidget(btnLineColor);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnAstroid = new QPushButton(centralWidget);
        btnAstroid->setObjectName(QStringLiteral("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(centralWidget);
        btnCycloid->setObjectName(QStringLiteral("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        btnHuygens = new QPushButton(centralWidget);
        btnHuygens->setObjectName(QStringLiteral("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnHypo = new QPushButton(centralWidget);
        btnHypo->setObjectName(QStringLiteral("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnLine = new QPushButton(centralWidget);
        btnLine->setObjectName(QStringLiteral("btnLine"));

        verticalLayout->addWidget(btnLine);

        btnCircle = new QPushButton(centralWidget);
        btnCircle->setObjectName(QStringLiteral("btnCircle"));

        verticalLayout->addWidget(btnCircle);

        btnEllipse = new QPushButton(centralWidget);
        btnEllipse->setObjectName(QStringLiteral("btnEllipse"));

        verticalLayout->addWidget(btnEllipse);

        btnFunny = new QPushButton(centralWidget);
        btnFunny->setObjectName(QStringLiteral("btnFunny"));

        verticalLayout->addWidget(btnFunny);

        btnStar = new QPushButton(centralWidget);
        btnStar->setObjectName(QStringLiteral("btnStar"));

        verticalLayout->addWidget(btnStar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(centralWidget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setMinimumSize(QSize(60, 20));
        spinScale->setMaximumSize(QSize(60, 20));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinInterval = new QDoubleSpinBox(centralWidget);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMinimumSize(QSize(60, 20));
        spinInterval->setMaximumSize(QSize(60, 20));
        spinInterval->setDecimals(2);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(centralWidget);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMinimumSize(QSize(60, 20));
        spinCount->setMaximumSize(QSize(60, 20));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(8);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

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
        btnBackgroundColor->setText(QApplication::translate("MainWindow", "Background Color", nullptr));
        btnLineColor->setText(QApplication::translate("MainWindow", "Line Color", nullptr));
        btnAstroid->setText(QApplication::translate("MainWindow", "Astroid", nullptr));
        btnCycloid->setText(QApplication::translate("MainWindow", "Cycloid", nullptr));
        btnHuygens->setText(QApplication::translate("MainWindow", "Huygens", nullptr));
        btnHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
        btnLine->setText(QApplication::translate("MainWindow", "Line", nullptr));
        btnCircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
        btnEllipse->setText(QApplication::translate("MainWindow", "Ellipse", nullptr));
        btnFunny->setText(QApplication::translate("MainWindow", "Funny", nullptr));
        btnStar->setText(QApplication::translate("MainWindow", "Star", nullptr));
        label->setText(QApplication::translate("MainWindow", "Scale :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Interval Length :", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Step Count :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
