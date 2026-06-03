#include<stdio.h>
#include<stdlib.h>
#define MAX 10
float stack [MAX];
int top = -1;
void push(float data){
    if(top == MAX - 1){
        printf("Stack Overflow!\n"); 
    }
    else{
        top++;
        stack[top] = data ;
        printf("%f pushed to stack\n", data);
    }
}
void pop(){
    if(top == -1){
        printf("Stack Underflow!\n");
    }
    else{
        printf("%f popped from stack\n", stack[top]);
        top-- ;
    }
}
void peek(){
    if(top == -1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("%f is top element", stack[top]);
    }
}
void display(){
    if(top == -1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Stack Elements are:\n");
        for(int i = 0 ; i <= top ; i++){
            printf("%f\n", stack[i]);
        }
    }
}
void isEmpty(){
    if(top == -1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Stack is not Empty!\n");
    }
}
void isFull(){
    if(top == MAX - 1){
        printf("Stack is Full!\n");
    }
    else{
        printf("Stack is not Full!\n");
    }
}
void reverse_stack(){
    if(top == -1){
        printf("Stack is Empty!\n");
    }
    else{
        float temp_stack[MAX];
        int temp_top = -1;
        while(top != -1){
            temp_top++;
            temp_stack[temp_top] = stack[top];
            top--;
        }
        for(int i = 0 ; i <= temp_top ; i++){
            top++;
            stack[top] = temp_stack[i];
        }
        printf("Stack Reversed!\n");
    }
}
void clear_stack(){
    top = -1;
    printf("Stack Cleared!\n");
}
void size(){
    printf("Stack Size: %d\n", top + 1);
}
int main(){
    float data;
    printf("Enter Data: ");
    scanf("%f", &data);
    push(data);
    printf("Enter Data: ");
    scanf("%f", &data);
    push(data);
    printf("Enter Data: ");
    scanf("%f", &data);
    push(data);
    printf("Enter Data: ");
    scanf("%f", &data);
    push(data);
    printf("\n");
    peek();
    printf("\n");
    pop();
    printf("\n");
    display();
    printf("\n");
    isEmpty();
    printf("\n");
    isFull();
    printf("\n");
    reverse_stack();
    printf("\n");
    display();
    printf("\n");
    size();
    printf("\n");
    clear_stack();
    printf("\n");
    display();
    printf("\n");

    return 0;
}