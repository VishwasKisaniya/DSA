#include <iostream>
using namespace std;

int main(){
    int n , largest;
    cin>> n;
    int arr[30];
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    for(int j=0; j<n; j++){
        if(arr[j]< arr[j+1]){
            largest = arr[j+1];

        }
        else{
            largest = arr[j];
        }
    }
    cout<< largest<< endl;

}