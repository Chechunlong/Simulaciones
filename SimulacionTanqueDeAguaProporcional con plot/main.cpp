#include <QtGui/QApplication>
#include "mainwindow.h"
#include "formaplotter.h"
#include "plot.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    FormaPlotter fm;
    fm.show();

   return a.exec();
}
