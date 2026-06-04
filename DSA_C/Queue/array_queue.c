#include <stdio.h>
#include <stdlib.h>
# define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
int isFull(){
    if(rear == MAX-1){
        printf("Queue is full\n");
        return 1;
    }else{
        printf("Queue is not full\n");
        return 0;
    }
}
int isEmpty(){
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        return 1;
    }else{
        printf("Queue is not empty\n");
        return 0;
    }
}

void traverse_queue(){
    if(isEmpty()){
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d -> ", queue[i]);
    }
    printf("NULL\n");
}

void enqueue (int n){
    if(isFull()){
        return;
    }
    rear++;
    queue[rear] = n;
    if(front == -1){
        front = 0;
    }
    traverse_queue();
}

void dequeue(){
    if(isEmpty()){
        return;
    }
    int data = queue[front];
    printf("Dequeued: %d\n", data);
    front++;
    traverse_queue();
}
void peek(){
    if(isEmpty()){
        return;
    }
    printf("Front element is: %d\n", queue[front]);
}

int size(){
    if(isEmpty()){
        return 0;
    }
    return rear - front + 1;
}
int main(){
    enqueue(10);
    enqueue(39);
    enqueue(23);
    dequeue();
    peek();
    int len = size();
    printf("Size of the queue is: %d\n", len);
    return 0;
}