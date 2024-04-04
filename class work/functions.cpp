/**
 * @author Lennox Mountain
 * This program displays correct function definitions
 * the incorrect ones are commented out
*/
#include<iostream>
#include <string>

int add(int num1, int num2);
int add(int num1, float num2);

/*illegal function declaration. oonly differs the return type but the paarameters are the same*/
//void add(int num1, int num2);

/**
 * @author Lennox Mountain
 * The code below explains the namespaces
*/

namespace lennox {
    int number; 
    void printName();
}

//using namespaces 
int main(){
    lennox::number = 120;
    std::cout<<lennox::number<<std::endl;
}

/**
 * namespace directives 
 * "using directives": saves you from writing the namespace name everytime you wan to use a variable
*/

using namespace lennox;
