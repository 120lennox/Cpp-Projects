/**
 * UNIMA DAYS: LAB 3 TASKS OPERATORS 
 * @author Lennox Mountain
 * assigned by: Francis Mzember(phd)
*/
#include <iostream>
using namespace std;

void logicaloperators(int a, int b){
    if (a && b){
        cout<<"a and b is true"<<endl;
    }
    else if (a||b){
        cout<<"a or b is true"<<endl;
    }
}

int bitwiseAND(int a, int b){
    return a & b;
}

int bitwiseOR(int a, int b){
    return a | b;
}

int bitwiseXOR(int a, int b){
    return a ^ b;
}

int bitwiseOnesComplement(int a){
    return ~a;
}

int leftShift(int number, int points){
    return number << points;
}

int rightShift(int number, int points){
    return number >> points;
}

//assignement operators 
int leftShift_assign(int num, int points){
    return num <<= points;
}

int rightShift_assign(int num, int points){
    return num >>= points;
}


/**
 * a and b are true because both are non-zero
*/
int main(){
    int x = 60;
    int y = 20;
    int points = 2;
    logicaloperators(5, 20);
    cout<<"bitwise AND: "<<bitwiseAND(x, y)<<endl;
    cout<<"bitwise OR: "<<bitwiseOR(x, y)<<endl;
    cout<<"bitwise XOR: "<<bitwiseXOR(x, y)<<endl;
    cout<<"bitwise OnesCompliment: "<<bitwiseOnesComplement(x)<<endl;
    cout<<leftShift(x, points)<<endl;
    cout<<leftShift(y, points)<<endl;

}
