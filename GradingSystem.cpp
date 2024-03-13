#include <iostream>
#include <string>
using namespace std;

int main(){
    const int student_num = 2;
    string students[student_num];
    char sex[student_num];
    float grades[student_num];
    string name;
    float grade;
    char sexs;

    int controller;
    cout<<"1. start, 0. quit (choose option 0 or 1): ";
    cin>>controller;
    while (controller = 1){
        for (int i = 0; i < student_num; i++){
            //get name
            cout<<"Name: ";
            cin>>name;
            students[i] = name;

            //get grade
            cout<<"Grade: ";
            cin>>grade;
            grades[i] = grade;

            //get sex
            cout<<"Sex: ";
            cin>>sexs;
            sex[i] = sexs;

            printf("%d student(s) entered successfully\n", i+1);
        }

        int option;
        cout<<"1. Print grade grades \n 2. Print average grade of all females \n (Option):";
        cin>>option;

        if (option == 1){
            cout<<"Name: ";
            cin>> name;

            for(int i = 0; i < students->length(); i++){
                if (name == students[i]){
                    printf("%-20s %-5s %-10s \n", "Name", "Sex", "Grade");
                    printf("===================================\n");
                    printf("%-20s %-5c %-10f \n", name, sex[i], grades[i]);
                    break;
                }
            }

        }
    }
    return 0;
}