#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int isEmpty(struct Node* top) {
    return top == NULL;
}
struct Node* push(struct Node* top, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return top;
    }
    newNode->data = val;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d onto stack\n", val);
    return top;}
struct Node* pop(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack Underflow! No elements to pop\n");
        return top;    }
    struct Node* temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
    return top;}
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return -1;  }
    return top->data;}
int main() {
    struct Node* top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    printf("Top element is: %d\n", peek(top));
    top = pop(top);
    printf("Top element after pop is: %d\n", peek(top));
    return 0;
}
