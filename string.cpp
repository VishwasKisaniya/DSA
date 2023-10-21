#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++){
        count= count + 1;
    }
    return count;
}

int main(){

    char names[40];
    cout<< "enter your name buddy"<< endl;
    cin>> names;
    cout<< "hello "<< names << endl;

    cout<< "The legth of the string is : "<< length(names)<<endl;

}