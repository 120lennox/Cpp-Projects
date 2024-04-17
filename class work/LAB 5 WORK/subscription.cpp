#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void evaluateSubscripption(){
    //seed the rand() function so you get a different number everytime it's run
    srand(time(0));
    int daysUntilExpiration = rand();

    if (daysUntilExpiration == 0){
        cout<<"You have an active subscription"<<endl; 
    }

    else if(daysUntilExpiration <= 1){
        cout<<"You have an active subscription"<<endl;
    }

    else if(daysUntilExpiration <= 5){
        cout<<"You have an active subscription"<<endl;
    }

    else if(daysUntilExpiration <= 10){
        cout<<"You have an active subscription"<<endl;
    }

    else{
        cout<<"You have an active subscription"<<endl;
    }

    
}