#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item){
    if(top == MAX_SIZE - 1){
        printf("Overflow and Exit \n");
    } else{
        stack[++top] = item;
        printf("%d Item Inserted.", item);
    }
}

void pop(){
    if(top == -1){
        printf("Underflow and exit \n");
    } else{
        int Item = stack[top--];
        printf("%d Item deleted. \n", Item);
    }
}

void display(){
    if(top == -1){
        printf("The Stack is empty.\n");
    } else{
        printf("Stack Elements: ");
        for(int i=0; i<=top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, item;
    printf("1.Push \n 2.Pop \n 3.Display \n 4.Exit \n");
    while(true){
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2: 
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;
                
            default:
                printf("Invalid Choice!! \n");    
        }
    }
    return 0;
}