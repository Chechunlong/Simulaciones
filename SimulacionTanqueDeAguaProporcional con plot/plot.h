#ifndef PLOT_H
#define PLOT_H

#include <QWidget>

namespace Ui {
class plot;
}

class plot : public QWidget
{
    Q_OBJECT

public:
    explicit plot(QWidget *parent = 0);
    void graficar(double x, double y);

    ~plot();
    
private:
    Ui::plot *ui;
};

#endif // PLOT_H
