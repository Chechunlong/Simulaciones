/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jun 17 01:01:43 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDoubleSpinBox *capacidadTanque;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *textboxLlenado;
    QLCDNumber *nivelActualTanque;
    QDial *llaveVaciado;
    QDial *llaveLlenado;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *textboxVaciado;
    QLabel *label_4;
    QFrame *line;
    QLabel *label_3;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *ganancia_lineedit;
    QRadioButton *radioButton;
    QLabel *label_8;
    QLineEdit *setPoint_lineedit;
    QRadioButton *radioButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(357, 350);
        MainWindow->setMinimumSize(QSize(350, 350));
        MainWindow->setMaximumSize(QSize(357, 350));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        capacidadTanque = new QDoubleSpinBox(centralWidget);
        capacidadTanque->setObjectName(QString::fromUtf8("capacidadTanque"));
        capacidadTanque->setSingleStep(0.05);
        capacidadTanque->setValue(20);

        horizontalLayout->addWidget(capacidadTanque);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout->addItem(verticalSpacer_2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        textboxLlenado = new QLineEdit(centralWidget);
        textboxLlenado->setObjectName(QString::fromUtf8("textboxLlenado"));
        textboxLlenado->setEnabled(true);
        textboxLlenado->setReadOnly(false);

        gridLayout->addWidget(textboxLlenado, 2, 0, 1, 1);

        nivelActualTanque = new QLCDNumber(centralWidget);
        nivelActualTanque->setObjectName(QString::fromUtf8("nivelActualTanque"));
        nivelActualTanque->setFrameShape(QFrame::Box);
        nivelActualTanque->setFrameShadow(QFrame::Sunken);
        nivelActualTanque->setSmallDecimalPoint(true);
        nivelActualTanque->setNumDigits(4);
        nivelActualTanque->setDigitCount(4);
        nivelActualTanque->setSegmentStyle(QLCDNumber::Filled);
        nivelActualTanque->setProperty("value", QVariant(0));
        nivelActualTanque->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(nivelActualTanque, 1, 2, 1, 1);

        llaveVaciado = new QDial(centralWidget);
        llaveVaciado->setObjectName(QString::fromUtf8("llaveVaciado"));
        llaveVaciado->setNotchesVisible(true);

        gridLayout->addWidget(llaveVaciado, 1, 4, 1, 1);

        llaveLlenado = new QDial(centralWidget);
        llaveLlenado->setObjectName(QString::fromUtf8("llaveLlenado"));
        llaveLlenado->setValue(0);
        llaveLlenado->setOrientation(Qt::Horizontal);
        llaveLlenado->setWrapping(false);
        llaveLlenado->setNotchesVisible(true);

        gridLayout->addWidget(llaveLlenado, 1, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textboxVaciado = new QLineEdit(centralWidget);
        textboxVaciado->setObjectName(QString::fromUtf8("textboxVaciado"));
        textboxVaciado->setEnabled(true);
        textboxVaciado->setReadOnly(false);

        gridLayout->addWidget(textboxVaciado, 2, 4, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 4, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        ganancia_lineedit = new QLineEdit(centralWidget);
        ganancia_lineedit->setObjectName(QString::fromUtf8("ganancia_lineedit"));

        gridLayout_2->addWidget(ganancia_lineedit, 1, 2, 1, 1);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 2, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        setPoint_lineedit = new QLineEdit(centralWidget);
        setPoint_lineedit->setObjectName(QString::fromUtf8("setPoint_lineedit"));

        gridLayout_2->addWidget(setPoint_lineedit, 0, 2, 1, 1);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Simulaci\303\263n de un tanque de agua con control proporcional", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Capacidad del tanque:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "lts.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Nivel tanque (lts)", 0, QApplication::UnicodeUTF8));
        textboxLlenado->setText(QApplication::translate("MainWindow", "0.00", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "lts/min", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Flujo de llenado", 0, QApplication::UnicodeUTF8));
        textboxVaciado->setText(QApplication::translate("MainWindow", "0.00", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "lts/min", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Flujo de vaciado", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Ganancia :", 0, QApplication::UnicodeUTF8));
        ganancia_lineedit->setText(QApplication::translate("MainWindow", "300", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Set point:", 0, QApplication::UnicodeUTF8));
        setPoint_lineedit->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Automatico", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
