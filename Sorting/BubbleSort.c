#include<stdio.h>

void bubbleSort(int arr[], int n){
    //Sorting in ascending order
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];  
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1, 3, 7, 9, 0, 2, 4, 8, 5, 6};
    int n = 10;

    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}