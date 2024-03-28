#include <iostream>
using namespace std;

int sum(int n){
    //base conditon (condition to terminate rescursive computing)
    if (n == 0) return 0;
    
    //Recursive function
    int result = n + sum(n - 1);

    return result;   
}

int main(){
    int n = 0;
    cout<<"Enter number: ";
    cin>>n;
    int result = sum(n);
    cout<<"sum = "<<result<<endl;
    return 0;
}