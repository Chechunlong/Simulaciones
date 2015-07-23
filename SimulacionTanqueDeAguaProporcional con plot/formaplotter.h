#ifndef FORMAPLOTTER_H
#define FORMAPLOTTER_H

#include <QWidget>

namespace Ui {
class FormaPlotter;
}

class FormaPlotter : public QWidget
{
    Q_OBJECT
    
public:
    explicit FormaPlotter(QWidget *parent = 0);
    ~FormaPlotter();
    
private:
    Ui::FormaPlotter *ui;
};

#endif // FORMAPLOTTER_H
