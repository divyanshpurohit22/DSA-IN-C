#include<stdio.h>

int linearSearch(int arr[], int n, int key, int index){
    if(index >= n){
        return -1;
    }
    if(arr[index] == key){
        return index;
    }
    return linearSearch(arr, n, key, index+1);
}

int main(){
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5, key = 10;
    int result = linearSearch(arr, n, key, 0);
    if(result != -1){
        printf("Element found at %d", result);
    }else{
        printf("Not found");
    }
    return 0;
}