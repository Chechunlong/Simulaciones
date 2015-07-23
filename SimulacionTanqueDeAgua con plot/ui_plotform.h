/********************************************************************************
** Form generated from reading UI file 'plotform.ui'
**
** Created: Sat Jun 30 16:22:50 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTFORM_H
#define UI_PLOTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotForm
{
public:
    QCustomPlot *plotWidget;

    void setupUi(QWidget *PlotForm)
    {
        if (PlotForm->objectName().isEmpty())
            PlotForm->setObjectName(QString::fromUtf8("PlotForm"));
        PlotForm->resize(724, 490);
        plotWidget = new QCustomPlot(PlotForm);
        plotWidget->setObjectName(QString::fromUtf8("plotWidget"));
        plotWidget->setGeometry(QRect(10, 10, 701, 471));

        retranslateUi(PlotForm);

        QMetaObject::connectSlotsByName(PlotForm);
    } // setupUi

    void retranslateUi(QWidget *PlotForm)
    {
        PlotForm->setWindowTitle(QApplication::translate("PlotForm", "Gr\303\241fica", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlotForm: public Ui_PlotForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTFORM_H
