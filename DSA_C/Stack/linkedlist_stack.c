#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;  
};
struct Node *top = NULL;

struct Node *create_node(int data){
    struct Node *newnode ;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->link = NULL;

    return newnode;
}

void traverse_list(struct Node *top){
    struct Node *temp = top;
    if(temp == NULL){
        printf("Stack is empty\n");
        return;
    }
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

void push(int data){
    struct Node *newnode = create_node(data);
    if(top == NULL){
        top = newnode;
    }else{
        newnode->link = top;
        top = newnode;
    }
}