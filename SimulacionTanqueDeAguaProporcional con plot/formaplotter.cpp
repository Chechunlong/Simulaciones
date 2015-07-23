#include "formaplotter.h"
#include "ui_formaplotter.h"

FormaPlotter::FormaPlotter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormaPlotter)
{
    ui->setupUi(this);
}

FormaPlotter::~FormaPlotter()
{
    delete ui;
}
