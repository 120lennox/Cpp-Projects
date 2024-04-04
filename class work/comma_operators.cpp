/**
 * this file explores the power of comma operators in cpp
 * @author Lennox Mountain
 * assigned by: Francis Kambiri (phd)
*/

#include <iostream>
#include <string>
using namespace std;

int commaOne(){
    int number;
    int incr;

    int result = (number = 100, incr++, number + 1);
    return result;
}

int ternary_operator(){
    int x, y = 21;

    x = (y<10) ? y + 10 : y;
    return x;
}

int main(){
    cout<<ternary_operator()<<endl;
}