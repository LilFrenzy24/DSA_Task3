// Enqueue and Dequeue operations in a queue

#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return false;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << enqueued successfully.\n";
        return true;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return -1;
        }
        int x = arr[front++];
        cout << x << " dequeued successfully.\n";
        return x;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.display();
    return 0;
}