#include<stdio.h>
#include<stdlib.h>
struct Node {
    float data;
    struct Node * prev;
    struct Node * next;
};
struct Node * create_node(float data){
    struct Node * newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode->data = data ;
    newnode->prev = NULL;
    newnode->next = NULL;

    return newnode;
}
void traverse_list(struct Node * head){
    struct Node * temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    printf("Traverse in forward direction\n");
    temp = head ;
    while(temp != NULL){
        printf("%.4f->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Traverse in Backward direction\n");
    temp = head ;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%.4f->", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main(){
    float data;
    struct Node * head = NULL, * newnode , * temp;
    int choice=1;

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
            temp->next = newnode;
            newnode->prev = temp ;
            temp = newnode;
        }
    }
    traverse_list(head);
    return 0;
}