#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}
int kthSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int index = partition(arr, low, high);
        if (index - low == k - 1)
            return arr[index];
        if (index - low > k - 1)
            return kthSmallest(arr, low, index - 1, k);
        return kthSmallest(arr, index + 1, high, k - index + low - 1);
    }
    return -1; // If k is out of bounds
}
int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printf("Given array: 7, 10, 4, 3, 20, 15\n");
    int result = kthSmallest(arr, 0, n - 1, k);
    printf("The %d-th smallest element is %d\n", k, result);
    return 0;
}