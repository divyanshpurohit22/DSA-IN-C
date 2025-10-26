#include <stdio.h>

#define MAX 100

int delete(int arr[], int size, int pos) {
    if (size <= 0) {
        printf("Array is empty! Deletion failed.\n");
        return size;
    }
    if (pos < 0 || pos >= size) {
        printf("Invalid position! Deletion failed.\n");
        return size;
    }

    // Store the element being deleted 
    int deleted = arr[pos];

    // Shift elements to the left
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Deleted element: %d\n", deleted);
    return size - 1;  // new size
}

int main() {
    int arr[MAX] = {10, 20, 99, 30, 40, 50};
    int size = 6;

    printf("Original array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }    
    printf("\n");

    // Delete element at position 2
    size = delete(arr, size, 2);

    printf("After deletion: ");
    for (int i = 0; i < size; i++){ 
        printf("%d ", arr[i]);
    }    
    printf("\n");

    return 0;
}