// C Functions for Double-Ended Queue (Deque)

#include <stdio.h>
#define MAX 100

typedef struct {
    int arr[MAX];
    int front;
    int rear;
    int size;
} Deque;

void initDeque(Deque *dq) {
    dq->front = -1;
    dq->rear = 0;
    dq->size = 0;
}

// 1. Front Insertion
void insertFront(Deque *dq, int key) {
    if (dq->size == MAX) {
        printf("Overflow\n");
        return;
    }
    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX - 1;
    } else {
        dq->front = dq->front - 1;
    }
    dq->arr[dq->front] = key;
    dq->size++;
}

// 2. Rear Insertion
void insertRear(Deque *dq, int key) {
    if (dq->size == MAX) {
        printf("Overflow\n");
        return;
    }
    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } else {
        dq->rear = dq->rear + 1;
    }
    dq->arr[dq->rear] = key;
    dq->size++;
}

// 3. Front Deletion
void deleteFront(Deque *dq) {
    if (dq->size == 0) {
        printf("Underflow\n");
        return;
    }
    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->front == MAX - 1) {
        dq->front = 0;
    } else {
        dq->front = dq->front + 1;
    }
    dq->size--;
}

// 4. Rear Deletion
void deleteRear(Deque *dq) {
    if (dq->size == 0) {
        printf("Underflow\n");
        return;
    }
    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } else {
        dq->rear = dq->rear - 1;
    }
    dq->size--;
}