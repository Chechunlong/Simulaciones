#ifndef PLOTFORM_H
#define PLOTFORM_H

#include <QWidget>

namespace Ui {
class PlotForm;
}

class PlotForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit PlotForm(QWidget *parent = 0);
    ~PlotForm();

private:
    Ui::PlotForm *ui;

private slots:
    void Graficar(double Y, double y);

};

#endif // PLOTFORM_H
