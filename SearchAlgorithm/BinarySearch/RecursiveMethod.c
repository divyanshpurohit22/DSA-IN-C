#include<stdio.h>

int binarySearch(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] > key){
        return binarySearch(arr, low, mid-1, key);
    }else{
        return binarySearch(arr, mid+1, high, key);
    }
}

int main(){
    int arr[] = {5, 10, 15, 20, 25};
    int n = 6, key = 30;
    int result = binarySearch(arr, 0, n-1, key);
    if(result != -1){
        printf("Found at %d", result);
    }else{
        printf("Not Found");
    }
}