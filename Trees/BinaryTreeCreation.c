#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n;   //Creating a node pointer
    n = (struct node*) malloc(sizeof(struct node));  //Allocating the memory in the heap
    n -> data = data;   //Setting the data
    n -> left = NULL;   //Setting the left and right children  to NULL
    n -> right = NULL;
    return n;
}

int main(){
    //Calling the function
    struct node *p = createNode(2);    
    struct node *p1 = createNode(1);    
    struct node *p2 = createNode(4);
    
    //linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;

    return 0;
}