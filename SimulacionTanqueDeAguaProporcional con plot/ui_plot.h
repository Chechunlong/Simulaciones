/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created: Mon Jun 4 19:46:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_plot
{
public:
    QCustomPlot *grafWidget;

    void setupUi(QWidget *plot)
    {
        if (plot->objectName().isEmpty())
            plot->setObjectName(QString::fromUtf8("plot"));
        plot->resize(400, 300);
        grafWidget = new QCustomPlot(plot);
        grafWidget->setObjectName(QString::fromUtf8("grafWidget"));
        grafWidget->setGeometry(QRect(10, 10, 381, 281));

        retranslateUi(plot);

        QMetaObject::connectSlotsByName(plot);
    } // setupUi

    void retranslateUi(QWidget *plot)
    {
        plot->setWindowTitle(QApplication::translate("plot", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class plot: public Ui_plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
