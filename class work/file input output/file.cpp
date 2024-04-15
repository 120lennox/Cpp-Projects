#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//reading from a file 
void read_word(){
    ifstream read("output.txt");
    
    string word1;
    char word2;
    string word3;
    char word4;
    string word5;

    read>>word1>>word2>>word3>>word4>>word5;
    cout<<word1<<word2<<word3<<word4<<word5<<endl;

}

//writing in a file
void write_word(){
    ofstream write;
    write.open("output.txt");

    write<<"word"<<" "<<"is"<<" "<<"written"<<endl;
    write.close();
}

int main(){
    ofstream output("numbers.txt");
    for (int i = 1; i < 20; i++){
        output<<i<<" ";
        if (i % 10 == 0){
            output<<"\n";
        }
    }
}