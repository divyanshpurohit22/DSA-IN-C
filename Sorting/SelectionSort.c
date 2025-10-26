#include<stdio.h>
int main(){
    int arr[] = {1, 3, 7, 9, 0, 2, 4, 8, 5, 6};
    int n = 10;

    for(int i=0; i<n-1; i++){
        int min_pos = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        if(min_pos != i){
            int temp = arr[i];
            arr[i] = arr[min_pos];
            arr[min_pos] = temp;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}