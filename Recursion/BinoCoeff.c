#include<stdio.h>

int binomialCoefficient(int n, int r){
    if(r == 0 || r == n){  //Base Condition
        return 1;
    }
    return binomialCoefficient(n-1, r-1) + binomialCoefficient(n-1, r); 
}

int main(){
    int n = 5, r = 2;
    int result = binomialCoefficient(n, r);
    printf("C(%d %d) = %d", n, r, result);
    return 0;
}