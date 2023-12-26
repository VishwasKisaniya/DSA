class Queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(){
        size = 100;
        arr = new int[size];
        front = 0;
        rear = 0;
        
    }

    void enqueue(int data){
        if(rear == size){
            cout<<"full queue"<<endl;
        }
        else{
            arr[rear]==data;
            rear++;
        }
    }
    // ese hi dequeue and front vaghra bna lenaa

}
