#include <iostream>
#include <cmath>
#include "header.h"
using namespace std;

//constant variables 
const double PI = 3.141592653;
const double straight_angle = 180.00;

//method implementations 
double Trigonometry::tangent(double angle){
    double rad_coverted = (angle * PI) / straight_angle; 
    return tan(rad_coverted);
}

double Trigonometry::sine(double angle){
    double rad_coverted = (angle * PI) / straight_angle; 
    return sin(rad_coverted);
}

double Trigonometry::cosine(double angle){
    double rad_coverted = (angle * PI) / straight_angle; 
    return cos(rad_coverted);
}