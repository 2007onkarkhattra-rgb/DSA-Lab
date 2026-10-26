#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Queue {
    struct Node *front;
    struct Node *rear;
};
void initQueue(struct Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}
int isEmpty(struct Queue* q) {
    return q->front == NULL;
}
void enqueue(struct Queue* q, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        printf("Enqueued %d\n", val);
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
    printf("Enqueued %d\n", val);
}
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! No elements to dequeue\n");
        return -1;
    }
    struct Node* temp = q->front;
    int dequeuedVal = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return dequeuedVal;
}
int main() {
    struct Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    return 0;
}