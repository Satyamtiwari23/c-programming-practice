// wrong
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int coeff;
    int exp;
    struct Node *next;
};
struct Node *create_node(int coeff, int exp){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL;

    return newnode;
}
void traverse_list(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%dx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if(temp != NULL){
            printf(" + ");
        }
    }
    printf("\n");
}
void add_poly(struct Node *poly1, struct Node *poly2){
    struct Node * result_head = NULL , *result_temp = NULL , *newnode;
    while(poly1 != NULL && poly2 != NULL){
        if(poly1->exp > poly2->exp){
            newnode = create_node(poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        }
        else if (poly1->exp < poly2->exp){
            newnode = create_node(poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
        else{
            newnode = create_node(poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        if(result_head == NULL){
            result_head = newnode;
            result_temp = newnode;
        }
        else{
            result_temp->next = newnode;
            result_temp = newnode;
        }
    } 
    while(poly1 != NULL){
        newnode = create_node(poly1->coeff, poly1->exp);
        result_temp->next = newnode;
        result_temp = newnode;
        poly1 = poly1->next;
    }
    while(poly2 != NULL){
        newnode = create_node(poly2->coeff, poly2->exp);
        result_temp->next = newnode;
        result_temp = newnode;
        poly2 = poly2->next;
    }
    printf("Resultant Polynomial after addition: ");
    traverse_list(result_head);
}
int main(){
    struct Node *hpoly1 = NULL , *hpoly2 = NULL , *temp = NULL , *newnode;
    int count = 1, coeff, exp;;

    printf("Enter first polynomial:\n");
    while(count){
        printf("Do you want to continue (0/1): ");
        scanf("%d", &count);
        if(!count){
            break;
        }
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &coeff, &exp);
        newnode = create_node(coeff, exp);
        if(hpoly1 == NULL){
            hpoly1 = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    count = 1;
    printf("Enter second polynomial:\n");
    while(count){
        printf("Do you want to continue (0/1): ");
        scanf("%d", &count);
        if(!count){
            break;
        }
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &coeff, &exp);
        newnode = create_node(coeff, exp);
        if(hpoly2 == NULL){
            hpoly2 = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("First Polynomial: ");
    traverse_list(hpoly1);
    printf("Second Polynomial: ");
    traverse_list(hpoly2);
    add_poly(hpoly1, hpoly2);

    return 0;
}