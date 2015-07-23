/********************************************************************************
** Form generated from reading UI file 'formaplotter.ui'
**
** Created: Sun Jun 17 01:04:04 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMAPLOTTER_H
#define UI_FORMAPLOTTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormaPlotter
{
public:
    QWidget *widget;

    void setupUi(QWidget *FormaPlotter)
    {
        if (FormaPlotter->objectName().isEmpty())
            FormaPlotter->setObjectName(QString::fromUtf8("FormaPlotter"));
        FormaPlotter->resize(640, 480);
        widget = new QWidget(FormaPlotter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 621, 461));

        retranslateUi(FormaPlotter);

        QMetaObject::connectSlotsByName(FormaPlotter);
    } // setupUi

    void retranslateUi(QWidget *FormaPlotter)
    {
        FormaPlotter->setWindowTitle(QApplication::translate("FormaPlotter", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormaPlotter: public Ui_FormaPlotter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMAPLOTTER_H
