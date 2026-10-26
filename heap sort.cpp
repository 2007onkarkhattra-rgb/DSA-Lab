#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void max_heap(int* arr, int n, int i) {
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        max_heap(arr, n, largest);
    }
}
void Build_Heap(int* arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        max_heap(arr, n, i);
    }
}
void Heap_Sort(int* arr, int n) {
    Build_Heap(arr, n);
    int j = n - 1;
    while (j > 0) {
        swap(&arr[0], &arr[j]);
        max_heap(arr, j, 0);
        j--;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {1, 9, 8, 6, 5, 4, 3, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: \n");
    printArray(arr, n);
    Heap_Sort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}