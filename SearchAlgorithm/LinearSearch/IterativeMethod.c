#include<stdio.h>

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 33, 54, 12, 39};
    int n = 5, key = 12;
    int result = linearSearch(arr, n, key);
    if(result != -1){
        printf("Element found at %d", result);
    }else{
        printf("Element not found");
    }
    return 0;
}
