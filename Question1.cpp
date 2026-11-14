// Circular Queue Implementation in C++

#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, capacity, count;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isFull() {
        return (count == capacity);
    }

    bool isEmpty() {
        return (count == 0);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << "\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        count++;
        cout << value << " enqueued to queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued from queue.\n";
        front = (front + 1) % capacity;
        count--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // Demonstrates circular wrap-around
    q.display();
    return 0;
}