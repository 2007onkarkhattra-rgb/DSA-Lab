#include <stdio.h>
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
void binSort(int arr[], int n) {
    int max = getMax(arr, n);
    int bin[max + 1];
    for (int i = 0; i <= max; i++) {
        bin[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        bin[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (bin[i] > 0) {
            arr[index++] = i;
            bin[i]--;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: \n");
    printArray(arr, n);
    binSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}