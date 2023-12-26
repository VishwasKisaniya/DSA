#include <iostream>
using namespace std;
//symbol table me store hoti hai address of variables
/*

Pointers: The place where we can store the address of variables is called pointers

*/
// Creating a function of pointers.
void poin(int *p){
    cout<< p<< endl;
    

}

int main(){

    int i = 10; 
    cout<< &i << endl;    //This & gives the address of where i is stored

    int * p = &i;  // here an integer pointer p is created which store the address of i.
    cout<< *p << endl;  // Gives the value stored in pointer p.

    cout<< sizeof(p)<< endl;
    /*
    i and *p are the same thing we can access by any of them...
    */
   i++;
   cout<< i << endl;
   cout << *p << endl;

   int a = i;
   a++;
   cout<< a << endl;
   cout<< *p << endl;

   cout << p<< endl;
   p++;
   cout<< p << endl;


}