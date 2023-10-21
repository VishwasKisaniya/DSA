#include <iostream>
using namespace std; 

int main(){
    // n is the length of array we enter and element is the element we have to search.
    int n, element;  
    cout<< "Enter the length of array: "<< endl;
    cin >> n;
    
    // An array is defined with maximum length of 20.
    int arr[20];    
    // taking input of array.
    cout<< "Ener the elements in array: "<<endl;
    for(int i = 0; i<n; i++){   
        cin>> arr[i];
    }

    cout<< "Enter the number you want to check" <<endl;
    cin>> element;

    //now for linear searching.
    for(int j = 0; j<n; j++){
        if (arr[j]== element)
        {
            cout<< j;
        }
        

    }

}