#include "header.h"
#include <iostream>
using namespace std;

double Arithmetic::add(double a, double b){
    return a + b;
}

double Arithmetic::subtract(double a, double b){
    return a - b;
}

double Arithmetic::multiply(double a, double b){
    return a * b;
}

double Arithmetic::divide(double a, double b){
    if (b != 0){
        return a / b;
    }
    else {
        return 0.00;
    }
}