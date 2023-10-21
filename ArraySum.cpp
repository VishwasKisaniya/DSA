// hello
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int ar[10];
    for(int i=0; i<n ; i++){
        cin>>ar[i];

    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = ar[i] + sum;
    }
    cout<< sum << endl;
    
    

}