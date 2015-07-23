#include "calcular.h"
#include "mainwindow.h"

calcular::calcular()
{
    double cap =   ui->capacidadTanque->value();
        double flIn = (ui->llaveLlenado->value() * 20) / 99;
        double flOut = (ui->llaveVaciado->value() * 20) / 99;
        double nivelActual = ui->nivelActualTanque->value();
        double porcentaje;

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

            double setPoint = ui->setPoint_lineedit->text().toDouble();
            double bandaMuerta = ui->bandaMuerta_lineedit->text().toDouble();


            if ( ui->llaveLlenado->value() > 0  && ui->nivelActualTanque->value()  > (setPoint + (bandaMuerta/2))  ) {
                ui->etq_salidacontrolador->setText("Cerrado");
                ui->llaveLlenado->setValue(0);
            }

            if ( (ui->llaveLlenado->value() == 0)  && ( ui->nivelActualTanque->value()  < (setPoint - (bandaMuerta/2) )   )  ) {
                ui->etq_salidacontrolador->setText("Abierto");
                ui->llaveLlenado->setValue(99);

              }
        }
        emit valorSalida(ui->llaveLlenado->value(), nivelActual);

}
