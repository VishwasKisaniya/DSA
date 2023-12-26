#include <iostream>

using namespace std;

class LinearQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    LinearQueue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = rear = -1;
        size = 0;
    }

    ~LinearQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }

        size--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return -1;
        }

        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    LinearQueue queue(5);

    queue.enqueue(22);
    queue.enqueue(32);
    queue.enqueue(54);
    queue.enqueue(86);
    queue.enqueue(30);

    cout << "Queue elements: ";
    queue.display();

    cout << "Dequeue: ";
    queue.dequeue();
    queue.display();

    cout << "Peek: " << queue.peek() << endl;

    return 0;
}
