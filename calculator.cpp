 /*

Grundlagen der Informatik II
Sommersemester 2016
Projekt: Matlab
Gruppenmitglieder:
Kevin Schoen : 4242100
Francesco Kerrl : 422939

*/

#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    resultValue = 0;
    currentValue = 0;
    operatorPressed = 1;
    counter = 0;
    decimalpoint = 0;
    i = 10;
    v1 = 1;
    v2 = 2;
    v3 = 3;
    v4 = 4;
    v5 = 5;
    v6 = 6;
    v7 = 7;
    v8 = 8;
    v9 = 9;
    ui->lcdNumber->setDigitCount(10);
}

/*
Da sich einige "Codewiederholungen" in dem Pogramm befinden werde ich diese vorab erklaeren
und nur auf spezifische deatils im Pogrammcode naeher eingehen.

void Calculator::on_B1_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 1;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v1/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}
Das Aufrufen der Methode fuehrt zu einer Pruefung bei der der wert des "decimalpointer" abgefragt wird.
Bei 0 wird die bisherige zahl um eine Zehnerstelle verschoben und (in diesemfall) 1 hinzuadiert.
Bei 1 wird zu der bisherigen Zahl ein Kommawert hinzugefuegt (in diesemfall) eine 1 hinzugefuegt.
Damit auch werte wie 1.11 moeglich sind wird der Divisionfaktor "i" nach jedem durchgang mit 10 multipliziert.

void Calculator::on_plus_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 1;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }

Damit wieder Mehrstelligezahlen moeglich sind wird der "dezimalpoint" auf 0 gesetzt;
"i" wird analog dazu auch zurueck gesetzt damit Kommazahlen problemlos moeglich sind.
Die Counter abfragen dient der Funktionalitaet es kann erst ab der zweiten eingegebenen Zahl gerechnet werden.
"if( operatorPressed == 1)" prueft welche Rechenoperation ausgefuehrt wird.
Diese wird ihm Folgenden durchgefuehrt und ausgegeben (Funktion: display()).
Die erste Zahl wird zurueck gesetzt und der "operatorPressed" wird auf seinen Standardwert 1 zurueck gesetzt.
*/

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_B1_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 1;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v1/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B2_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 2;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v2/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B3_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 3;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v3/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B4_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 4;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v4/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B5_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 5;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v5/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B6_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 6;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v6/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B7_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 7;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v7/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B8_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 8;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v8/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B9_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 9;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        currentValue = currentValue + v9/i;
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_B0_clicked()
{
    if(decimalpoint == 0){
        currentValue = (currentValue*10) + 0;
        ui->lcdNumber->display(currentValue);
    }
    if(decimalpoint == 1){
        ui->lcdNumber->display(currentValue);
        i = i*10;
    }
}

void Calculator::on_decimalpoint_clicked()
{
    decimalpoint = 1;   //Der "decimalpointer wird auf 1 gesetzt
                        //dardurch sind Kommazahlen moeglich
}

void Calculator::on_plus_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 1;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        /* Da modulo nur mit Ganzen zahlen moeglich ist wird
         * wird erst 0.5 addiert und das Ergebniss der
         * Rechnung abgeschnitten so haben wir kaufmaenisch
         * gerundet.
        */
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 1;
        }
    }
}

void Calculator::on_minus_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 2;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 2;
        }
    }
}

void Calculator::on_mal_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 3;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 3;
        }
    }
}

void Calculator::on_geteilt_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 4;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 4;
        }
    }
}

void Calculator::on_modulo_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 5;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 5;
        }
    }
}

void Calculator::on_potenz_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 6;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 6;
        }
    }
}

void Calculator::on_wurzel_clicked()
{
    decimalpoint = 0;
    i = 10;
    if (counter < 1){
        resultValue = currentValue;
        currentValue = 0;
        operatorPressed = 7;
    }
    ui->lcdNumber->display(resultValue);
    counter++;
    if(counter > 1) {
        if( operatorPressed == 1){
            currentValue = resultValue + currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 2){
            currentValue = resultValue - currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 3){
            currentValue = resultValue * currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 4){
            currentValue = resultValue / currentValue;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 5) {
            currentValue = currentValue + 0.5;
            int helpz = (int)currentValue;
            resultValue = resultValue + 0.5;
            int helpx = (int)resultValue;
            currentValue = helpx % helpz;
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 6) {
            currentValue = pow(resultValue, currentValue);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
        if( operatorPressed == 7) {
            currentValue = pow(resultValue, 0.5);
            resultValue = currentValue;
            ui->lcdNumber->display(currentValue);
            currentValue = 0;
            operatorPressed = 7;
        }
    }
}

void Calculator::on_gleich_clicked()
{
    decimalpoint = 0;
    i = 10;
    counter = 0;
    if(operatorPressed == 1) {
        currentValue = resultValue + currentValue;
        resultValue = 0;
        ui->lcdNumber->display(currentValue);
        operatorPressed = 1;
    }
    if(operatorPressed == 2) {
        currentValue = resultValue - currentValue;
        resultValue = 0;
        ui->lcdNumber->display(currentValue);
        operatorPressed = 1;
    }
    if(operatorPressed == 3) {
        currentValue = resultValue * currentValue;
        resultValue = 0;
        ui->lcdNumber->display(currentValue);
        operatorPressed = 1;
    }
    if(operatorPressed == 4) {
        currentValue = resultValue / currentValue;
        resultValue = 0;
        ui->lcdNumber->display(currentValue);
        operatorPressed = 1;
    }
    if(operatorPressed == 5) {
        currentValue = currentValue + 0.5;
        int helpz = (int)currentValue;
        resultValue = resultValue + 0.5;
        int helpx = (int)resultValue;
        currentValue = helpx % helpz;
        resultValue = currentValue;
        ui->lcdNumber->display(currentValue);
        currentValue = 0;
        operatorPressed = 1;
    }
    if(operatorPressed == 6) {
        currentValue = pow(resultValue, currentValue);
        resultValue = currentValue;
        ui->lcdNumber->display(currentValue);
        currentValue = 0;
        operatorPressed = 1;
    }
    if( operatorPressed == 7) {
        currentValue = pow(resultValue, 0.5);
        resultValue = currentValue;
        ui->lcdNumber->display(currentValue);
        currentValue = 0;
        operatorPressed = 1;
    }
}

void Calculator::on_clear_clicked() // Zuruecksetzten aller Variablen auf den Standartwert
{
    resultValue = 0;
    currentValue = 0;
    operatorPressed = 1;
    counter = 0;
    decimalpoint = 0;
    i = 10;
    ui->lcdNumber->setDigitCount(10);
    ui->lcdNumber->display(currentValue);
}


