#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node *link;
};

struct Node * create_node(float n){
    struct Node * newnode ;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = n;
    newnode->link = NULL ;

    return newnode ;
}
struct Node * traverse_list(struct Node * head){
    struct Node * temp;
    if(head == NULL){
        printf("List is empty\n");
        return head;
    }
    temp = head;
    while(temp != NULL ){
        printf("%f->", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
    return head;
}

int main(){
    struct Node *head =NULL , *newnode , *temp;
    int choice = 1;
    float data;

    while(choice){
        printf("Enter(0/1) to continue or pause: ");
        scanf("%d", &choice);
        if(choice == 0){
            break;
        }
        printf("Enter Data:");
        scanf("%f", &data);
        if(head == NULL){
            head = create_node(data);
            temp = head;
        }
        else{
            newnode = create_node(data);
            temp->link = newnode;
            temp = temp->link;
        }
    }
    traverse_list(head);

    return 0;    
}
