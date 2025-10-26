#include <stdio.h>
#define MAX 100  

int insert(int arr[], int size, int capacity, int element, int pos) {
    // Check if array is full
    if (size >= capacity) {
        printf("Array is full! Insertion failed.\n");
        return size;
    }
    // Check valid position 
    if (pos < 0 || pos > size) {
        printf("Invalid position! Insertion failed.\n");
        return size;
    }

    // Shift elements to the right
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos] = element;
    return size + 1;  
}

int main() {
    int arr[MAX] = {10, 20, 30, 40, 50};
    int size = 5;       
    int capacity = MAX;

    printf("Original array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }    
    printf("\n");

    size = insert(arr, size, capacity, 99, 2);

    printf("After insertion: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }    
    printf("\n");

    return 0;
}