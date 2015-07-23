#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
     MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Timer();

protected:
    void changeEvent(QEvent *e);

private:

    Ui::MainWindow *ui;



private slots:
    void on_pushButton_clicked();
    void on_btnIniciar_clicked();
    void on_btnParar_clicked();
    void calcular();
};

#endif // MAINWINDOW_H
