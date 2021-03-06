#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QString>



MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Timer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}



void MainWindow::Timer()
{
    QTimer *timer = new QTimer(this);
    QObject::connect( timer, SIGNAL(timeout()), this, SLOT(calcular()));
    timer->start(100);
}


void MainWindow::calcular()
{

    double cap =   ui->capacidadTanque->value();
    double flIn = (ui->llaveLlenado->value() * 20) / 99;
    double flOut = (ui->llaveVaciado->value() * 20) / 99;
    double nivelActual = ui->nivelActualTanque->value();
    double porcentaje;
    double setPoint = ui->setPoint_lineedit->text().toDouble();
    double k = ui->ganancia_lineedit->text().toDouble();
    double error =  (k * (setPoint - nivelActual) ) + 50;

    ui->textboxLlenado->setText( QString::number(flIn,'f',2) );
    ui->textboxVaciado->setText( QString::number(flOut,'f',2) );

    nivelActual = nivelActual + (flIn/600) - (flOut/600);

    if (nivelActual >= 0 && nivelActual <= cap)
    {
        ui->nivelActualTanque->display( nivelActual );
        porcentaje = nivelActual*100 / cap;
        ui->statusBar->showMessage("Nivel del tanque: " + QString::number(porcentaje,'f',2) + "%");
    }

    if (nivelActual < 0)
    {
        ui->nivelActualTanque->display(0 );
        ui->statusBar->showMessage("Tanque vacio", 0);
    }

    if (nivelActual > cap)
    {
        ui->nivelActualTanque->display( cap );
        ui->statusBar->showMessage("Tanque rebosando", 0);
    }


    //loop control on / off en automatico
    if (ui->radioButton_2->isChecked() == false){

        ui->llaveLlenado->setDisabled(0);}

    if (ui->radioButton_2->isChecked() == true){

        ui->llaveLlenado->setDisabled(1);
        ui->llaveLlenado->setValue(error);
        }
    }



void MainWindow::on_pushButton_clicked()
{

}
void MainWindow::on_btnIniciar_clicked()
{
}

void MainWindow::on_btnParar_clicked()
{
}
