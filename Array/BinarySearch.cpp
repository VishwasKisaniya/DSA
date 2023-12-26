#include <iostream>
using namespace std;
// For sorted array
int binarySearch(int input[], int n, int val){
    int start = 0, end = n-1 ;
    
    while (start <= end){
        int mid = (start + end)/2 ;
        if (input[mid] == val){
            return mid;
        }
        else if( val < input[mid]){
            end = mid - 1 ;
        }
        else{
            start = mid + 1; 

        }

    }
    return -1;
}
int main(){
    int n , val;
    cout<< "Enter the length of your array: "<< endl;
    cin>> n;
    cout<< "Input array elements: "<< endl;
    int input[20];
    for(int i = 0; i<n; i++){
        cin>> input[i];

    }
    // the element to find
    cout<< "Enter the element to find: "<<endl;
    cin>> val;

    cout<< binarySearch(input, n, val) <<endl;

}