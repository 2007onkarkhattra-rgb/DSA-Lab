#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct CircularQueue {
    int arr[SIZE];
    int front, rear;
};
void initQueue(struct CircularQueue* q) {
    q->front = -1;
    q->rear = -1;
}
int isFull(struct CircularQueue* q) {
    return ((q->rear + 1) % SIZE == q->front);
}
int isEmpty(struct CircularQueue* q) {
    return q->front == -1;
}
void enqueue(struct CircularQueue* q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", val);
        return;
    }
    if (q->front == -1) {
        q->front = 0; // First element
    }
    q->rear = (q->rear + 1) % SIZE;
    q->arr[q->rear] = val;
    printf("Enqueued %d\n", val);
}
int dequeue(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! No elements to dequeue\n");
        return -1;
    }
    int dequeuedVal = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return dequeuedVal;
}
int main() {
    struct CircularQueue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    return 0;
}