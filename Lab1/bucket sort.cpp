#include <stdio.h>
#include <stdlib.h>
struct Node {
    float data;
    struct Node* next;
};
struct Node* insertSorted(struct Node* head, float val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL || head->data >= val) {
        newNode->next = head;
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL && current->next->data < val) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
void bucketSort(float arr[], int n) {
    // 1. Create n empty buckets using dynamic array of pointers
    struct Node** buckets = (struct Node**)malloc(n * sizeof(struct Node*));
    for (int i = 0; i < n; i++) {
        buckets[i] = NULL;
    }
    for (int i = 0; i < n; i++) {
        int bi = n * arr[i]; 
        if (bi >= n) bi = n - 1; 
        buckets[bi] = insertSorted(buckets[bi], arr[i]);
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        struct Node* current = buckets[i];
        while (current != NULL) {
            arr[index++] = current->data;
            struct Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(buckets);
}
void printArray(float arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%.2f ", arr[i]);
    printf("\n");
}
int main() {
    float arr[] = {0.89, 0.56, 0.65, 0.12, 0.34, 0.23, 0.45};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: \n");
    printArray(arr, n);
    bucketSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}