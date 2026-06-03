#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node *next;
};
struct Node *create_node(float data){
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}
void traverse_list(struct Node *head){
    struct Node *temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    temp = head;
    printf("List elements are:\n");
    while(temp != NULL){
        printf("%.4f->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void bubble_sort(struct Node *head){
    if(head == NULL){
        printf("List is empty, cannot sort\n");
        return;
    }
    struct Node * temp= head ;
    while(temp != NULL){
        if(temp->next == NULL){
            break;
        }
        else if(temp->data > temp->next->data){
            float swap = temp->data;
            temp->data = temp->next->data;
            temp->next->data = swap;
        }
        temp = temp->next;
    }
    printf("Sorted list is:\n");
    traverse_list(head);
    
}


int main(){
    struct Node *head = NULL , *newnode , *temp;
    int choice = 1;
    float data ;

    while(choice){
        printf("Enter (0/1) to pause or continue: ");
        scanf("%d", &choice);
        if(choice == 0 ){
            break;
        }
        printf("Enter Data: ");
        scanf("%f", &data);
        if(head == NULL){
            head = create_node(data);
            temp = head;
        }
        else{
            newnode = create_node(data);
            temp->next = newnode;
            temp = newnode;
        }
    }
    traverse_list(head);
    bubble_sort(head);
}