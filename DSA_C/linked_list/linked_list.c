#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *link;
};
int main(){
    int n;
    float data;
    struct Node *newnode=NULL , *head=NULL , *temp = NULL;

    do{
        printf("Do you want to add another node 0/1: ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Data: ");
        scanf("%f", &data);
        if(head == NULL){
            head->data = data;
            head->link = newnode;
        }else{
            temp->data = data;
            temp->link = newnode;
            temp = temp->link;
        }
    }while(n);
    temp = head;
    for(int i = 0 ; i <= temp ; i++){
        printf("%f", temp->data);
        temp = temp->link;
    }
}
