#include <QtGui/QApplication>
#include "mainwindow.h"
#include "plotform.h"
#include "qcustomplot.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    MainWindow w;
    PlotForm pf;

    QObject::connect(&w, SIGNAL(valorSalida(double, double)), &pf, SLOT(Graficar(double, double)));

    w.show();
    pf.show();

    return a.exec();
}
