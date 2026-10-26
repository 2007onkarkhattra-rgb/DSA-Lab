#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Queue {
    int arr[MAX_SIZE];
    int front;
    int rear;
};
void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}l
int isFull(struct Queue* q) {
    return q->rear == MAX_SIZE - 1;
}
int isEmpty(struct Queue* q) {
    return q->front == -1 || q->front > q->rear;
}
void enqueue(struct Queue* q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", val);
        return;
    }
    if (q->front == -1) {
        q->front = 0; 
    }
    q->arr[++(q->rear)] = val;
    printf("Enqueued %d into queue\n", val);
}
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! No elements to dequeue\n");
        return -1;
    }
    int dequeuedVal = q->arr[q->front++];
    return dequeuedVal;
}
int peek(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->arr[q->front];
}
int main() {
    struct Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Front element is: %d\n", peek(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Front element after dequeue is: %d\n", peek(&q));
    return 0;
}