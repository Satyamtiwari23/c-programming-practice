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
struct Node *recursive_search(struct Node *head, int key ,int position){
    if(head == NULL){
        return NULL;
    }
    struct Node *temp = head;
    if(temp->data == key){
        return temp , position;
    }
    position++;
    return recursive_search(temp->next, key, position);
}

void traverse_list(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
    traverse_list(head);

    int key , position = -1;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    recursive_search(head, key , position);


    return 0;
}