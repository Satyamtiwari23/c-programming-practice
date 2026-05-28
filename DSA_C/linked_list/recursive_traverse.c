#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *create_node(int data){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}
void recursive_traverse(struct Node *head){
    if(head == NULL){
        return;
    }
    struct Node *temp = head;
    printf("%d ", temp->data);
    recursive_traverse(temp->next);
}

int main(){
    struct Node *head = NULL , *temp = NULL , *newnode;
    int count = 1;

    while(count){
        int data;
        printf("Enter data to insert in linked list: ");
        scanf("%d", &data);
        newnode = create_node(data);
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue (0/1): ");
        scanf("%d", &count);
    }

    printf("Linked List elements: ");
    recursive_traverse(head);
    printf("\n");

    return 0;
}