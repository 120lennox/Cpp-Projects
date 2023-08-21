#include <iostream>
#include "header.h"
#include "Arithmetic.cpp"
#include "Trigonometry.cpp"
#include "Display.cpp"
using namespace std;

int main(){

    //class instances
    Arithmetic arithmetic; 
    Trigonometry trigonometry;
    Display display;

    //variables 
    int option;
    double inputA;
    double inputB;
    double angle;
    double result;

    //Welcome Text
    char message[] = "##### </>Commandline Calculator #####";
    printf("%s \n", message);
    printf("Select option: \n 1. Arithmetic \n 2. Trigonometry \n");
    printf("Option: ");
    cin>> option;
    putchar('\n');

    //detecting option
    //Arithmetic Operations
    if (option == 1){
        display.show_Arithmetic_functions();
        printf("Option: ");
        cin>> option;
        
        //Arithmetic Addition 
        if (option == 1){
            printf("First number: ");
            cin>> inputA;
            printf("Second number: ");
            cin>> inputB;

            result = arithmetic.add(inputA, inputB);
            display.show_results(result);
        }

        //Arithmetic subtraction 
        else if (option == 2){
            printf("First number: ");
            cin>> inputA;
            printf("Second number: ");
            cin>> inputB;

            result = arithmetic.subtract(inputA, inputB);
            display.show_results(result);
        }

        //Arithmetic Multiplication
        else if (option == 3){
            printf("First number: ");
            cin>> inputA;
            printf("Second number: ");
            cin>> inputB;

            result = arithmetic.multiply(inputA, inputB);
            display.show_results(result);
        }

        //Arithmetic Division
        else if (option == 4){
            printf("First number: ");
            cin>> inputA;
            printf("Second number: ");
            cin>> inputB;

            result = arithmetic.divide(inputA, inputB);
            display.show_results(result);
        }
        else {
            printf("invalid option!");
        }
    }

    //Trig Operations
    else if (option == 2){
        display.show_Trigonometry_options();
        printf("Option: ");
        cin>> option;

        if (option == 1){
            printf("Angle: ");
            cin>> angle;

            result = trigonometry.tangent(angle);
            display.show_results(result);
        }

        else if (option == 2){
            printf("Angle: ");
            cin>> angle;

            result = trigonometry.sine(angle);
            display.show_results(result);
        }

        else if (option == 3){
            printf("Angle: ");
            cin>> angle;

            result = trigonometry.cosine(angle);
            display.show_results(result);
        }

    }

}