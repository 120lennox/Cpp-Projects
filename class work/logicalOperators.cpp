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

/**
 * a and b are true because both are non-zero
*/
int main(){
    logicaloperators(5, 20);
}
