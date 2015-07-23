#include "plotform.h"
#include "ui_plotform.h"
#include "mainwindow.h"

PlotForm::PlotForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlotForm)
{
    ui->setupUi(this);

}

PlotForm::~PlotForm()
{
    delete ui;
}

void PlotForm::Graficar(double Y, double y)
{

    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/10000.0;

    ui->plotWidget->addGraph();//Linea roja
    ui->plotWidget->graph(0)->setPen(QPen(Qt::red));
    ui->plotWidget->addGraph();//Linea Azul
    ui->plotWidget->graph(1)->setPen(QPen(Qt::blue));

    ui->plotWidget->graph(0)->addData(key, Y);
    ui->plotWidget->graph(1)->addData(key, y);

    ui->plotWidget->xAxis->setLabel("Tiempo");
    ui->plotWidget->xAxis->setTickLabelType(QCPAxis::ltDateTime);
    ui->plotWidget->yAxis->setLabel("Controlador/Nivel tanque");

    ui->plotWidget->graph(0)->removeDataBefore(key-8);
    ui->plotWidget->graph(1)->removeDataBefore(key-8);

    ui->plotWidget->yAxis->setRange(0, 100);
    ui->plotWidget->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
    ui->plotWidget->replot();

}
