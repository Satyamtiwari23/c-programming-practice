#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node *link;
};
struct Node *create_Node(float n){
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = n;
    newnode->link = NULL;

    return newnode;
}
void traverse_list(struct Node *head){
    struct Node *temp;

    if(head == NULL){
        printf("List is Empty\n");
    }
    else{
        temp = head ;

        while(temp != NULL){
            printf("%f->", temp->data);
            temp = temp->link;
        }
    }
    printf("NULL\n");
    float key;
    int count = 0 ;
    printf("Enter element to search: ");
    scanf("%f", &key);
    temp = head;
    while(temp != NULL){
        if(temp->data == key){
            printf("Element %.4f found at %dth index.\n", key , count);
            exit(0);
        }
        count++;
        temp = temp->link;
    }
        printf("Element %.4f not found in the list.\n", key);
}


int main(){
    struct Node *head = NULL , *newnode , *temp;
    int choice = 1;
    float data;

    while(choice){
        printf("Enter(0/1) to continue or pause: ");
        scanf("%d", &choice);
        if(choice == 0){
            break;
        }
        printf("Enter Data: ");
        scanf("%f", &data);

        if(head == NULL){
            head = create_Node(data);
            temp = head;
        }
        else{
            newnode = create_Node(data);
            temp->link = newnode;
            temp = temp->link;
        }
    }
    traverse_list(head);
    return 0;
}