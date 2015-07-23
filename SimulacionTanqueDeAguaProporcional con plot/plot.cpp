#include "plot.h"
#include "ui_plot.h"

plot::plot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plot)
{
    ui->setupUi(this);
}

plot::~plot()
{
    delete ui;
}

void plot::graficar(double x, double y)
{

//QVector<double> X(101), Y(101);
//X = x;
//Y = y;

ui->grafWidget->addGraph();
ui->grafWidget->graph(0)->setPen(QPen(Qt::blue));
ui->grafWidget->graph(0);

ui->grafWidget->xAxis->setTickLabelType(QCPAxis::ltDateTime);
ui->grafWidget->xAxis->setDateTimeFormat("hh:mm:ss");


ui->grafWidget->xAxis->setAutoTickStep(false);
ui->grafWidget->xAxis->setTickStep(2);
ui->grafWidget->setupFullAxesBox();

//ui->grafWidget->xAxis->setLabel("Tiempo en ms x 100");
ui->grafWidget->yAxis->setLabel("Salida del controlador");

ui->grafWidget->graph(0)->addData(x, y);

ui->grafWidget->graph(0)->removeDataBefore(x-8);
ui->grafWidget->graph(0)->rescaleValueAxis();
ui->grafWidget->xAxis->setRange(x+0.25, 8, Qt::AlignRight);

ui->grafWidget->replot();



}
