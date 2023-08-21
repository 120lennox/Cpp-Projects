#include <iostream>
#include "header.h"
using namespace std;

void Display::show_Arithmetic_functions(){
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
}

void Display::show_Trigonometry_options(){
    cout<<"1. Tangent"<<endl;
    cout<<"2. Sine"<<endl;
    cout<<"1. Cosine"<<endl;
}

void Display::show_results(double result){
    cout<<"Answer: "<< result <<endl;
}