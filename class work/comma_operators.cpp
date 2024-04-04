/**
 * this file explores the power of comma operators in cpp
 * @author Lennox Mountain
 * assigned by: Francis Kambiri (phd)
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int commaOne(){
    int number;
    int incr;

    int result = (number = 100, incr++, number + 1);
    return result;
}

int assignVar(){
    int i, j;
    i = 20;
    j = (i + 10, 100 + i, ++i);
    return j;
}

void strings(){
    string s1 = "Lennox";
    string s2 = "Lennox";
    char s3 = 'A';
}

int ternary_operator(){
    int x, y = 21;

    x = (y<10) ? y + 10 : y;
    return x;
}

int main(){
    //cout<<ternary_operator()<<endl;
    cout<<assignVar()<<endl;

}