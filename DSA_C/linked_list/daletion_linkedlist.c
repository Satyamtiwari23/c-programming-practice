#include<stdio.h>
#include<stdlib.h>
struct Node{
    float data;
    struct Node * link;
};
struct Node *create_node(float data){
    struct Node * newnode ;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->link = NULL;
    
    return newnode;
}
void traverse_list(struct Node *head){
    struct Node * temp;
    int count = 0 ;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    temp = head ;
        printf("Data\t\tIndex\n");
    while(temp != NULL){
        printf("%.4f           %d\n", temp->data , count);
        printf("⇩\n");
        temp = temp->link;
        count++;
    }
    printf("NULL\n");
}
void delete_node(struct Node *head){
    struct Node *temp = head , *prev = NULL;
    int index;
    printf("Enter index of node to be deleted: ");
    scanf("%d", &index);
    if(index == 0){
        head = head->link;
        free(temp);
        return;
    }
    int count = 0 ;
    while(temp->link != NULL && count < index){
        if(count == index - 1){
            struct Node * node_to_delete = temp->link;
            temp->link = node_to_delete->link;
            free(node_to_delete);
            return;
        }
        prev = temp;
        temp = temp->link;
        count++;
    }
    if(temp == NULL){
        printf("Index out of bounds\n");
        return;
    }

}

int main(){
    struct Node * newnode , * head = NULL , * temp;
    int choice = 1;
    float data;

    while(choice){
        printf("Enter (0/1) to continue or stop: ");
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
            temp = temp->link;
        }
    }
    traverse_list(head);
    delete_node(head);
    traverse_list(head);
}