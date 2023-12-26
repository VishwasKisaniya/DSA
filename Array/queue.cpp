#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> hello;

    hello.push(5);
    cout<< "front element "<< hello.front()<< endl;
    
    cout<< "back element "<< hello.back()<< endl;
    hello.push(8);

    hello.push(99);
    hello.push(69);
    cout<< "front element "<< hello.front()<< endl;

    cout<< "back element "<< hello.back()<< endl;
    cout<< "size: "<< hello.size()<<endl;
    hello.pop();
    cout<< "size: "<< hello.size()<<endl;

    if(hello.empty()){
        cout<< "empty" <<endl;

    }
    else{
        cout<< "not empty"<< endl;
    }

    /////////
    deque<int> d;
    d.push_back(122);
    d.push_back(13);
    cout<< "front element "<< d.front()<< endl;
    d.push_front(4);
    cout<< "front element "<< d.front()<< endl;
    d.pop_front();
    cout<< "front element "<< d.front()<< endl;

}