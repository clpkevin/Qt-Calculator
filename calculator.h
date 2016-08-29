#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <math.h>

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:

    void on_B1_clicked();

    void on_B3_clicked();

    void on_B2_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

    void on_B9_clicked();

    void on_B0_clicked();

    void on_clear_clicked();

    void on_mal_clicked();

    void on_geteilt_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_gleich_clicked();

    void on_modulo_clicked();

    void on_potenz_clicked();

    void on_decimalpoint_clicked();

    void on_wurzel_clicked();

private:
    Ui::Calculator *ui;
    double resultValue;
    double currentValue;
    int operatorPressed;
    int counter;
    int decimalpoint;
    int i;
    double v1, v2, v3, v4, v5, v6, v7, v8, v9, v0;
};

#endif // CALCULATOR_H
