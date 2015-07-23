/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat May 26 17:40:54 2012
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QRadioButton>
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
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QDial *llaveLlenado;
    QLineEdit *textboxLlenado;
    QLabel *label_2;
    QDial *llaveVaciado;
    QLabel *label_3;
    QLineEdit *textboxVaciado;
    QLabel *label_4;
    QLCDNumber *nivelActualTanque;
    QLabel *label_7;
    QFrame *line;
    QFrame *line_2;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *setPoint_lineedit;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *etq_salidacontrolador;
    QLabel *label_11;
    QLineEdit *ganancia_lineedit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 480);
        MainWindow->setMinimumSize(QSize(360, 480));
        MainWindow->setMaximumSize(QSize(360, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(-1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        capacidadTanque = new QDoubleSpinBox(centralWidget);
        capacidadTanque->setObjectName(QString::fromUtf8("capacidadTanque"));
        capacidadTanque->setSingleStep(0.05);
        capacidadTanque->setValue(20);

        horizontalLayout->addWidget(capacidadTanque);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        llaveLlenado = new QDial(centralWidget);
        llaveLlenado->setObjectName(QString::fromUtf8("llaveLlenado"));
        llaveLlenado->setValue(0);
        llaveLlenado->setOrientation(Qt::Horizontal);
        llaveLlenado->setWrapping(false);
        llaveLlenado->setNotchesVisible(true);

        gridLayout->addWidget(llaveLlenado, 1, 0, 1, 1);

        textboxLlenado = new QLineEdit(centralWidget);
        textboxLlenado->setObjectName(QString::fromUtf8("textboxLlenado"));
        textboxLlenado->setEnabled(true);
        textboxLlenado->setReadOnly(false);

        gridLayout->addWidget(textboxLlenado, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        llaveVaciado = new QDial(centralWidget);
        llaveVaciado->setObjectName(QString::fromUtf8("llaveVaciado"));
        llaveVaciado->setNotchesVisible(true);

        gridLayout->addWidget(llaveVaciado, 1, 4, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        textboxVaciado = new QLineEdit(centralWidget);
        textboxVaciado->setObjectName(QString::fromUtf8("textboxVaciado"));
        textboxVaciado->setEnabled(true);
        textboxVaciado->setReadOnly(false);

        gridLayout->addWidget(textboxVaciado, 2, 4, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 4, 1, 1);

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

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 29, 331, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        setPoint_lineedit = new QLineEdit(gridLayoutWidget);
        setPoint_lineedit->setObjectName(QString::fromUtf8("setPoint_lineedit"));

        gridLayout_2->addWidget(setPoint_lineedit, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        etq_salidacontrolador = new QLabel(gridLayoutWidget);
        etq_salidacontrolador->setObjectName(QString::fromUtf8("etq_salidacontrolador"));

        gridLayout_2->addWidget(etq_salidacontrolador, 1, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        ganancia_lineedit = new QLineEdit(gridLayoutWidget);
        ganancia_lineedit->setObjectName(QString::fromUtf8("ganancia_lineedit"));

        gridLayout_2->addWidget(ganancia_lineedit, 2, 1, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 3, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Simulaci\303\263n de un tanque de agua", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Capacidad del tanque:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "lts.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Flujo de llenado", 0, QApplication::UnicodeUTF8));
        textboxLlenado->setText(QApplication::translate("MainWindow", "0.00", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "lts/min", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Flujo de vaciado", 0, QApplication::UnicodeUTF8));
        textboxVaciado->setText(QApplication::translate("MainWindow", "0.00", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "lts/min", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Nivel tanque (lts)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Control On/Off", 0, QApplication::UnicodeUTF8));
        setPoint_lineedit->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Set point:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Salida del controlador:", 0, QApplication::UnicodeUTF8));
        etq_salidacontrolador->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Ganancia :", 0, QApplication::UnicodeUTF8));
        ganancia_lineedit->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Automatico", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
