//Maxheap and Heapsort <<<:>>>
#include <stdio.h>
void heapify(int* arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
void insert(int data, int* arr, int n){
    arr[n]  = data;
    n++;
    heapify(arr,n,n-1);
}

void traversal(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapsort(int* arr , int n){
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int main() {
    int arr[7] = {3, 2, 4, 1, 8, 3, 9};
    int n = 7;

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    traversal(arr, n);
    heapsort(arr,n);
    traversal(arr,n);
    insert(10,arr,n);
    traversal(arr,n);
    return 0;
}
