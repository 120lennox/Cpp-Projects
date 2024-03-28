#include <iostream>
#include <string>
using namespace std;

int main(){
    const int student_num = 10;
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
        do {
            cout<<"1. Print grade grades \n 2. Print average grade of all females \n 3. Quit \n (Option): ";
            cin>>option;
            float total_grades_f = 0;
            float average = 0;
            float counter = 0;
            

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

            else if (option == 2){
                for (int i = 0; i < students->length(); i++){
                    if (sex[i] == 'F'){
                        total_grades_f += grades[i];
                        counter ++;
                    }
                }
                average = total_grades_f / counter;
                printf("Average: %f \n", average);

            }
        }
        while (option != 3);
    }
    return 0;
}