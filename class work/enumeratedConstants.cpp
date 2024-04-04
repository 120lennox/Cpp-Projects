/**
 * @author Lennox Mountain
 * this section explains constants 
*/

#include <iostream>
using namespace std;

//parameter constants

int add(const int num1, int num2){
    return num1 + num2;
}

//why having a constant parameter ? 
/**
 * restrict changing of a variable inside the function scope
 * int add(const int num1, int num2){
 *      num1 = 0; this cannot work
 *      return num1 + num2;
 * }
*/

/**
 * ENUMERATED CONSTANTS
 * @author Lennox Mountain
 * these are user defined constants
*/

enum MONTHS {
    January, 
    February,
    March, 
    April, 
    May, 
    June
};

int main(){
    MONTHS thisMonth = April;

    if (thisMonth == June){
        cout<<"I like the weather in June"<<endl;
    }

    else
        cout<<"Its not June yet!"<<endl;
}