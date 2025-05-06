#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    T* arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new T[capacity];
        front = rear = -1;
    }

    void enqueue(T value) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = value;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
        } else {
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
        } else {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue<int> queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();

    return 0;
}
