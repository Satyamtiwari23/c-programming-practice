#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node *link;
};
struct Node * create_node(float data){
    struct Node * newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->link = NULL;

    return newnode;
};
void traverse_list(struct Node * head){
    struct Node * temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    temp = head ;
    while(temp != NULL){
        printf("%.4f->", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");  
}
void insert_node(struct Node * head){
    int key;
    int count = 1 ;
    struct Node * temp = head;
    if(head == NULL){
        return;
    }
    printf("Enter index to insert : ");
    scanf("%d", &key);
    temp = head;
    /* assume: temp = head; count = 0; key is given */
    while (temp != NULL) {
        if(key == 0){
            float new_data;
            printf("Enter data to insert: ");
            if (scanf("%f", &new_data) != 1) {
                printf("Invalid input.\n");
                return;
            }
    
            struct Node *newnode = create_node(new_data);
    
            /* fix the links for a singly linked list */
            newnode->link = head;  /* may be NULL if list is empty */
            head = newnode;
    
            printf("Node inserted successfully at head.\n");
            break;
        }
        else if (count == key) {
            float new_data;
            printf("Enter data to insert: ");
            if (scanf("%f", &new_data) != 1) {
                printf("Invalid input.\n");
                return;
            }
    
            struct Node *newnode = create_node(new_data);
    
            /* fix the links for a singly linked list */
            newnode->link = temp->link;  /* may be NULL if temp is tail */
            temp->link = newnode;
    
            printf("Node inserted successfully.\n");
            break;
        }
        count++;
        temp = temp->link;
    }
    
    /* if loop finished without inserting */
    if (temp == NULL && count <= key) {
        printf("Position %d not found — list too short.\n", key);
    }
  
    traverse_list(head);
}

int main(){
    struct Node * head = NULL , * newnode , * temp ;
    int choice = 1;
    float data;
    while(choice){
        printf("Enter(0/1) to stop or continue: ");
        scanf("%d", &choice);
        if(choice == 0){
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
            temp->link = newnode;
            temp = newnode;
        }
    }
    traverse_list(head);
    insert_node(head);
    return 0;
}