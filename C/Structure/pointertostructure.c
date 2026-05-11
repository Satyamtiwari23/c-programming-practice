#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int id;
    char name[20];
    float marks;
} stu;
int main(){
    stu *node;
    node = (stu*)malloc(sizeof(stu));
    printf("Enter id of student: ");
    scanf("%d",&node->id);
    printf("Enter name of student: ");
    getchar(); // to consume the newline character left by previous scanf
    fgets(node->name, 20, stdin);
    printf("Enter marks of student: ");
    scanf("%f",&node->marks);
    
    printf("\nId of student: %d\n",node->id);
    printf("Name of student: %s",node->name);
    printf("Marks of student: %.2f\n",node->marks);
    
    free(node); // free the allocated memory
    return 0;
}