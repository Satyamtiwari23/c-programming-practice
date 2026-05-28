#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node *next;
};
int main(){
    struct Node *head = NULL , *newnode , *temp ;
    int choice = 1;

    while(choice){
        newnode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter Data: ");
        scanf("%f", &newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head = newnode ;
            temp = newnode ;
        }
        else{
            temp->next = newnode;
            temp = newnode ;
        }
        printf("Do you want to add another node? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    }
     // traversal of nexted list
    printf("\nnexted List elements are:\n");
    temp = head;
    while (temp != NULL) {
        printf("%f -> ", temp->data);
        temp = temp->next;  // move to next node
    }

    return 0;
}