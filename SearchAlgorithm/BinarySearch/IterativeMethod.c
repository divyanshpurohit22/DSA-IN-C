#include<stdio.h>

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            high = mid - 1;
        }else{
            high = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 10, 15, 20, 25};
    int n = 6, key = 15;
    int result = binarySearch(arr, n, key);
    if(result != -1){
        printf("Found at %d", result);
    }else{
        printf("Not Found");
    }
}